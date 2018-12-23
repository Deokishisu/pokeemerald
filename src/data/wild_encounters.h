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
		.mapGroup = MAP_GROUP(VICTORY_ROAD_1F),
		.mapNum = MAP_NUM(VICTORY_ROAD_1F),
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE27),
		.mapNum = MAP_NUM(ROUTE27),
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE26),
		.mapNum = MAP_NUM(ROUTE26),
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE23),
		.mapNum = MAP_NUM(ROUTE23),
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE28),
		.mapNum = MAP_NUM(ROUTE28),
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_B1F),
		.mapNum = MAP_NUM(VICTORY_ROAD_B1F),
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_B2F),
		.mapNum = MAP_NUM(VICTORY_ROAD_B2F),
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
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