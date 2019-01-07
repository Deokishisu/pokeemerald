TeamRocketBase_B1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 0, 0, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRUE, 3, NULL, 0
	object_event 3, EVENT_OBJ_GFX_SCIENTIST, PAL_NPC_BLUE, 18, 12, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRUE, 3, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 27, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 14, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 21, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

TeamRocketBase_B1F_MapWarps::
	warp_def 27, 2, 3, 2, MAP_MAHOGANY_TOWN_SHOP
	warp_def 3, 14, 3, 0, MAP_TEAM_ROCKET_BASE_B2F
	warp_def 5, 15, 3, 3, MAP_TEAM_ROCKET_BASE_B1F
	warp_def 25, 2, 3, 2, MAP_TEAM_ROCKET_BASE_B1F

TeamRocketBase_B1F_MapCoordEvents::
	coord_event 24, 2, 3, VAR_TEMP_0, 0, NULL
	coord_event 24, 3, 3, VAR_TEMP_0, 0, NULL
	coord_event 6, 2, 3, VAR_TEMP_0, 0, NULL
	coord_event 6, 3, 3, VAR_TEMP_0, 0, NULL
	coord_event 24, 6, 3, VAR_TEMP_0, 0, NULL
	coord_event 24, 7, 3, VAR_TEMP_0, 0, NULL
	coord_event 22, 16, 3, VAR_TEMP_0, 0, NULL
	coord_event 8, 16, 3, VAR_TEMP_0, 0, NULL
	coord_event 2, 7, 3, VAR_TEMP_0, 0, NULL
	coord_event 3, 7, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 7, 3, VAR_TEMP_0, 0, NULL
	coord_event 1, 8, 3, VAR_TEMP_0, 0, NULL
	coord_event 3, 8, 3, VAR_TEMP_0, 0, NULL
	coord_event 5, 8, 3, VAR_TEMP_0, 0, NULL
	coord_event 3, 9, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 9, 3, VAR_TEMP_0, 0, NULL
	coord_event 1, 10, 3, VAR_TEMP_0, 0, NULL
	coord_event 2, 10, 3, VAR_TEMP_0, 0, NULL
	coord_event 3, 10, 3, VAR_TEMP_0, 0, NULL
	coord_event 5, 10, 3, VAR_TEMP_0, 0, NULL
	coord_event 2, 11, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 11, 3, VAR_TEMP_0, 0, NULL
	coord_event 1, 12, 3, VAR_TEMP_0, 0, NULL
	coord_event 2, 12, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 12, 3, VAR_TEMP_0, 0, NULL
	coord_event 5, 12, 3, VAR_TEMP_0, 0, NULL
	coord_event 1, 13, 3, VAR_TEMP_0, 0, NULL
	coord_event 3, 13, 3, VAR_TEMP_0, 0, NULL
	coord_event 4, 13, 3, VAR_TEMP_0, 0, NULL
	coord_event 5, 13, 3, VAR_TEMP_0, 0, NULL

TeamRocketBase_B1F_MapBGEvents::
	bg_event 19, 11, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 24, 1, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 6, 1, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 8, 15, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 22, 15, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL
	bg_event 24, 5, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_hidden_item_event 3, 11, 3, ITEM_REVIVE, FLAG_TEMP_1

TeamRocketBase_B1F_MapEvents::
	map_events TeamRocketBase_B1F_EventObjects, TeamRocketBase_B1F_MapWarps, TeamRocketBase_B1F_MapCoordEvents, TeamRocketBase_B1F_MapBGEvents
