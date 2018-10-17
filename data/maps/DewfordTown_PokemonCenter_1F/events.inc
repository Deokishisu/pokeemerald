DewfordTown_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 1, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, DewfordTown_PokemonCenter_1F_EventScript_1FC537, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_F, 4, 1, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, DewfordTown_PokemonCenter_1F_EventScript_1FC545, 0
	object_event 3, EVENT_OBJ_GFX_GENTLEMAN, 2, 9, 6, 0, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 2, 1, 0, 0, DewfordTown_PokemonCenter_1F_EventScript_1FC54E, 0
	object_event 4, EVENT_OBJ_GFX_FISHING_GURU, 2, 6, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

DewfordTown_PokemonCenter_1F_MapWarps::
	warp_def 3, 7, 3, 1, MAP_DEWFORD_TOWN
	warp_def 4, 7, 3, 1, MAP_DEWFORD_TOWN
	warp_def 0, 7, 3, 0, MAP_DEWFORD_TOWN_POKEMON_CENTER_2F

DewfordTown_PokemonCenter_1F_MapEvents::
	map_events DewfordTown_PokemonCenter_1F_EventObjects, DewfordTown_PokemonCenter_1F_MapWarps, 0x0, 0x0
