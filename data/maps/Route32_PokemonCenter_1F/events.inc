Route32_PokemonCenter_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 3, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC01A, 0
	object_event 2, EVENT_OBJ_GFX_FISHING_GURU, 0, 1, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

Route32_PokemonCenter_1F_MapWarps:
	warp_def 3, 7, 3, 2, MAP_ROUTE32
	warp_def 4, 7, 3, 2, MAP_ROUTE32
	warp_def 0, 7, 3, 0, MAP_ROUTE32_POKEMON_CENTER_2F

Route32_PokemonCenter_1F_MapEvents::
	map_events Route32_PokemonCenter_1F_EventObjects, Route32_PokemonCenter_1F_MapWarps, 0x0, 0x0

