IndigoPlateau_PokemonCenter_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, DewfordTown_PokemonCenter_1F_EventScript_1FC537, 0
	object_event 2, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 11, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 11, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_RIVAL, 0, 16, 9, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_OLD_MAN, PAL_NPC_BLUE, 1, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_CAL, PAL_NPC_BROWN, 0, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

IndigoPlateau_PokemonCenter_1F_MapWarps::
	warp_def 5, 13, 3, 0, MAP_ROUTE23
	warp_def 6, 13, 3, 1, MAP_ROUTE23
	warp_def 0, 13, 3, 0, MAP_INDIGO_PLATEAU_POKEMON_CENTER_2F
	warp_def 14, 3, 3, 0, MAP_INDIGO_PLATEAU_WILLS_ROOM

IndigoPlateau_PokemonCenter_1F_MapCoordEvents::
	coord_event 16, 4, 3, VAR_TEMP_0, 0, NULL
	coord_event 17, 4, 3, VAR_TEMP_0, 0, NULL

IndigoPlateau_PokemonCenter_1F_MapEvents::
	map_events IndigoPlateau_PokemonCenter_1F_EventObjects, IndigoPlateau_PokemonCenter_1F_MapWarps, IndigoPlateau_PokemonCenter_1F_MapCoordEvents, 0x0
