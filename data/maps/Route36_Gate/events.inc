Route36_Gate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_OFFICER, 1, 0, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN, 4, 7, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, FALSE, 0, NULL, 0

Route36_Gate_MapWarps::
	warp_def 4, 7, 3, 1, MAP_ROUTE124
	warp_def 5, 7, 3, 1, MAP_ROUTE124
	warp_def 4, 0, 3, 2, MAP_ROUTE108
	warp_def 5, 0, 3, 3, MAP_ROUTE108

Route36_Gate_MapEvents::
	map_events Route36_Gate_EventObjects, Route36_Gate_MapWarps, 0x0, 0x0
