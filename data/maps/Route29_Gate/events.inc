Route29_Gate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, 0, 0, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 0, 6, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, FALSE, 0, NULL, 0

Route29_Gate_MapWarps::
	warp_def 4, 7, 3, 0, MAP_ROUTE101
	warp_def 4, 0, 3, 0, MAP_ROUTE118
	warp_def 5, 7, 3, 0, MAP_ROUTE101
	warp_def 5, 0, 3, 1, MAP_ROUTE118

Route29_Gate_MapEvents::
	map_events Route29_Gate_EventObjects, Route29_Gate_MapWarps, 0x0, 0x0
