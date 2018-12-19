GoldenrodCity_UndergroundSwitchRoomEntrances_EventObjects::
	object_event 1, EVENT_OBJ_GFX_PHARMACIST, PAL_NPC_GREEN, 9, 12, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRUE, 2, SlateportCity_PokemonFanClub_EventScript_20A1E8, 0
	object_event 2, EVENT_OBJ_GFX_PHARMACIST, PAL_NPC_GREEN, 4, 8, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 1, TRUE, 2, SlateportCity_PokemonFanClub_EventScript_20A1F1, 0
	object_event 3, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 17, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 3, SlateportCity_PokemonFanClub_EventScript_28C943, 0
	object_event 4, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 11, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 3, SlateportCity_PokemonFanClub_EventScript_20A17E, 0
	object_event 5, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 3, 2, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 3, SlateportCity_PokemonFanClub_EventScript_209E96, 0
	object_event 6, EVENT_OBJ_GFX_ROCKET_GRUNT_F, PAL_NPC_RED, 19, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRUE, 1, SlateportCity_PokemonFanClub_EventScript_20A20D, 0
	object_event 7, EVENT_OBJ_GFX_TEACHER, 0, 3, 26, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, SlateportCity_PokemonFanClub_EventScript_20A1FA, 0
	object_event 8, EVENT_OBJ_GFX_SUPER_NERD, 0, 19, 26, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, SlateportCity_PokemonFanClub_EventScript_20A220, 0
	object_event 9, EVENT_OBJ_GFX_ITEM_BALL, 0, 1, 12, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 1, 0, 0, SlateportCity_PokemonFanClub_EventScript_2C7F16, 0
	object_event 10, EVENT_OBJ_GFX_ITEM_BALL, 0, 14, 9, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 1, 0, 0, SlateportCity_PokemonFanClub_EventScript_2C7F16, 0
	object_event 11, EVENT_OBJ_GFX_RIVAL, 0, 23, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 1, 0, 0, SlateportCity_PokemonFanClub_EventScript_2C7F16, 0

GoldenrodCity_UndergroundSwitchRoomEntrances_MapWarps::
	warp_def 23, 3, 0, 4, MAP_GOLDENROD_CITY
	warp_def 22, 10, 0, 0, MAP_GOLDENROD_CITY_UNDERGROUND_WAREHOUSE
	warp_def 23, 10, 0, 1, MAP_GOLDENROD_CITY_UNDERGROUND_WAREHOUSE
	warp_def 5, 24, 0, 1, MAP_GOLDENROD_CITY_UNDERGROUND
	warp_def 4, 28, 0, 13, MAP_GOLDENROD_CITY
	warp_def 5, 28, 0, 13, MAP_GOLDENROD_CITY
	warp_def 21, 24, 0, 0, MAP_GOLDENROD_CITY_UNDERGROUND
	warp_def 20, 28, 0, 12, MAP_GOLDENROD_CITY
	warp_def 21, 28, 0, 12, MAP_GOLDENROD_CITY

GoldenrodCity_UndergroundSwitchRoomEntrances_MapCoordEvents::
	coord_event 19, 4, 3, VAR_TEMP_0, 0, NULL
	coord_event 19, 5, 3, VAR_TEMP_0, 0, NULL

GoldenrodCity_UndergroundSwitchRoomEntrances_MapBGEvents::
	bg_event 16, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 10, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 2, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 20, 11, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 8, 9, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 1, 8, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

GoldenrodCity_UndergroundSwitchRoomEntrances_MapEvents::
	map_events GoldenrodCity_UndergroundSwitchRoomEntrances_EventObjects, GoldenrodCity_UndergroundSwitchRoomEntrances_MapWarps, GoldenrodCity_UndergroundSwitchRoomEntrances_MapCoordEvents, GoldenrodCity_UndergroundSwitchRoomEntrances_MapBGEvents
