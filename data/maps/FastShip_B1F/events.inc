FastShip_B1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 30, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_SAILOR, 0, 31, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_SAILOR, 0, 9, 11, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, NULL, 0
	object_event 4, EVENT_OBJ_GFX_LASS, 0, 6, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 1, NULL, 0
	object_event 5, EVENT_OBJ_GFX_SUPER_NERD, 0, 26, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, NULL, 0
	object_event 6, EVENT_OBJ_GFX_SAILOR, 0, 17, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, NULL, 0
	object_event 7, EVENT_OBJ_GFX_FAT_MAN, 0, 25, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, NULL, 0
	object_event 8, EVENT_OBJ_GFX_BLACK_BELT, 0, 15, 11, 3, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 1, 3, NULL, 0
	object_event 9, EVENT_OBJ_GFX_SAILOR, 0, 23, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, NULL, 0
	object_event 10, EVENT_OBJ_GFX_TEACHER, 0, 9, 11, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, NULL, 0
	object_event 11, EVENT_OBJ_GFX_YOUNGSTER, 0, 14, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 1, NULL, 0
	object_event 12, EVENT_OBJ_GFX_YOUNGSTER, 0, 14, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 1, NULL, 0

FastShip_B1F_MapWarps:
	warp_def 5, 11, 3, 10, MAP_FAST_SHIP_1F
	warp_def 31, 13, 3, 11, MAP_FAST_SHIP_1F

FastShip_B1F_MapCoordEvents:
	coord_event 30, 7, 3, VAR_TEMP_0, 0, NULL
	coord_event 31, 7, 3, VAR_TEMP_0, 0, NULL

FastShip_B1F_MapBGEvents:
	bg_event 27, 9, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

FastShip_B1F_MapEvents::
	map_events FastShip_B1F_EventObjects, FastShip_B1F_MapWarps, FastShip_B1F_MapCoordEvents, FastShip_B1F_MapBGEvents

