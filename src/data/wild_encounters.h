// const rom data

/*This file consists of several parts.
 *First, the actual tables that define the available Pokemon and their level ranges.
 *Second, the headers for each area that links the tables to the actual maps.
 *Third, Battle Pyramid-specific tables and headers.
 *Fourth, Battle Pike-specific tables and headers.
 *And then finally, Feebas-related data.
 *You can search for // to jump between the sections.
 */
 
 //Start of regular Pokemon tables.

// const rom data

#include "wild_encounter_tables/johto_grass_routes.h"
#include "wild_encounter_tables/johto_grass_dungeons.h"
#include "wild_encounter_tables/johto_water.h"
#include "wild_encounter_tables/kanto_grass.h"
#include "wild_encounter_tables/kanto_water.h"

const struct WildPokemonHeader gWildMonHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(NEW_BARK_TOWN),
		.mapNum = MAP_NUM(NEW_BARK_TOWN),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gNewBark_Cherrygrove_Cianwood_Olivine_OlivinePort_R34_R40_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(CHERRYGROVE_CITY),
		.mapNum = MAP_NUM(CHERRYGROVE_CITY),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gNewBark_Cherrygrove_Cianwood_Olivine_OlivinePort_R34_R40_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIOLET_CITY),
		.mapNum = MAP_NUM(VIOLET_CITY),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gViolet_Ecruteak_R30_R31_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ECRUTEAK_CITY),
		.mapNum = MAP_NUM(ECRUTEAK_CITY),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gViolet_Ecruteak_R30_R31_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(OLIVINE_CITY),
		.mapNum = MAP_NUM(OLIVINE_CITY),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gNewBark_Cherrygrove_Cianwood_Olivine_OlivinePort_R34_R40_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(CIANWOOD_CITY),
		.mapNum = MAP_NUM(CIANWOOD_CITY),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gNewBark_Cherrygrove_Cianwood_Olivine_OlivinePort_R34_R40_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(BLACKTHORN_CITY),
		.mapNum = MAP_NUM(BLACKTHORN_CITY),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gBlackthornCity_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(LAKE_OF_RAGE),
		.mapNum = MAP_NUM(LAKE_OF_RAGE),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gLakeOfRage_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(RUINS_OF_ALPH_EXTERIOR),
		.mapNum = MAP_NUM(RUINS_OF_ALPH_EXTERIOR),
		.landMonsInfo = &gRuinsOfAlph_Exterior_LandMonsInfo,
		.waterMonsInfo = NULL, //Only in Crystal, need to hardcode.
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE29),
		.mapNum = MAP_NUM(ROUTE29),
		.landMonsInfo = &gRoute29_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE30),
		.mapNum = MAP_NUM(ROUTE30),
		.landMonsInfo = &gRoute30_LandMonsInfo,
		.waterMonsInfo = &gViolet_Ecruteak_R30_R31_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE31),
		.mapNum = MAP_NUM(ROUTE31),
		.landMonsInfo = &gRoute31_LandMonsInfo,
		.waterMonsInfo = &gViolet_Ecruteak_R30_R31_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE32),
		.mapNum = MAP_NUM(ROUTE32),
		.landMonsInfo = &gRoute32_LandMonsInfo,
		.waterMonsInfo = &gRoute32_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE33),
		.mapNum = MAP_NUM(ROUTE33),
		.landMonsInfo = &gRoute33_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE34),
		.mapNum = MAP_NUM(ROUTE34),
		.landMonsInfo = &gRoute34_LandMonsInfo,
		.waterMonsInfo = &gNewBark_Cherrygrove_Cianwood_Olivine_OlivinePort_R34_R40_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE35),
		.mapNum = MAP_NUM(ROUTE35),
		.landMonsInfo = &gRoute35_LandMonsInfo,
		.waterMonsInfo = &gRoute35_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE36),
		.mapNum = MAP_NUM(ROUTE36),
		.landMonsInfo = &gRoute36_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE37),
		.mapNum = MAP_NUM(ROUTE37),
		.landMonsInfo = &gRoute37_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE38),
		.mapNum = MAP_NUM(ROUTE38),
		.landMonsInfo = &gRoute38_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE39),
		.mapNum = MAP_NUM(ROUTE39),
		.landMonsInfo = &gRoute39_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE40),
		.mapNum = MAP_NUM(ROUTE40),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gNewBark_Cherrygrove_Cianwood_Olivine_OlivinePort_R34_R40_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE41),
		.mapNum = MAP_NUM(ROUTE41),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute41_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE42),
		.mapNum = MAP_NUM(ROUTE42),
		.landMonsInfo = &gRoute42_LandMonsInfo,
		.waterMonsInfo = &gRoute42_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE43),
		.mapNum = MAP_NUM(ROUTE43),
		.landMonsInfo = &gRoute43_LandMonsInfo,
		.waterMonsInfo = &gRoute43_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE44),
		.mapNum = MAP_NUM(ROUTE44),
		.landMonsInfo = &gRoute44_LandMonsInfo,
		.waterMonsInfo = &gRoute44_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE45),
		.mapNum = MAP_NUM(ROUTE45),
		.landMonsInfo = &gRoute45_LandMonsInfo,
		.waterMonsInfo = &gRoute45_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE46),
		.mapNum = MAP_NUM(ROUTE46),
		.landMonsInfo = &gRoute46_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SILVER_CAVE_EXTERIOR),
		.mapNum = MAP_NUM(SILVER_CAVE_EXTERIOR),
		.landMonsInfo = &gSilverCave_Exterior_LandMonsInfo,
		.waterMonsInfo = &gSilverCave_Exterior_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SPROUT_TOWER_2F),
		.mapNum = MAP_NUM(SPROUT_TOWER_2F),
		.landMonsInfo = &gSproutTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SPROUT_TOWER_3F),
		.mapNum = MAP_NUM(SPROUT_TOWER_3F),
		.landMonsInfo = &gSproutTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(UNION_CAVE_1F),
		.mapNum = MAP_NUM(UNION_CAVE_1F),
		.landMonsInfo = &gUnionCave_1F_LandMonsInfo,
		.waterMonsInfo = &gUnionCave_1F_B1F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(UNION_CAVE_B1F),
		.mapNum = MAP_NUM(UNION_CAVE_B1F),
		.landMonsInfo = &gUnionCave_B1F_LandMonsInfo,
		.waterMonsInfo = &gUnionCave_1F_B1F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(UNION_CAVE_B2F),
		.mapNum = MAP_NUM(UNION_CAVE_B2F),
		.landMonsInfo = &gUnionCave_B2F_LandMonsInfo,
		.waterMonsInfo = &gUnionCave_B2F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(DRAGONS_DEN),
		.mapNum = MAP_NUM(DRAGONS_DEN),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gDragonsDen_B1F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(NATIONAL_PARK),
		.mapNum = MAP_NUM(NATIONAL_PARK),
		.landMonsInfo = &gNationalPark_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TIN_TOWER_2F),
		.mapNum = MAP_NUM(TIN_TOWER_2F),
		.landMonsInfo = &gTinTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TIN_TOWER_3F),
		.mapNum = MAP_NUM(TIN_TOWER_3F),
		.landMonsInfo = &gTinTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TIN_TOWER_4F),
		.mapNum = MAP_NUM(TIN_TOWER_4F),
		.landMonsInfo = &gTinTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TIN_TOWER_5F),
		.mapNum = MAP_NUM(TIN_TOWER_5F),
		.landMonsInfo = &gTinTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TIN_TOWER_6F),
		.mapNum = MAP_NUM(TIN_TOWER_6F),
		.landMonsInfo = &gTinTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TIN_TOWER_7F),
		.mapNum = MAP_NUM(TIN_TOWER_7F),
		.landMonsInfo = &gTinTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TIN_TOWER_8F),
		.mapNum = MAP_NUM(TIN_TOWER_8F),
		.landMonsInfo = &gTinTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TIN_TOWER_9F),
		.mapNum = MAP_NUM(TIN_TOWER_9F),
		.landMonsInfo = &gTinTower_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(BURNED_TOWER_1F),
		.mapNum = MAP_NUM(BURNED_TOWER_1F),
		.landMonsInfo = &gBurnedTower_1F_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(BURNED_TOWER_B1F),
		.mapNum = MAP_NUM(BURNED_TOWER_B1F),
		.landMonsInfo = &gBurnedTower_B1F_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ILEX_FOREST),
		.mapNum = MAP_NUM(ILEX_FOREST),
		.landMonsInfo = &gIlexForest_LandMonsInfo,
		.waterMonsInfo = &gIlexForest_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SLOWPOKE_WELL_B1F),
		.mapNum = MAP_NUM(SLOWPOKE_WELL_B1F),
		.landMonsInfo = &gSlowpokeWell_B1F_LandMonsInfo,
		.waterMonsInfo = &gSlowpokeWell_B1F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SLOWPOKE_WELL_B2F),
		.mapNum = MAP_NUM(SLOWPOKE_WELL_B2F),
		.landMonsInfo = &gSlowpokeWell_B2F_LandMonsInfo,
		.waterMonsInfo = &gSlowpokeWell_B2F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(DARK_CAVE_VIOLET),
		.mapNum = MAP_NUM(DARK_CAVE_VIOLET),
		.landMonsInfo = &gDarkCave_Violet_LandMonsInfo,
		.waterMonsInfo = &gDarkCave_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(DARK_CAVE_BLACKTHORN),
		.mapNum = MAP_NUM(DARK_CAVE_BLACKTHORN),
		.landMonsInfo = &gDarkCave_Blackthorn_LandMonsInfo,
		.waterMonsInfo = &gDarkCave_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(RUINS_OF_ALPH_MAIN_CHAMBER),
		.mapNum = MAP_NUM(RUINS_OF_ALPH_MAIN_CHAMBER),
		.landMonsInfo = &gRuinsOfAlph_Interior_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MORTAR_1F_OUTER),
		.mapNum = MAP_NUM(MT_MORTAR_1F_OUTER),
		.landMonsInfo = &gMtMortar_1F_Outside_LandMonsInfo,
		.waterMonsInfo = &gMtMortar_1F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MORTAR_1F_INNER),
		.mapNum = MAP_NUM(MT_MORTAR_1F_INNER),
		.landMonsInfo = &gMtMortar_1F_Inside_LandMonsInfo,
		.waterMonsInfo = &gMtMortar_1F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MORTAR_2F),
		.mapNum = MAP_NUM(MT_MORTAR_2F),
		.landMonsInfo = &gMtMortar_2F_LandMonsInfo,
		.waterMonsInfo = &gMtMortar_2F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MORTAR_B1F),
		.mapNum = MAP_NUM(MT_MORTAR_B1F),
		.landMonsInfo = &gMtMortar_B1F_LandMonsInfo,
		.waterMonsInfo = &gMtMortar_B1F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ICE_PATH_1F),
		.mapNum = MAP_NUM(ICE_PATH_1F),
		.landMonsInfo = &gIcePath_1F_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ICE_PATH_B1F),
		.mapNum = MAP_NUM(ICE_PATH_B1F),
		.landMonsInfo = &gIcePath_B1F_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ICE_PATH_B2F_MAHOGANY),
		.mapNum = MAP_NUM(ICE_PATH_B2F_MAHOGANY),
		.landMonsInfo = &gIcePath_B2F_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ICE_PATH_B2F_BLACKTHORN),
		.mapNum = MAP_NUM(ICE_PATH_B2F_BLACKTHORN),
		.landMonsInfo = &gIcePath_B2F_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ICE_PATH_B3F),
		.mapNum = MAP_NUM(ICE_PATH_B3F),
		.landMonsInfo = &gIcePath_B3F_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(WHIRL_ISLANDS_1F_NE),
		.mapNum = MAP_NUM(WHIRL_ISLANDS_1F_NE),
		.landMonsInfo = &gWhirlIslands_Entrances_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(WHIRL_ISLANDS_1F_NW),
		.mapNum = MAP_NUM(WHIRL_ISLANDS_1F_NW),
		.landMonsInfo = &gWhirlIslands_Entrances_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(WHIRL_ISLANDS_1F_SE),
		.mapNum = MAP_NUM(WHIRL_ISLANDS_1F_SE),
		.landMonsInfo = &gWhirlIslands_Entrances_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(WHIRL_ISLANDS_1F_SW),
		.mapNum = MAP_NUM(WHIRL_ISLANDS_1F_SW),
		.landMonsInfo = &gWhirlIslands_Entrances_LandMonsInfo,
		.waterMonsInfo = &gWhirlIslands_SW_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(WHIRL_ISLANDS_B1F),
		.mapNum = MAP_NUM(WHIRL_ISLANDS_B1F),
		.landMonsInfo = &gWhirlIslands_B1F_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(WHIRL_ISLANDS_B2F),
		.mapNum = MAP_NUM(WHIRL_ISLANDS_B2F),
		.landMonsInfo = &gWhirlIslands_B2F_LandMonsInfo,
		.waterMonsInfo = &gWhirlIslands_B2F_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(WHIRL_ISLANDS_CAVE),
		.mapNum = MAP_NUM(WHIRL_ISLANDS_CAVE),
		.landMonsInfo = &gWhirlIslands_Entrances_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(WHIRL_ISLANDS_LUGIAS_CHAMBER),
		.mapNum = MAP_NUM(WHIRL_ISLANDS_LUGIAS_CHAMBER),
		.landMonsInfo = &gWhirlIslands_Lugias_Chamber_LandMonsInfo,
		.waterMonsInfo = &gWhirlIslands_Lugias_Chamber_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SILVER_CAVE_ROOM1),
		.mapNum = MAP_NUM(SILVER_CAVE_ROOM1),
		.landMonsInfo = &gSilverCave_Room1_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SILVER_CAVE_ROOM2),
		.mapNum = MAP_NUM(SILVER_CAVE_ROOM2),
		.landMonsInfo = &gSilverCave_Room2_LandMonsInfo,
		.waterMonsInfo = &gSilverCave_Room2_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SILVER_CAVE_ROOM3),
		.mapNum = MAP_NUM(SILVER_CAVE_ROOM3),
		.landMonsInfo = &gSilverCave_Room3_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SILVER_CAVE_ITEM_ROOMS),
		.mapNum = MAP_NUM(SILVER_CAVE_ITEM_ROOMS),
		.landMonsInfo = &gSilverCave_Item_Rooms_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE27),
		.mapNum = MAP_NUM(ROUTE27),
		.landMonsInfo = &gRoute27_LandMonsInfo,
		.waterMonsInfo = &gRoute27_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE26),
		.mapNum = MAP_NUM(ROUTE26),
		.landMonsInfo = &gRoute26_LandMonsInfo,
		.waterMonsInfo = &gRoute26_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE28),
		.mapNum = MAP_NUM(ROUTE28),
		.landMonsInfo = &gRoute28_LandMonsInfo,
		.waterMonsInfo = &gRoute28_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD),
		.mapNum = MAP_NUM(VICTORY_ROAD),
		.landMonsInfo = &gVictoryRoad_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TOHJO_FALLS),
		.mapNum = MAP_NUM(TOHJO_FALLS),
		.landMonsInfo = &gTohjoFalls_LandMonsInfo,
		.waterMonsInfo = &gTohjoFalls_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(UNDEFINED),
		.mapNum = MAP_NUM(UNDEFINED),
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
};
/*
const struct WildPokemon gBattlePyramidPlaceholders_1[] =
{
    {5, 5, SPECIES_BULBASAUR},
    {5, 5, SPECIES_BULBASAUR},
    {5, 5, SPECIES_BULBASAUR},
    {5, 5, SPECIES_BULBASAUR},
    {5, 5, SPECIES_IVYSAUR},
    {5, 5, SPECIES_IVYSAUR},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_CHARMANDER},
};

const struct WildPokemonInfo gBattlePyramidPlaceholders_1Info = {4, gBattlePyramidPlaceholders_1};

const struct WildPokemon gBattlePyramidPlaceholders_2[] =
{
    {5, 5, SPECIES_IVYSAUR},
    {5, 5, SPECIES_IVYSAUR},
    {5, 5, SPECIES_IVYSAUR},
    {5, 5, SPECIES_IVYSAUR},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMANDER},
};

const struct WildPokemonInfo gBattlePyramidPlaceholders_2Info = {4, gBattlePyramidPlaceholders_2};

const struct WildPokemon gBattlePyramidPlaceholders_3[] =
{
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_VENUSAUR},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARIZARD},
};

const struct WildPokemonInfo gBattlePyramidPlaceholders_3Info = {4, gBattlePyramidPlaceholders_3};

const struct WildPokemon gBattlePyramidPlaceholders_4[] =
{
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMANDER},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_SQUIRTLE},
};

const struct WildPokemonInfo gBattlePyramidPlaceholders_4Info = {4, gBattlePyramidPlaceholders_4};

const struct WildPokemon gBattlePyramidPlaceholders_5[] =
{
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_WARTORTLE},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_WARTORTLE},
};

const struct WildPokemonInfo gBattlePyramidPlaceholders_5Info = {4, gBattlePyramidPlaceholders_5};

const struct WildPokemon gBattlePyramidPlaceholders_6[] =
{
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_WARTORTLE},
    {5, 5, SPECIES_WARTORTLE},
    {5, 5, SPECIES_WARTORTLE},
    {5, 5, SPECIES_WARTORTLE},
    {5, 5, SPECIES_WARTORTLE},
    {5, 5, SPECIES_WARTORTLE},
};

const struct WildPokemonInfo gBattlePyramidPlaceholders_6Info = {4, gBattlePyramidPlaceholders_6};

const struct WildPokemon gBattlePyramidPlaceholders_7[] =
{
    {5, 5, SPECIES_WARTORTLE},
    {5, 5, SPECIES_WARTORTLE},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_SQUIRTLE},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARIZARD},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
    {5, 5, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gBattlePyramidPlaceholders_7Info = {8, gBattlePyramidPlaceholders_7};*/

const struct WildPokemonHeader gBattlePyramidWildMonHeaders[] =
{
    {
        .mapGroup = 0,
        .mapNum = 1,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 2,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 3,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 4,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 5,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 6,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 7,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 255,
        .mapNum = 255,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
};
/*
const struct WildPokemon gBattlePikeMons_1[] =
{
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
    {5, 5, SPECIES_DUSCLOPS},
    {5, 5, SPECIES_DUSCLOPS},
    {5, 5, SPECIES_DUSCLOPS},
    {5, 5, SPECIES_DUSCLOPS},
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
    {5, 5, SPECIES_DUSCLOPS},
    {5, 5, SPECIES_DUSCLOPS},
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
};

const struct WildPokemonInfo gBattlePikeMonsInfo_1 = {10, gBattlePikeMons_1};

const struct WildPokemon gBattlePikeMons_2[] =
{
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
    {5, 5, SPECIES_ELECTRODE},
    {5, 5, SPECIES_ELECTRODE},
    {5, 5, SPECIES_ELECTRODE},
    {5, 5, SPECIES_ELECTRODE},
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
    {5, 5, SPECIES_ELECTRODE},
    {5, 5, SPECIES_ELECTRODE},
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
};

const struct WildPokemonInfo gBattlePikeMonsInfo_2 = {10, gBattlePikeMons_2};

const struct WildPokemon gBattlePikeMons_3[] =
{
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
    {5, 5, SPECIES_BRELOOM},
    {5, 5, SPECIES_BRELOOM},
    {5, 5, SPECIES_BRELOOM},
    {5, 5, SPECIES_BRELOOM},
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
    {5, 5, SPECIES_BRELOOM},
    {5, 5, SPECIES_BRELOOM},
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
};

const struct WildPokemonInfo gBattlePikeMonsInfo_3 = {10, gBattlePikeMons_3};

const struct WildPokemon gBattlePikeMons_4[] =
{
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
    {5, 5, SPECIES_WOBBUFFET},
    {5, 5, SPECIES_WOBBUFFET},
    {5, 5, SPECIES_WOBBUFFET},
    {5, 5, SPECIES_WOBBUFFET},
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
    {5, 5, SPECIES_WOBBUFFET},
    {5, 5, SPECIES_WOBBUFFET},
    {5, 5, SPECIES_SEVIPER},
    {5, 5, SPECIES_MILOTIC},
};

const struct WildPokemonInfo gBattlePikeMonsInfo_4 = {10, gBattlePikeMons_4};
*/
const struct WildPokemonHeader gBattlePikeWildMonHeaders[] =
{
    {
        .mapGroup = 0,
        .mapNum = 1,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 2,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 3,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 0,
        .mapNum = 4,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = 255,
        .mapNum = 255,
        .landMonsInfo = NULL,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
};

//const struct WildPokemon gWildFeebasRoute119Data = {20, 25, SPECIES_FEEBAS};

const u16 gRoute119WaterTileData[] =
{
    0, 0x2D, 0,
    0x2E, 0x5B, 0x83,
    0x5C, 0x8B, 0x12A,
};