#include "global.h"
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

// static declarations
static void HandleKeyPresses(u8 taskId);
bool8 IsInJohto(void);
void LoadBackgroundGraphics(void);
static void InitializeTextWindows(void);
static void CloseMenuScreen(u8 taskId);
static void ChangePage(void);
static void ShowConditionalCardIcons(void);
static void SetUpTextPerPage(void);
static void FormatPokegearTime(u8 *dest, s32 hour, s32 minute, s32 second);


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

#define PAGE_TIME_CARD 0
#define PAGE_MAP_CARD 1
#define PAGE_PHONE_CARD 2
#define PAGE_RADIO_CARD 3

#define TEXTBOX_WINDOW 0
#define DAY_WINDOW 1
#define TIME_WINDOW 2
#define SWITCH_WINDOW 3

static EWRAM_DATA u8 sPage = PAGE_TIME_CARD;

const struct BgTemplate gBgTemplates_PokegearScreen[] =
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
                .mapBaseIndex = 31,
                .screenSize = 0,
                .paletteMode = 0,
                .priority = 2,
                .baseTile = 0x401
        },
        {
                .bg = 2,
                .charBaseIndex = 1,
                .mapBaseIndex = 5,
                .screenSize = 0,
                .paletteMode = 0,
                .priority = 1,
                .baseTile = 0
        },
        {
                .bg = 3,
                .charBaseIndex = 2,
                .mapBaseIndex = 7,
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
    LZ77UnCompVram(gGraphics_PokegearTileset, (void *)VRAM);
    if(gSaveBlock2Ptr->playerGender == MALE)
        LoadPalette(gPalette_PokegearPalMale, 0x00, 0x20);
    else
        LoadPalette(gPalette_PokegearPalFemale, 0x00, 0x20);
    switch(sPage)
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
    InitBgsFromTemplates(0, gBgTemplates_PokegearScreen, ARRAY_COUNT(gBgTemplates_PokegearScreen));
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
    CopyBgTilemapBufferToVram(0);
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
    do_scheduled_bg_tilemap_copies_to_vram();
    UpdatePaletteFade();
}

void CB2_Pokegear(void)
{
    sPage = 0;
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
            LoadBackgroundGraphics();
            InitializeTextWindows();
            gMain.state++;
            break;
        case 2:
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
            SetVBlankCallback(VBlankCallback);
            SetMainCallback2(Pokegear_MainCallback);
            CreateTask(HandleKeyPresses, 0);
            break;
    }
}

static void HandleKeyPresses(u8 taskId)
{
    //ShowConditionalCardIcons();
    if(sPage == PAGE_TIME_CARD)
    {
        SetUpTextPerPage();
        if((gMain.newKeys & A_BUTTON) || (gMain.newKeys & B_BUTTON)
        || (gMain.newKeys & START_BUTTON) || (gMain.newKeys & SELECT_BUTTON)) //Anything but DPAD, close window
        {
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            PlaySE(SE_SELECT);
            gTasks[taskId].func = CloseMenuScreen;
        }
        else if(gMain.newKeys & DPAD_RIGHT) //DPAD Right, move to next card
        {
            //switch to next card. Check if map card unlocked
            if(FlagGet(FLAG_HAS_MAP_CARD))
            {
                sPage = PAGE_MAP_CARD;
                LoadBackgroundGraphics();
            }
            else
            {
                sPage = PAGE_PHONE_CARD;
                LoadBackgroundGraphics();
            }
        }
        else //any other button
        {
            //Do Nothing
        }
    }
    else if(sPage == PAGE_MAP_CARD)
    {
        if(gMain.newKeys & B_BUTTON) //B closes window
        {
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            PlaySE(SE_SELECT);
            gTasks[taskId].func = CloseMenuScreen;
        }
        else if(gMain.newKeys & DPAD_RIGHT) //DPAD Right, move to next card
        {
            sPage = PAGE_PHONE_CARD;
            LoadBackgroundGraphics();
        }
        else if(gMain.newKeys & DPAD_LEFT) //DPAD Right, move to next card
        {
            sPage = PAGE_TIME_CARD;
            LoadBackgroundGraphics();
        }
        else if(gMain.newAndRepeatedKeys & DPAD_UP)
        {
            //map movement
        }
        else if(gMain.newAndRepeatedKeys & DPAD_DOWN)
        {
            //map movement
        }
        else //any other button
        {
            //Do Nothing
        }
    }
    else if(sPage == PAGE_PHONE_CARD)
    {
        if(gMain.newKeys & B_BUTTON) //B closes window
        {
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            PlaySE(SE_SELECT);
            gTasks[taskId].func = CloseMenuScreen;
        }
        else if(gMain.newKeys & DPAD_RIGHT) //DPAD Right, move to next card
        {
            if(FlagGet(FLAG_HAS_RADIO_CARD))
            {
                sPage = PAGE_RADIO_CARD;
                LoadBackgroundGraphics();
            }
            //without radio card do nothing
        }
        else if(gMain.newKeys & DPAD_LEFT) //DPAD Left, move to previous card
        {
            if(FlagGet(FLAG_HAS_MAP_CARD))
            {
                sPage = PAGE_MAP_CARD;
                LoadBackgroundGraphics();
            }
            else
            {
                sPage = PAGE_TIME_CARD;
                LoadBackgroundGraphics();
            }
        }
        else if(gMain.newAndRepeatedKeys & DPAD_UP)
        {
            //contacts scrolling
        }
        else if(gMain.newAndRepeatedKeys & DPAD_DOWN)
        {
            //contacts scrolling
        }
        else if(gMain.newKeys & A_BUTTON)
        {
            //select phone number
        }
        else //any other button
        {
            //Do Nothing
        }
    }
    else //sPage == PAGE_RADIO_CARD
    {
        if(gMain.newKeys & B_BUTTON) //B closes window
        {
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            PlaySE(SE_SELECT);
            gTasks[taskId].func = CloseMenuScreen;
        }
        else if(gMain.newKeys & DPAD_LEFT) //DPAD Left, move to previous card
        {
            sPage = PAGE_PHONE_CARD;
            LoadBackgroundGraphics();
        }
        else if(gMain.newKeys & DPAD_UP) //DPAD Up, tune radio
        {
            //tune radio up
        }
        else if(gMain.newKeys & DPAD_DOWN) //DPAD Up, tune radio
        {
            //tune radio down
        }
        else //any other button
        {
            //Do Nothing
        }
    }
}

static void SetUpTextPerPage(void)
{
    if(sPage == PAGE_TIME_CARD)
    {
        u16 *dayOfWeek = GetVarPointer(VAR_DAYS);

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
    switch(sPage)
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

    InitBgsFromTemplates(0, gBgTemplates_PokegearScreen, ARRAY_COUNT(gBgTemplates_PokegearScreen));
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