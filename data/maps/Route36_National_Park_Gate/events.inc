Route36_National_Park_Gate_EventObjects:
	object_event 1, EVENT_OBJ_GFX_OFFICER, 0, 0, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 0, 2, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, 0, 4, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_GUITARIST, 0, 2, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_POKEFAN_M, 0, 6, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_YOUNGSTER, 0, 2, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_YOUNGSTER, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 8, EVENT_OBJ_GFX_LASS, 0, 3, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 9, EVENT_OBJ_GFX_YOUNGSTER, 0, 4, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 10, EVENT_OBJ_GFX_YOUNGSTER, 0, 6, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 11, EVENT_OBJ_GFX_YOUNGSTER, 0, 6, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 12, EVENT_OBJ_GFX_OFFICER, 0, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

Route36_National_Park_Gate_MapWarps:
	warp_def 9, 4, 3, 0, MAP_ROUTE36
	warp_def 9, 5, 3, 1, MAP_ROUTE36
	warp_def 0, 4, 3, 2, MAP_NATIONAL_PARK
	warp_def 0, 5, 3, 3, MAP_NATIONAL_PARK

Route36_National_Park_Gate_MapBGEvents:
	bg_event 6, 0, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route36_National_Park_Gate_MapEvents::
	map_events Route36_National_Park_Gate_EventObjects, Route36_National_Park_Gate_MapWarps, 0x0, Route36_National_Park_Gate_MapBGEvents

