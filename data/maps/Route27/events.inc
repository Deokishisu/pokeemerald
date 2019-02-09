Route27_EventObjects:
	object_event 1, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 48, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, NULL, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 58, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, NULL, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 72, 10, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 4, NULL, 0
	object_event 4, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 37, 6, 3, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 1, 2, NULL, 0
	object_event 5, EVENT_OBJ_GFX_YOUNGSTER, 0, 65, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 3, NULL, 0
	object_event 6, EVENT_OBJ_GFX_YOUNGSTER, 0, 58, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 3, NULL, 0
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 60, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, 0, 53, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 9, EVENT_OBJ_GFX_FAT_MAN, 0, 21, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, NULL, 0

Route27_MapWarps:
	warp_def 33, 7, 3, 0, MAP_ROUTE27_HOUSE
	warp_def 26, 5, 3, 0, MAP_TOHJO_FALLS
	warp_def 36, 5, 3, 1, MAP_TOHJO_FALLS

Route27_MapCoordEvents:
	coord_event 18, 10, 3, VAR_TEMP_0, 0, NULL
	coord_event 19, 10, 3, VAR_TEMP_0, 0, NULL

Route27_MapBGEvents:
	bg_event 25, 7, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route27_MapEvents::
	map_events Route27_EventObjects, Route27_MapWarps, Route27_MapCoordEvents, Route27_MapBGEvents

