VioletCity_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, PAL_NPC_RED, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgCity_PokemonCenter_1F_EventScript_2079FC, 0
	object_event 2, EVENT_OBJ_GFX_GAMEBOY_KID, PAL_NPC_GREEN, 7, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgCity_PokemonCenter_1F_EventScript_291539, 0
	object_event 3, EVENT_OBJ_GFX_GENTLEMAN, 0, 1, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, PetalburgCity_PokemonCenter_1F_EventScript_207A0A, 0
	object_event 4, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_RED, 8, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, PetalburgCity_PokemonCenter_1F_EventScript_207A13, 0
	object_event 5, EVENT_OBJ_GFX_SCIENTIST, PAL_NPC_BLUE, 4, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, PetalburgCity_PokemonCenter_1F_EventScript_207A1C, 0

VioletCity_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 3, MAP_VIOLET_CITY
	warp_def 4, 7, 3, 3, MAP_VIOLET_CITY
	warp_def 0, 7, 3, 0, MAP_VIOLET_CITY_POKEMON_CENTER_2F

VioletCity_PokemonCenter_1F_MapEvents::
	map_events VioletCity_PokemonCenter_1F_EventObjects, VioletCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
