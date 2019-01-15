RadioTower_5F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_GENTLEMAN, 0, 3, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 13, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ROCKET_GRUNT_F, PAL_NPC_RED, 17, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 1, NULL, 0
	object_event 4, EVENT_OBJ_GFX_GUITARIST, PAL_NPC_RED, 13, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 8, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

RadioTower_5F_MapWarps::
	warp_def 0, 0, 3, 0, MAP_RADIO_TOWER_4F
	warp_def 12, 0, 3, 2, MAP_RADIO_TOWER_4F

RadioTower_5F_MapCoordEvents::
	coord_event 0, 3, 3, VAR_TEMP_0, 0, NULL
	coord_event 16, 5, 3, VAR_TEMP_0, 0, NULL

RadioTower_5F_MapBGEvents::
	bg_event 3, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 11, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 15, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 16, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 17, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

RadioTower_5F_MapEvents::
	map_events RadioTower_5F_EventObjects, RadioTower_5F_MapWarps, RadioTower_5F_MapCoordEvents, RadioTower_5F_MapBGEvents
