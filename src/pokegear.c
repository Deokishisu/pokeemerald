#include "global.h"
#include "alloc.h"
#include "bg.h"
#include "decompress.h"
#include "event_object_movement.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "main.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "rtc.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "task.h"
#include "text_window.h"
#include "constants/event_objects.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/region_map_sections.h"

//extern
extern void AddTextPrinterParameterized4(u8 windowId, u8 fontId, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, const u8 *color, s8 speed, const u8 *str);
extern void *AllocZeroed(u32 size);

// static declarations
static void UpdateDateTime(u8 taskId);
static void HandleKeyPresses(u8 taskId);
bool8 IsInJohto(void);
void LoadBackgroundGraphics(void);
static void InitializeTextWindows(void);
static void CloseMenuScreen(u8 taskId);
static void ChangePage(void);
static void ShowConditionalCardIcons(void);
static void SetUpTextPerPage(void);
static void FormatPokegearTime(u8 *dest, s32 hour, s32 minute, s32 second);
static u8 FindPlayerLocation(void);
static void nothing(struct Sprite *sprite);
static void LoadPokegearSpriteGfx(void);
void InitPokegearScreen(void);
static void PokegearMainCallback(void);
static void PokegearVBlankCallback(void);

//.rodata

static const u32 gGraphics_PokegearTileset[] = INCBIN_U32("graphics/pokegear/pokegear.4bpp.lz");
static const u16 gPalette_PokegearPalMale[] = INCBIN_U16("graphics/pokegear/pokegear_male.gbapal");
static const u16 gPalette_PokegearPalFemale[] = INCBIN_U16("graphics/pokegear/pokegear_female.gbapal");
static const u32 gTilemap_TimeCard[] = INCBIN_U32("graphics/pokegear/time_card.bin.lz");
static const u32 gTilemap_MapCardJohto[] = INCBIN_U32("graphics/pokegear/map_card_johto.bin.lz");
static const u32 gTilemap_MapCardKanto[] = INCBIN_U32("graphics/pokegear/map_card_kanto.bin.lz");
static const u32 gTilemap_PhoneCard[] = INCBIN_U32("graphics/pokegear/phone_card.bin.lz");
static const u32 gTilemap_RadioCard[] = INCBIN_U32("graphics/pokegear/radio_card.bin.lz");
static const u16 gPalette_TextboxPal[] = INCBIN_U16("graphics/pokegear/pokegear_textbox.gbapal");
static const u32 gMapCardCursor_Gfx[] = INCBIN_U32("graphics/pokegear/map_cursor.4bpp.lz");
static const u32 sArrowCursor_Gfx[] = INCBIN_U32("graphics/pokegear/arrow.4bpp.lz");

static const u8 gText_Switch[] = _("SWITCH▶");
static const u8 gText_Exit[] = _("Press any button\nto exit.");
static const u8 gText_DaysOfWeek[7][10] = {
        _("SUNDAY"),
        _("MONDAY"),
        _("TUESDAY"),
        _("WEDNESDAY"),
        _("THURSDAY"),
        _("FRIDAY"),
        _("SATURDAY")
};
static const u8 sMapCard_NewBarkTown[] = _("NEW BARK\nTOWN");
static const u8 sMapCard_CherrygroveCity[] = _("CHERRYGROVE\nCITY");
static const u8 sMapCard_VioletCity[] = _("VIOLET CITY");
static const u8 sMapCard_AzaleaTown[] = _("AZALEA TOWN");
static const u8 sMapCard_SproutTower[] = _("SPROUT\nTOWER");
static const u8 sMapCard_RuinsOfAlph[] = _("RUINS\nOF ALPH");
static const u8 sMapCard_SlowpokeWell[] = _("SLOWPOKE\nWELL");
static const u8 sMapCard_IlexForest[] = _("ILEX\nFOREST");
static const u8 sMapCard_GoldenrodCity[] = _("GOLDENROD\nCITY");
static const u8 sMapCard_NationalPark[] = _("NATIONAL\nPARK");
static const u8 sMapCard_EcruteakCity[] = _("ECRUTEAK\nCITY");
static const u8 sMapCard_BurnedTower[] = _("BURNED\nTOWER");
static const u8 sMapCard_OlivineCity[] = _("OLIVINE\nCITY");
static const u8 sMapCard_BattleTower[] = _("BATTLE\nTOWER");
static const u8 sMapCard_WhirlIslands[] = _("WHIRL\nISLANDS");
static const u8 sMapCard_CianwoodCity[] = _("CIANWOOD\nCITY");
static const u8 sMapCard_MahoganyTown[] = _("MAHOGANY\nTOWN");
static const u8 sMapCard_LakeOfRage[] = _("LAKE OF\nRAGE");
static const u8 sMapCard_BlackthornCity[] = _("BLACKTHORN\nCITY");
static const u8 sMapCard_DragonsDen[] = _("DRAGON'S\nDEN");
static const u8 sMapCard_Route26[] = _("ROUTE 26");
static const u8 sMapCard_Route27[] = _("ROUTE 27");
static const u8 sMapCard_Route28[] = _("ROUTE 28");
static const u8 sMapCard_Route29[] = _("ROUTE 29");
static const u8 sMapCard_Route30[] = _("ROUTE 30");
static const u8 sMapCard_Route31[] = _("ROUTE 31");
static const u8 sMapCard_Route32[] = _("ROUTE 32");
static const u8 sMapCard_Route33[] = _("ROUTE 33");
static const u8 sMapCard_Route34[] = _("ROUTE 34");
static const u8 sMapCard_Route35[] = _("ROUTE 35");
static const u8 sMapCard_Route36[] = _("ROUTE 36");
static const u8 sMapCard_Route37[] = _("ROUTE 37");
static const u8 sMapCard_Route38[] = _("ROUTE 38");
static const u8 sMapCard_Route39[] = _("ROUTE 39");
static const u8 sMapCard_Route40[] = _("ROUTE 40");
static const u8 sMapCard_Route41[] = _("ROUTE 41");
static const u8 sMapCard_Route42[] = _("ROUTE 42");
static const u8 sMapCard_Route43[] = _("ROUTE 43");
static const u8 sMapCard_Route44[] = _("ROUTE 44");
static const u8 sMapCard_Route45[] = _("ROUTE 45");
static const u8 sMapCard_Route46[] = _("ROUTE 46");
static const u8 sMapCard_UnionCave[] = _("UNION CAVE");
static const u8 sMapCard_Lighthouse[] = _("LIGHTHOUSE");
static const u8 sMapCard_IcePath[] = _("ICE PATH");
static const u8 sMapCard_DarkCave[] = _("DARK CAVE");
static const u8 sMapCard_RadioTower[] = _("RADIO TOWER");
static const u8 sMapCard_MtMortar[] = _("MT.MORTAR");
static const u8 sMapCard_TinTower[] = _("TIN TOWER");
static const u8 sMapCard_SilverCave[] = _("SILVER CAVE");
static const u8 sMapCard_PalletTown[] = _("PALLET TOWN");
static const u8 sMapCard_ViridianCity[] = _("VIRIDIAN\nCITY");
static const u8 sMapCard_PewterCity[] = _("PEWTER CITY");
static const u8 sMapCard_CeruleanCity[] = _("CERULEAN\nCITY");
static const u8 sMapCard_LavenderTown[] = _("LAVENDER\nTOWN");
static const u8 sMapCard_VermilionCity[] = _("VERMILION\nCITY");
static const u8 sMapCard_CeladonCity[] = _("CELADON\nCITY");
static const u8 sMapCard_FuchsiaCity[] = _("FUCHSIA\nCITY");
static const u8 sMapCard_CinnabarIsland[] = _("CINNABAR\nISLAND");
static const u8 sMapCard_IndigoPlateau[] = _("INDIGO\nPLATEAU");
static const u8 sMapCard_SaffronCity[] = _("SAFFRON\nCITY");
static const u8 sMapCard_Route1[] = _("ROUTE 1");
static const u8 sMapCard_Route2[] = _("ROUTE 2");
static const u8 sMapCard_Route3[] = _("ROUTE 3");
static const u8 sMapCard_Route4[] = _("ROUTE 4");
static const u8 sMapCard_Route5[] = _("ROUTE 5");
static const u8 sMapCard_Route6[] = _("ROUTE 6");
static const u8 sMapCard_Route7[] = _("ROUTE 7");
static const u8 sMapCard_Route8[] = _("ROUTE 8");
static const u8 sMapCard_Route9[] = _("ROUTE 9");
static const u8 sMapCard_Route10[] = _("ROUTE 10");
static const u8 sMapCard_Route11[] = _("ROUTE 11");
static const u8 sMapCard_Route12[] = _("ROUTE 12");
static const u8 sMapCard_Route13[] = _("ROUTE 13");
static const u8 sMapCard_Route14[] = _("ROUTE 14");
static const u8 sMapCard_Route15[] = _("ROUTE 15");
static const u8 sMapCard_Route16[] = _("ROUTE 16");
static const u8 sMapCard_Route17[] = _("ROUTE 17");
static const u8 sMapCard_Route18[] = _("ROUTE 18");
static const u8 sMapCard_Route19[] = _("ROUTE 19");
static const u8 sMapCard_Route20[] = _("ROUTE 20");
static const u8 sMapCard_Route21[] = _("ROUTE 21");
static const u8 sMapCard_Route22[] = _("ROUTE 22");
static const u8 sMapCard_Route23[] = _("ROUTE 23");
static const u8 sMapCard_Route24[] = _("ROUTE 24");
static const u8 sMapCard_Route25[] = _("ROUTE 25");
static const u8 sMapCard_MtMoon[] = _("MT.MOON");
static const u8 sMapCard_UndergroundPath[] = _("UNDERGROUND");
static const u8 sMapCard_DiglettsCave[] = _("DIGLETT'S\nCAVE");
static const u8 sMapCard_KantoVictoryRoad[] = _("VICTORY\nROAD");
static const u8 sMapCard_RockTunnel[] = _("ROCK TUNNEL");
static const u8 sMapCard_SeafoamIslands[] = _("SEAFOAM\nISLANDS");
static const u8 sMapCard_PokemonTower[] = _("LAV\nRADIO TOWER");
static const u8 sMapCard_PowerPlant[] = _("POWER PLANT");
static const u8 sMapCard_TohjoFalls[] = _("TOHJO FALLS");

struct MapCardData
{
    u8 mapSec;
    u8 x;
    u8 y;
    const u8 *name;
};

#define MAP_CURSOR_TAG 0xD000
#define ARROW_CURSOR_TAG 0xDEAD

static const struct CompressedSpriteSheet sSpriteSheet_ArrowCursor =
{
    .data = sArrowCursor_Gfx,
    .size = 76,
    .tag ARROW_CURSOR_TAG,
};

static const struct CompressedSpriteSheet sSpriteSheet_MapCursor =
{
    .data = gMapCardCursor_Gfx,
    .size = 1132,
    .tag MAP_CURSOR_TAG,
};

static const struct OamData gOamData_MapCursor =
{
    .y = 0,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 1,
    .tileNum = 0,
    .priority = 4,
    .paletteNum = 0,
    .affineParam = 0,
};

static const union AnimCmd sSpriteAnim_MapCursor[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sSpriteAnimTable_MapCursor[] =
{
    sSpriteAnim_MapCursor,
};

void SpriteCb_None(struct Sprite *sprite)
{}

static const struct SpriteTemplate sSpriteTemplate_ArrowCursor =
{
    .tileTag = ARROW_CURSOR_TAG,
    .paletteTag = MAP_CURSOR_TAG,
    .oam = &gOamData_MapCursor,
    .anims = sSpriteAnimTable_MapCursor,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCb_None
};

static const struct SpriteTemplate sSpriteTemplate_MapCursor =
{
    .tileTag = MAP_CURSOR_TAG,
    .paletteTag = MAP_CURSOR_TAG,
    .oam = &gOamData_MapCursor,
    .anims = sSpriteAnimTable_MapCursor,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCb_None
};

//add 40 to x coords and 8 to y coords in code
static const struct MapCardData sMapCardDataJohto[] =
{
    {MAPSEC_NEW_BARK_TOWN, 140, 100, sMapCard_NewBarkTown},
    {MAPSEC_ROUTE_29, 128, 100, sMapCard_Route29},
    {MAPSEC_CHERRYGROVE_CITY, 100, 100, sMapCard_CherrygroveCity},
    {MAPSEC_ROUTE_30, 100, 80, sMapCard_Route30},
    {MAPSEC_ROUTE_31, 96, 60, sMapCard_Route31},
    {MAPSEC_VIOLET_CITY, 84, 60, sMapCard_VioletCity},
    {MAPSEC_SPROUT_TOWER, 85, 58, sMapCard_SproutTower},
    {MAPSEC_ROUTE_32, 84, 92, sMapCard_Route32},
    {MAPSEC_RUINS_OF_ALPH, 76, 76, sMapCard_RuinsOfAlph},
    {MAPSEC_UNION_CAVE, 84, 124, sMapCard_UnionCave},
    {MAPSEC_ROUTE_33, 82, 124, sMapCard_Route33},
    {MAPSEC_AZALEA_TOWN, 68, 124, sMapCard_AzaleaTown},
    {MAPSEC_SLOWPOKE_WELL, 70, 122, sMapCard_SlowpokeWell},
    {MAPSEC_ILEX_FOREST, 52, 120, sMapCard_IlexForest},
    {MAPSEC_ROUTE_34, 52, 112, sMapCard_Route34},
    {MAPSEC_GOLDENROD_CITY, 52, 92, sMapCard_GoldenrodCity},
    {MAPSEC_RADIO_TOWER, 50, 92, sMapCard_RadioTower},
    {MAPSEC_ROUTE_35, 52, 76, sMapCard_Route35},
    {MAPSEC_NATIONAL_PARK, 52, 60, sMapCard_NationalPark},
    {MAPSEC_ROUTE_36, 64, 60, sMapCard_Route36},
    {MAPSEC_ROUTE_37, 68, 52, sMapCard_Route37},
    {MAPSEC_ECRUTEAK_CITY, 68, 44, sMapCard_EcruteakCity},
    {MAPSEC_TIN_TOWER, 70, 42, sMapCard_TinTower},
    {MAPSEC_BURNED_TOWER, 66, 42, sMapCard_BurnedTower},
    {MAPSEC_ROUTE_38, 52, 44, sMapCard_Route38},
    {MAPSEC_ROUTE_39, 36, 48, sMapCard_Route39},
    {MAPSEC_OLIVINE_CITY, 36, 60, sMapCard_OlivineCity},
    {MAPSEC_LIGHTHOUSE, 38, 62, sMapCard_Lighthouse},
    {MAPSEC_BATTLE_FRONTIER, 28, 56, sMapCard_BattleTower},
    {MAPSEC_ROUTE_40, 28, 64, sMapCard_Route40},
    {MAPSEC_WHIRL_ISLANDS, 28, 92, sMapCard_WhirlIslands},
    {MAPSEC_ROUTE_41, 28, 100, sMapCard_Route41},
    {MAPSEC_CIANWOOD_CITY, 20, 100, sMapCard_CianwoodCity},
    {MAPSEC_ROUTE_42, 92, 44, sMapCard_Route42},
    {MAPSEC_MT_MORTAR, 84, 44, sMapCard_MtMortar},
    {MAPSEC_MAHOGANY_TOWN, 108, 44, sMapCard_MahoganyTown},
    {MAPSEC_ROUTE_43, 108, 36, sMapCard_Route43},
    {MAPSEC_LAKE_OF_RAGE, 108, 28, sMapCard_LakeOfRage},
    {MAPSEC_ROUTE_44, 120, 44, sMapCard_Route44},
    {MAPSEC_ICE_PATH, 130, 38, sMapCard_IcePath},
    {MAPSEC_BLACKTHORN_CITY, 132, 44, sMapCard_BlackthornCity},
    {MAPSEC_DRAGONS_DEN, 132, 36, sMapCard_DragonsDen},
    {MAPSEC_ROUTE_45, 132, 65, sMapCard_Route45},
    {MAPSEC_DARK_CAVE, 112, 72, sMapCard_DarkCave},
    {MAPSEC_ROUTE_46, 124, 88, sMapCard_Route46},
    {MAPSEC_SILVER_CAVE, 148, 68, sMapCard_SilverCave},
};

static const struct MapCardData sMapCardDataKanto[] =
{
    {MAPSEC_PALLET_TOWN, 52, 108, sMapCard_PalletTown},
    {MAPSEC_ROUTE_1, 52, 92, sMapCard_Route1},
    {MAPSEC_VIRIDIAN_CITY, 52, 76, sMapCard_ViridianCity},
    {MAPSEC_ROUTE_2, 52, 64, sMapCard_Route2},
    {MAPSEC_PEWTER_CITY, 52, 52, sMapCard_PewterCity},
    {MAPSEC_ROUTE_3, 64, 52, sMapCard_Route3},
    {MAPSEC_MT_MOON, 76, 52, sMapCard_MtMoon},
    {MAPSEC_ROUTE_4, 88, 52, sMapCard_Route4},
    {MAPSEC_CERULEAN_CITY, 100, 52, sMapCard_CeruleanCity},
    {MAPSEC_ROUTE_24, 100, 44, sMapCard_Route24},
    {MAPSEC_ROUTE_25, 108, 36, sMapCard_Route25},
    {MAPSEC_ROUTE_5, 100, 60, sMapCard_Route5},
    {MAPSEC_UNDERGROUND_PATH, 108, 76, sMapCard_UndergroundPath},
    {MAPSEC_ROUTE_6, 100, 76, sMapCard_Route6},
    {MAPSEC_VERMILION_CITY, 100, 84, sMapCard_VermilionCity},
    {MAPSEC_DIGLETTS_CAVE, 88, 60, sMapCard_DiglettsCave},
    {MAPSEC_ROUTE_7, 88, 68, sMapCard_Route7},
    {MAPSEC_ROUTE_8, 116, 68, sMapCard_Route8},
    {MAPSEC_ROUTE_9, 116, 52, sMapCard_Route9},
    {MAPSEC_ROCK_TUNNEL, 132, 52, sMapCard_RockTunnel},
    {MAPSEC_ROUTE_10, 132, 56, sMapCard_Route10},
    {MAPSEC_POWER_PLANT, 132, 60, sMapCard_PowerPlant},
    {MAPSEC_LAVENDER_TOWN, 132, 68, sMapCard_LavenderTown},
    {MAPSEC_POKEMON_TOWER, 140, 68, sMapCard_PokemonTower},
    {MAPSEC_CELADON_CITY, 76, 68, sMapCard_CeladonCity},
    {MAPSEC_SAFFRON_CITY, 100, 68, sMapCard_SaffronCity},
    {MAPSEC_ROUTE_11, 116, 84, sMapCard_Route11},
    {MAPSEC_ROUTE_12, 132, 80, sMapCard_Route12},
    {MAPSEC_ROUTE_13, 124, 100, sMapCard_Route13},
    {MAPSEC_ROUTE_14, 116, 112, sMapCard_Route14},
    {MAPSEC_ROUTE_15, 104, 116, sMapCard_Route15},
    {MAPSEC_ROUTE_16, 68, 68, sMapCard_Route16},
    {MAPSEC_ROUTE_17, 68, 92, sMapCard_Route17},
    {MAPSEC_ROUTE_18, 80, 116, sMapCard_Route18},
    {MAPSEC_FUCHSIA_CITY, 92, 116, sMapCard_FuchsiaCity},
    {MAPSEC_ROUTE_19, 92, 128, sMapCard_Route19},
    {MAPSEC_ROUTE_20, 76, 132, sMapCard_Route20},
    {MAPSEC_SEAFOAM_ISLANDS, 68, 132, sMapCard_SeafoamIslands},
    {MAPSEC_CINNABAR_ISLAND, 52, 132, sMapCard_CinnabarIsland},
    {MAPSEC_ROUTE_21, 52, 120, sMapCard_Route21},
    {MAPSEC_ROUTE_22, 36, 68, sMapCard_Route22},
    {MAPSEC_KANTO_VICTORY_ROAD, 28, 52, sMapCard_KantoVictoryRoad},
    {MAPSEC_ROUTE_23, 28, 44, sMapCard_Route23},
    {MAPSEC_INDIGO_PLATEAU, 28, 36, sMapCard_IndigoPlateau},
    {MAPSEC_ROUTE_26, 28, 92, sMapCard_Route26},
    {MAPSEC_ROUTE_27, 20, 100, sMapCard_Route27},
    {MAPSEC_TOHJO_FALLS, 12, 100, sMapCard_TohjoFalls},
    {MAPSEC_ROUTE_28, 20, 68, sMapCard_Route28},
};

#define PAGE_TIME_CARD 0
#define PAGE_MAP_CARD 1
#define PAGE_PHONE_CARD 2
#define PAGE_RADIO_CARD 3

#define TEXTBOX_WINDOW 0
#define DAY_WINDOW 1
#define TIME_WINDOW 2
#define SWITCH_WINDOW 3
#define MAP_NAME_WINDOW 4

struct Pokegear
{
    u8 state;
    u8 page;
    u8 previousPage;
    u8 arrowSpriteId;
    u8 playerSpriteId;
    u8 mapCursorSpriteId;
    u8 mapCursorPosition;
};

static EWRAM_DATA struct Pokegear *sPokegear = NULL;

//static EWRAM_DATA u8 sPage = 0;
//static EWRAM_DATA u8 sPreviousPage = 0;
//static EWRAM_DATA u8 sMapCursorPosition = 0;
//static EWRAM_DATA bool8 sMakeSprite = 0;

static const struct BgTemplate sBgTemplates_PokegearScreen[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0x401
    },
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 3,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
};

static const struct WindowTemplate sWindowTemplate_PokegearTimeCard[] =
{
    { // TEXTBOX_WINDOW
        .bg =1,
        .tilemapLeft = 6,
        .tilemapTop = 14,
        .width = 18,
        .height = 4,
        .paletteNum = 0,
        .baseBlock = 0x1
    },
    {// DAY_WINDOW
        .bg = 1,
        .tilemapLeft = 11,
        .tilemapTop = 7,
        .width = 9,
        .height = 1,
        .paletteNum = 0,
        .baseBlock = 0x79,
    },
    {// TIME_WINDOW
        .bg = 1,
        .tilemapLeft = 11,
        .tilemapTop = 9,
        .width = 8,
        .height = 1,
        .paletteNum = 0,
        .baseBlock = 0x82,
    },
    {// SWITCH_WINDOW
        .bg = 2,
        .tilemapLeft = 18,
        .tilemapTop = 2,
        .width = 7,
        .height = 1,
        .paletteNum = 0,
        .baseBlock = 0x8B,
    },
    {// MAP_NAME_WINDOW
        .bg = 2,
        .tilemapLeft = 14,
        .tilemapTop = 1,
        .width = 11,
        .height = 4,
        .paletteNum = 0,
        .baseBlock = 0x9F,
    },
};

bool8 IsInJohto(void)
{
    bool8 inJohto = FALSE;
    if(gMapHeader.regionMapSectionId >= MAPSEC_NEW_BARK_TOWN && (gMapHeader.regionMapSectionId <= MAPSEC_BLACKTHORN_CITY
    || gMapHeader.regionMapSectionId >= MAPSEC_ROUTE_29))
    {
        inJohto = TRUE;
    }
    else if(gMapHeader.regionMapSectionId == MAPSEC_LAKE_OF_RAGE
    || gMapHeader.regionMapSectionId == MAPSEC_RADIO_TOWER
    || gMapHeader.regionMapSectionId == MAPSEC_MT_MORTAR
    || (gMapHeader.regionMapSectionId >= MAPSEC_LIGHTHOUSE && gMapHeader.regionMapSectionId <= MAPSEC_DARK_CAVE)
    || (gMapHeader.regionMapSectionId >= MAPSEC_SILVER_CAVE && gMapHeader.regionMapSectionId <= MAPSEC_FAST_SHIP))
    {
        inJohto = TRUE;
    }
    else
    {
        inJohto = FALSE;
    }
    return inJohto;
}

void LoadBackgroundGraphics(void)
{
    LZ77UnCompVram(gGraphics_PokegearTileset, (void *)BG_CHAR_ADDR(0));
    if(gSaveBlock2Ptr->playerGender == MALE)
        LoadPalette(gPalette_PokegearPalMale, 0x00, 0x20);
    else
        LoadPalette(gPalette_PokegearPalFemale, 0x00, 0x20);
    InitBgsFromTemplates(0, sBgTemplates_PokegearScreen, ARRAY_COUNT(sBgTemplates_PokegearScreen));
    switch(sPokegear->page)
    {
        case PAGE_TIME_CARD:
            CopyToBgTilemapBuffer(0, gTilemap_TimeCard, 0, 0);
            break;
        case PAGE_MAP_CARD:
            if(IsInJohto())
                CopyToBgTilemapBuffer(0, gTilemap_MapCardJohto, 0, 0);
            else
                CopyToBgTilemapBuffer(0, gTilemap_MapCardKanto, 0, 0);
            break;
        case PAGE_PHONE_CARD:
            CopyToBgTilemapBuffer(0, gTilemap_PhoneCard, 0, 0);
            break;
        case PAGE_RADIO_CARD:
            CopyToBgTilemapBuffer(0, gTilemap_RadioCard, 0, 0);
            break;
    }
    CopyBgTilemapBufferToVram(0);
    ResetAllBgsCoordinates();
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
    ShowBg(3);
}

static void InitializeTextWindows(void)
{
    InitWindows(sWindowTemplate_PokegearTimeCard);
    DeactivateAllTextPrinters();
    LoadWindowGfx(TEXTBOX_WINDOW, gSaveBlock2Ptr->optionsWindowFrameType, 531, 0xF0);
    LoadPalette(gPalette_TextboxPal, 0xE0, 0x20); //overwriting standard dialogue palette
    //LoadUserWindowBorderGfx(YES_NO_WINDOW, 211, 0xe0);
}

static void ShowConditionalCardIcons(void)
{
    SetBgTilemapBuffer(0, AllocZeroed(BG_SCREEN_SIZE));
    if(FlagGet(FLAG_HAS_MAP_CARD))
    {
        FillBgTilemapBufferRect(0, 16, 7, 1, 1, 1, 0);
        FillBgTilemapBufferRect(0, 17, 8, 1, 1, 1, 0);
        FillBgTilemapBufferRect(0, 32, 7, 2, 1, 1, 0);
        FillBgTilemapBufferRect(0, 33, 8, 2, 1, 1, 0);
    }
    if(FlagGet(FLAG_HAS_RADIO_CARD))
    {
        FillBgTilemapBufferRect(0, 18, 11, 1, 1, 1, 0);
        FillBgTilemapBufferRect(0, 19, 12, 1, 1, 1, 0);
        FillBgTilemapBufferRect(0, 34, 11, 2, 1, 1, 0);
        FillBgTilemapBufferRect(0, 35, 12, 2, 1, 1, 0);
    }
}

void VBlankCallback(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

void Pokegear_MainCallback(void)
{
    RunTasks();
    AnimateSprites();
    do_scheduled_bg_tilemap_copies_to_vram();
    BuildOamBuffer();
    UpdatePaletteFade();
}

void CB2_Pokegear(void)
{
    sPokegear->page = PAGE_TIME_CARD;
    sPokegear->previousPage = PAGE_MAP_CARD;
    switch(gMain.state)
    {
        case 0:
        default:
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            gMain.state++;
            break;
        case 1:
            if(!gPaletteFade.active)
            {
                SetMainCallback2(InitPokegearScreen);
            }
            break;
    }/*
    switch(gMain.state)
    {
        case 0:
        default:
            SetVBlankCallback(NULL);
            ScanlineEffect_Stop();
            ResetTasks();
            ResetSpriteData();
            FreeAllSpritePalettes();
            DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
            gMain.state++;
            break;
        case 1:
            gMain.state++;
            break;
        case 2:
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
            SetVBlankCallback(VBlankCallback);
            SetMainCallback2(Pokegear_MainCallback);
            CreateTask(HandleKeyPresses, 0);
            CreateTask(UpdateDateTime, 1);
            break;
    }*/
}

void InitPokegearScreen(void)
{
    //sPage = PAGE_TIME_CARD;
    //sPokegear->previousPage = PAGE_MAP_CARD;
    sPokegear = AllocZeroed(sizeof(*sPokegear));
    sPokegear->page = PAGE_TIME_CARD;
    sPokegear->previousPage = PAGE_MAP_CARD;

    SetVBlankCallback(NULL);
    ResetAllBgsCoordinates();
    ResetVramOamAndBgCntRegs();
    ResetBgsAndClearDma3BusyFlags(0);

    LoadBackgroundGraphics();
    //InitBgsFromTemplates(0, sBgTemplates_PokegearScreen, ARRAY_COUNT(sBgTemplates_PokegearScreen));
    SetBgTilemapBuffer(0, AllocZeroed(BG_SCREEN_SIZE));
    //DecompressAndLoadBgGfxUsingHeap(0, gGraphics_PokegearTileset, 1132, 0, 0);
    CopyToBgTilemapBuffer(0, gTilemap_TimeCard, 0, 0);
    ResetPaletteFade();
    /*if(gSaveBlock2Ptr->playerGender == MALE)
        LoadPalette(gPalette_PokegearPalMale, 0 , sizeof(gPalette_PokegearPalMale));
    else
        LoadPalette(gPalette_PokegearPalFemale, 0 , sizeof(gPalette_PokegearPalMale));*/
    InitWindows(sWindowTemplate_PokegearTimeCard);
    DeactivateAllTextPrinters();

    ResetSpriteData();
    FreeAllSpritePalettes();
    LoadPokegearSpriteGfx();
    //InitPokegearSprites();

    //ShowConditionalCardIcons();
    CopyBgTilemapBufferToVram(0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    ShowBg(0);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(PokegearVBlankCallback);
    SetMainCallback2(PokegearMainCallback);
    CreateTask(HandleKeyPresses, 0);
    CreateTask(UpdateDateTime, 1);
}

static void PokegearMainCallback(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
}

static void PokegearVBlankCallback(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void LoadPokegearSpriteGfx()
{
    //all page arrow sprite

    //map card sprites
    u8 playerGraphicsIds[2] = {EVENT_OBJ_GFX_GOLD_NORMAL, EVENT_OBJ_GFX_KRIS_NORMAL};
    u8 currLocation = FindPlayerLocation();

    //all page arrow sprite
    if(GetSpriteTileStartByTag(ARROW_CURSOR_TAG) == 0xFFFF)
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_ArrowCursor);
    }
    sPokegear->arrowSpriteId = CreateSprite(&sSpriteTemplate_ArrowCursor, 0, 0, 0);
    StartSpriteAnim(&gSprites[sPokegear->arrowSpriteId], 0);

    //map card sprites
    if(sPokegear->mapCursorPosition == 0)
    {
        sPokegear->mapCursorPosition = currLocation + 1;
    }
    if(IsInJohto())
    {
        sPokegear->playerSpriteId = AddPseudoEventObject(playerGraphicsIds[gSaveBlock2Ptr->playerGender], nothing, sMapCardDataJohto[currLocation].x + 40, sMapCardDataJohto[currLocation].y + 8, 0);
        StartSpriteAnim(&gSprites[sPokegear->playerSpriteId], 4);
        if (GetSpriteTileStartByTag(MAP_CURSOR_TAG) == 0xFFFF)
        {
            LoadCompressedSpriteSheet(&sSpriteSheet_MapCursor);
        }
        sPokegear->mapCursorSpriteId = CreateSprite(&sSpriteTemplate_MapCursor, sMapCardDataJohto[sPokegear->mapCursorPosition - 1].x + 40, sMapCardDataJohto[sPokegear->mapCursorPosition - 1].y + 8, 0);
        StartSpriteAnim(&gSprites[sPokegear->mapCursorSpriteId], 0);
        //AddTextPrinterParameterized4(MAP_NAME_WINDOW, 1, 0, 0, 0, -8, txtcolor, 0, sMapCardDataJohto[sMapCursorPosition - 1].name);
    }
    else
    {
        sPokegear->playerSpriteId = AddPseudoEventObject(playerGraphicsIds[gSaveBlock2Ptr->playerGender], nothing, sMapCardDataKanto[currLocation].x + 40, sMapCardDataKanto[currLocation].y + 8, 0);
        StartSpriteAnim(&gSprites[sPokegear->playerSpriteId], 4);
        if (GetSpriteTileStartByTag(MAP_CURSOR_TAG) == 0xFFFF)
        {
            LoadCompressedSpriteSheet(&sSpriteSheet_MapCursor);
        }
        sPokegear->mapCursorSpriteId = CreateSprite(&sSpriteTemplate_MapCursor, sMapCardDataKanto[sPokegear->mapCursorPosition - 1].x + 40, sMapCardDataKanto[sPokegear->mapCursorPosition - 1].y + 8, 0);
        StartSpriteAnim(&gSprites[sPokegear->mapCursorSpriteId], 0);
        //AddTextPrinterParameterized4(MAP_NAME_WINDOW, 1, 0, 0, 0, -8, txtcolor, 0, sMapCardDataKanto[sMapCursorPosition - 1].name);
    }
    gSprites[sPokegear->playerSpriteId].invisible = TRUE;
    gSprites[sPokegear->mapCursorSpriteId].invisible = TRUE;
}

static void UpdateDateTime(u8 taskId)
{
    u16 *dayOfWeek = GetVarPointer(VAR_DAYS);
    if(*dayOfWeek > 6)
    {
        *dayOfWeek = 0;
    }
    if(sPokegear->page != PAGE_TIME_CARD)
    {
        //do nothing
    }
    else
    {
        RtcCheckHour(); //just updating gLocalTime with this...

        FillWindowPixelBuffer(DAY_WINDOW, PIXEL_FILL(0));
        PutWindowTilemap(DAY_WINDOW);
        CopyWindowToVram(DAY_WINDOW, 3);

        StringExpandPlaceholders(gStringVar4, gText_DaysOfWeek[*dayOfWeek]);
        AddTextPrinterParameterized(DAY_WINDOW, 1, gStringVar4, 0, 0, 0, NULL);
        PutWindowTilemap(DAY_WINDOW);
        CopyWindowToVram(DAY_WINDOW, 3);

        FormatPokegearTime(gStringVar3, gLocalTime.hours, gLocalTime.minutes, gLocalTime.seconds);
        AddTextPrinterParameterized(TIME_WINDOW, 1, gStringVar3, 0, 0, 0, NULL);
        PutWindowTilemap(TIME_WINDOW);
        CopyWindowToVram(TIME_WINDOW, 3);
    }
}

static void nothing(struct Sprite *sprite)
{
}

static void HandleKeyPresses(u8 taskId)
{
    s16 *state = gTasks[taskId].data;

    switch (state[0])
    {
        case 0:
            LoadBackgroundGraphics();
            InitializeTextWindows();
            ShowConditionalCardIcons();
            SetUpTextPerPage();
            state[0]++;
            break;
        case 1:
            if (sPokegear->page == PAGE_TIME_CARD)
            {
                if ((gMain.newKeys & A_BUTTON) || (gMain.newKeys & B_BUTTON)
                    || (gMain.newKeys & START_BUTTON) || (gMain.newKeys & SELECT_BUTTON)) //Anything but DPAD, close window
                {
                    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                    PlaySE(SE_SELECT);
                    gTasks[taskId].func = CloseMenuScreen;
                }
                else if (gMain.newKeys & DPAD_RIGHT) //DPAD Right, move to next card
                {
                    sPokegear->previousPage = sPokegear->page;
                    //switch to next card. Check if map card unlocked
                    if (FlagGet(FLAG_HAS_MAP_CARD)) {
                        sPokegear->page = PAGE_MAP_CARD;
                        state[0] = 0;
                    } else {
                        sPokegear->page = PAGE_PHONE_CARD;
                        state[0] = 0;
                    }
                }
                else //any other button
                {
                    //Do Nothing
                }
            }
            else if (sPokegear->page == PAGE_MAP_CARD)
            {
                //u8 spriteId;
                //u8 cursorSpriteId;
                u8 txtcolor[2];
                //u8 currLocation = FindPlayerLocation();
                //u8 playerGraphicsIds[2] = {EVENT_OBJ_GFX_GOLD_NORMAL, EVENT_OBJ_GFX_KRIS_NORMAL};
                txtcolor[0] = 0x0;
                txtcolor[1] = 0x2;/*
                if(sMapCursorPosition == 0)
                {
                    sMapCursorPosition = currLocation + 1;
                }
                if(IsInJohto())
                {
                    if(sMakeSprite == 0)
                    {
                        spriteId = AddPseudoEventObject(playerGraphicsIds[gSaveBlock2Ptr->playerGender], nothing, sMapCardDataJohto[currLocation].x + 40, sMapCardDataJohto[currLocation].y + 8, 0);
                        StartSpriteAnim(&gSprites[spriteId], 4);
                        if (GetSpriteTileStartByTag(MAP_CURSOR_TAG) == 0xFFFF)
                        {
                            LoadCompressedSpriteSheet(&sSpriteSheet_MapCursor);
                        }
                        cursorSpriteId = CreateSprite(&sSpriteTemplate_MapCursor, sMapCardDataJohto[sMapCursorPosition - 1].x + 40, sMapCardDataJohto[sMapCursorPosition - 1].y + 8, 0);
                        StartSpriteAnim(&gSprites[cursorSpriteId], 0);
                        sMakeSprite = 1;
                    }
                    AddTextPrinterParameterized4(MAP_NAME_WINDOW, 1, 0, 0, 0, -8, txtcolor, 0, sMapCardDataJohto[sMapCursorPosition - 1].name);
                }
                else
                {
                    if(sMakeSprite == 0)
                    {
                        spriteId = AddPseudoEventObject(playerGraphicsIds[gSaveBlock2Ptr->playerGender], nothing, sMapCardDataKanto[currLocation].x + 40, sMapCardDataKanto[currLocation].y + 8, 0);
                        StartSpriteAnim(&gSprites[spriteId], 4);
                        if (GetSpriteTileStartByTag(MAP_CURSOR_TAG) == 0xFFFF)
                        {
                            LoadCompressedSpriteSheet(&sSpriteSheet_MapCursor);
                        }
                        cursorSpriteId = CreateSprite(&sSpriteTemplate_MapCursor, sMapCardDataKanto[sMapCursorPosition - 1].x + 40, sMapCardDataKanto[sMapCursorPosition - 1].y + 8, 0);
                        StartSpriteAnim(&gSprites[cursorSpriteId], 0);
                        sMakeSprite = 1;
                    }
                    AddTextPrinterParameterized4(MAP_NAME_WINDOW, 1, 0, 0, 0, -8, txtcolor, 0, sMapCardDataKanto[sMapCursorPosition - 1].name);
                }*/
                PutWindowTilemap(MAP_NAME_WINDOW);
                CopyWindowToVram(MAP_NAME_WINDOW, 3);
                if (gMain.newKeys & B_BUTTON) //B closes window
                {
                    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                    PlaySE(SE_SELECT);
                    gTasks[taskId].func = CloseMenuScreen;
                }
                else if (gMain.newKeys & DPAD_RIGHT) //DPAD Right, move to next card
                {
                    sPokegear->previousPage = sPokegear->page;
                    sPokegear->page = PAGE_PHONE_CARD;
                    state[0] = 0;
                }
                else if (gMain.newKeys & DPAD_LEFT) //DPAD Right, move to next card
                {
                    sPokegear->previousPage = sPokegear->page;
                    sPokegear->page = PAGE_TIME_CARD;
                    state[0] = 0;
                }
                else if (gMain.newAndRepeatedKeys & DPAD_UP)
                {
                    sPokegear->mapCursorPosition++;
                    if(sPokegear->mapCursorPosition > 46 && IsInJohto())
                    {
                        sPokegear->mapCursorPosition = 1;
                    }
                    else if(sPokegear->mapCursorPosition > 48 && !IsInJohto())
                    {
                        sPokegear->mapCursorPosition = 1;
                    }
                    FillWindowPixelBuffer(MAP_NAME_WINDOW, PIXEL_FILL(0));
                    PutWindowTilemap(MAP_NAME_WINDOW);
                    CopyWindowToVram(MAP_NAME_WINDOW, 3);
                    if(IsInJohto())
                    {
                        AddTextPrinterParameterized4(MAP_NAME_WINDOW, 1, 0, 0, 0, -8, txtcolor, 0, sMapCardDataJohto[sPokegear->mapCursorPosition - 1].name);
                        //gSprites[cursorSpriteId].pos1.x = sMapCardDataJohto[sPokegear->mapCursorPosition - 1].x + 40;
                        //gSprites[cursorSpriteId].pos1.y = sMapCardDataJohto[sPokegear->mapCursorPosition - 1].y + 8;
                    }
                    else
                    {
                        AddTextPrinterParameterized4(MAP_NAME_WINDOW, 1, 0, 0, 0, -8, txtcolor, 0, sMapCardDataKanto[sPokegear->mapCursorPosition - 1].name);
                        //gSprites[cursorSpriteId].pos1.x = sMapCardDataKanto[sPokegear->mapCursorPosition - 1].x + 40;
                        //gSprites[cursorSpriteId].pos1.y = sMapCardDataKanto[sPokegear->mapCursorPosition - 1].y + 8;
                    }
                    PutWindowTilemap(MAP_NAME_WINDOW);
                    CopyWindowToVram(MAP_NAME_WINDOW, 3);
                }
                else if (gMain.newAndRepeatedKeys & DPAD_DOWN)
                {
                    if(sPokegear->mapCursorPosition == 1 && IsInJohto())
                    {
                        sPokegear->mapCursorPosition = 47;
                    }
                    else if(sPokegear->mapCursorPosition == 1 &&!IsInJohto())
                    {
                        sPokegear->mapCursorPosition = 49;
                    }
                    sPokegear->mapCursorPosition--;
                    FillWindowPixelBuffer(MAP_NAME_WINDOW, PIXEL_FILL(0));
                    PutWindowTilemap(MAP_NAME_WINDOW);
                    CopyWindowToVram(MAP_NAME_WINDOW, 3);
                    if(IsInJohto())
                    {
                        AddTextPrinterParameterized4(MAP_NAME_WINDOW, 1, 0, 0, 0, -8, txtcolor, 0, sMapCardDataJohto[sPokegear->mapCursorPosition - 1].name);
                        //gSprites[cursorSpriteId].pos1.x = sMapCardDataJohto[sPokegear->mapCursorPosition - 1].x + 40;
                        //gSprites[cursorSpriteId].pos1.y = sMapCardDataJohto[sPokegear->mapCursorPosition - 1].y + 8;
                    }
                    else
                    {
                        AddTextPrinterParameterized4(MAP_NAME_WINDOW, 1, 0, 0, 0, -8, txtcolor, 0, sMapCardDataKanto[sPokegear->mapCursorPosition - 1].name);
                        //gSprites[cursorSpriteId].pos1.x = sMapCardDataKanto[sPokegear->mapCursorPosition - 1].x + 40;
                        //gSprites[cursorSpriteId].pos1.y = sMapCardDataKanto[sPokegear->mapCursorPosition - 1].y + 8;
                    }
                    PutWindowTilemap(MAP_NAME_WINDOW);
                    CopyWindowToVram(MAP_NAME_WINDOW, 3);
                }
                else //any other button
                {
                    //Do Nothing
                }
            }
            else if (sPokegear->page == PAGE_PHONE_CARD) {
                if (gMain.newKeys & B_BUTTON) //B closes window
                {
                    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                    PlaySE(SE_SELECT);
                    gTasks[taskId].func = CloseMenuScreen;
                }
                else if (gMain.newKeys & DPAD_RIGHT) //DPAD Right, move to next card
                {
                    if (FlagGet(FLAG_HAS_RADIO_CARD))
                    {
                        sPokegear->previousPage = sPokegear->page;
                        sPokegear->page = PAGE_RADIO_CARD;
                        state[0] = 0;
                    }
                    //without radio card do nothing
                }
                else if (gMain.newKeys & DPAD_LEFT) //DPAD Left, move to previous card
                {
                    sPokegear->previousPage = sPokegear->page;
                    if (FlagGet(FLAG_HAS_MAP_CARD)) {
                        sPokegear->page = PAGE_MAP_CARD;
                        state[0] = 0;
                    } else {
                        sPokegear->page = PAGE_TIME_CARD;
                        state[0] = 0;
                    }
                }
                else if (gMain.newAndRepeatedKeys & DPAD_UP) {
                    //contacts scrolling
                }
                else if (gMain.newAndRepeatedKeys & DPAD_DOWN) {
                    //contacts scrolling
                }
                else if (gMain.newKeys & A_BUTTON) {
                    //select phone number
                }
                else //any other button
                {
                    //Do Nothing
                }
            }
            else //sPokegear->page == PAGE_RADIO_CARD
            {
                if (gMain.newKeys & B_BUTTON) //B closes window
                {
                    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                    PlaySE(SE_SELECT);
                    gTasks[taskId].func = CloseMenuScreen;
                }
                else if (gMain.newKeys & DPAD_LEFT) //DPAD Left, move to previous card
                {
                    sPokegear->previousPage = sPokegear->page;
                    sPokegear->page = PAGE_PHONE_CARD;
                    state[0] = 0;
                }
                else if (gMain.newKeys & DPAD_UP) //DPAD Up, tune radio
                {
                    //tune radio up
                }
                else if (gMain.newKeys & DPAD_DOWN) //DPAD Up, tune radio
                {
                    //tune radio down
                }
                else //any other button
                {
                    //Do Nothing
                }
            }
            //DestroySprite(&gSprites[spriteId]);
            break;
    }
}

static void SetUpTextPerPage(void)
{
    if(sPokegear->previousPage == PAGE_TIME_CARD)
    {
        FillWindowPixelBuffer(SWITCH_WINDOW, PIXEL_FILL(0));
        PutWindowTilemap(SWITCH_WINDOW);
        CopyWindowToVram(SWITCH_WINDOW, 3);
        FillWindowPixelBuffer(DAY_WINDOW, PIXEL_FILL(0));
        PutWindowTilemap(DAY_WINDOW);
        CopyWindowToVram(DAY_WINDOW, 3);
        FillWindowPixelBuffer(TIME_WINDOW, PIXEL_FILL(0));
        PutWindowTilemap(TIME_WINDOW);
        CopyWindowToVram(TIME_WINDOW, 3);
        FillWindowPixelBuffer(TEXTBOX_WINDOW, PIXEL_FILL(0));
        PutWindowTilemap(TEXTBOX_WINDOW);
        CopyWindowToVram(TEXTBOX_WINDOW, 3);
    }
    else if(sPokegear->previousPage == PAGE_MAP_CARD)
    {
        FillWindowPixelBuffer(MAP_NAME_WINDOW, PIXEL_FILL(0));
        PutWindowTilemap(MAP_NAME_WINDOW);
        CopyWindowToVram(MAP_NAME_WINDOW, 3);
    }
    if(sPokegear->page == PAGE_TIME_CARD)
    {
        u16 *dayOfWeek = GetVarPointer(VAR_DAYS);
        if(*dayOfWeek > 6)
        {
            *dayOfWeek = 0;
        }
        //Switch Text
        AddTextPrinterParameterized(SWITCH_WINDOW, 1, gText_Switch, 0, 0, 0, NULL);
        PutWindowTilemap(SWITCH_WINDOW);
        CopyWindowToVram(SWITCH_WINDOW, 3);

        //Time and Day Text
        RtcCheckHour(); //just updating gLocalTime with this...

        StringExpandPlaceholders(gStringVar4, gText_DaysOfWeek[*dayOfWeek]);
        AddTextPrinterParameterized(DAY_WINDOW, 1, gStringVar4, 0, 0, 0, NULL);
        PutWindowTilemap(DAY_WINDOW);
        CopyWindowToVram(DAY_WINDOW, 3);

        FormatPokegearTime(gStringVar3, gLocalTime.hours, gLocalTime.minutes, gLocalTime.seconds);
        AddTextPrinterParameterized(TIME_WINDOW, 1, gStringVar3, 0, 0, 0, NULL);
        PutWindowTilemap(TIME_WINDOW);
        CopyWindowToVram(TIME_WINDOW, 3);

        //Textbox
        DrawStdWindowFrame(TEXTBOX_WINDOW, TRUE);
        AddTextPrinterParameterized(TEXTBOX_WINDOW, 1, gText_Exit, 0, 8, 0, NULL);
        PutWindowTilemap(TEXTBOX_WINDOW);
        CopyWindowToVram(TEXTBOX_WINDOW, 3);

    }
    else if(sPokegear->page == PAGE_MAP_CARD)
    {
    }
}

static u8 FindPlayerLocation(void)
{
    u8 i;
    //special case Fast Ship
    if(IsInJohto())
    {
        for(i = 0; i < 46; i++)
        {
            if(gMapHeader.regionMapSectionId == sMapCardDataJohto[i].mapSec)
            {
                return i;
            }
        }
    }
    else
    {
        for(i = 0; i < 46; i++)
        {
            if(gMapHeader.regionMapSectionId == sMapCardDataKanto[i].mapSec)
            {
                return i;
            }
        }
    }
}

static void FormatPokegearTime(u8 *dest, s32 hour, s32 minute, s32 second)
{
    s32 adjustedHour = hour;
    bool8 isAM = TRUE;
    if(hour >= 12)
    {
        isAM = FALSE;
    }
    if(adjustedHour > 12)
    {
        adjustedHour -= 12;
    }
    if(adjustedHour == 0)
    {
        adjustedHour = 12;
    }

    dest = ConvertIntToDecimalStringN(dest, adjustedHour, STR_CONV_MODE_RIGHT_ALIGN, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToDecimalStringN(dest, minute, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = 0x00; //space
    if(isAM)
    {
        *dest++ = 0xBB; //A
        *dest++ = 0xC7; //M
    }
    else
    {
        *dest++ = 0xCA; //P
        *dest++ = 0xC7; //M
    }
    *dest = EOS;
}

static void ChangePage(void)
{
    switch(sPokegear->page)
    {
        case PAGE_TIME_CARD:
            LZ77UnCompVram(gTilemap_TimeCard, (u16 *)BG_SCREEN_ADDR(28));
            break;
        case PAGE_MAP_CARD:
            if(IsInJohto())
                LZ77UnCompVram(gTilemap_MapCardJohto, (u16 *)BG_SCREEN_ADDR(28));
            else
                LZ77UnCompVram(gTilemap_MapCardKanto, (u16 *)BG_SCREEN_ADDR(28));
            break;
        case PAGE_PHONE_CARD:
            LZ77UnCompVram(gTilemap_PhoneCard, (u16 *)BG_SCREEN_ADDR(28));
            break;
        case PAGE_RADIO_CARD:
            LZ77UnCompVram(gTilemap_RadioCard, (u16 *)BG_SCREEN_ADDR(28));
            break;
    }

    InitBgsFromTemplates(0, sBgTemplates_PokegearScreen, ARRAY_COUNT(sBgTemplates_PokegearScreen));
    ResetAllBgsCoordinates();
    ShowBg(0);
}

static void CloseMenuScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
    }
}