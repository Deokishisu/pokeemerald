RadioTower_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_RECEPTIONIST, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_LASS, 0, 16, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, 0, 15, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 14, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, NULL, 0
	object_event 5, EVENT_OBJ_GFX_GENTLEMAN, 0, 8, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 12, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0

RadioTower_1F_MapWarps:
	warp_def 2, 7, 3, 10, MAP_GOLDENROD_CITY
	warp_def 3, 7, 3, 10, MAP_GOLDENROD_CITY
	warp_def 15, 0, 3, 1, MAP_RADIO_TOWER_2F

RadioTower_1F_MapBGEvents:
	bg_event 3, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 13, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

RadioTower_1F_MapEvents::
	map_events RadioTower_1F_EventObjects, RadioTower_1F_MapWarps, 0x0, RadioTower_1F_MapBGEvents

