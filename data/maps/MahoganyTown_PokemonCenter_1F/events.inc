MahoganyTown_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 1, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, VerdanturfTown_PokemonCenter_1F_EventScript_20273A, 0
	object_event 2, EVENT_OBJ_GFX_GENTLEMAN, 0, 1, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, VerdanturfTown_PokemonCenter_1F_EventScript_202748, 0
	object_event 3, EVENT_OBJ_GFX_OLD_MAN, 0, 8, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, VerdanturfTown_PokemonCenter_1F_EventScript_202751, 0
	object_event 4, EVENT_OBJ_GFX_ZLITTLE_BOY, 0, 8, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 0, 0, 0, VerdanturfTown_PokemonCenter_1F_EventScript_2C7FE6, 0

MahoganyTown_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 2, MAP_MAHOGANY_TOWN
	warp_def 4, 7, 3, 2, MAP_MAHOGANY_TOWN
	warp_def 0, 7, 3, 0, MAP_MAHOGANY_TOWN_POKEMON_CENTER_2F

MahoganyTown_PokemonCenter_1F_MapEvents::
	map_events MahoganyTown_PokemonCenter_1F_EventObjects, MahoganyTown_PokemonCenter_1F_MapWarps, 0x0, 0x0
