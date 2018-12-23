BlackthornCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 1, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_PokemonCenter_1F_EventScript_2173E7, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, 0, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, FortreeCity_PokemonCenter_1F_EventScript_2173F5, 0
	object_event 3, EVENT_OBJ_GFX_TWIN, PAL_NPC_GREEN, 1, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, FortreeCity_PokemonCenter_1F_EventScript_2173FE, 0
	object_event 4, EVENT_OBJ_GFX_COOLTRAINER_M, PAL_NPC_RED, 7, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, FortreeCity_PokemonCenter_1F_EventScript_217407, 0

BlackthornCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 4, MAP_BLACKTHORN_CITY
	warp_def 4, 7, 3, 4, MAP_BLACKTHORN_CITY
	warp_def 0, 7, 3, 0, MAP_BLACKTHORN_CITY_POKEMON_CENTER_2F

BlackthornCity_PokemonCenter_1F_MapEvents::
	map_events BlackthornCity_PokemonCenter_1F_EventObjects, BlackthornCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
