Route30_Mr_Pokemons_House_EventObjects:
	object_event 1, EVENT_OBJ_GFX_GENTLEMAN, 0, 3, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_PROF_OAK, 0, 6, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0

Route30_Mr_Pokemons_House_MapWarps:
	warp_def 2, 7, 3, 1, MAP_ROUTE30
	warp_def 3, 7, 3, 1, MAP_ROUTE30

Route30_Mr_Pokemons_House_MapBGEvents:
	bg_event 0, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 1, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 6, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 7, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 6, 4, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route30_Mr_Pokemons_House_MapEvents::
	map_events Route30_Mr_Pokemons_House_EventObjects, Route30_Mr_Pokemons_House_MapWarps, 0x0, Route30_Mr_Pokemons_House_MapBGEvents

