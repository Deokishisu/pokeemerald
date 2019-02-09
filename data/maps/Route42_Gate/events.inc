Route42_Gate_EventObjects:
	object_event 1, EVENT_OBJ_GFX_OFFICER, 0, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

Route42_Gate_MapWarps:
	warp_def 9, 4, 3, 0, MAP_ROUTE42
	warp_def 9, 5, 3, 1, MAP_ROUTE42
	warp_def 0, 4, 3, 0, MAP_ECRUTEAK_CITY
	warp_def 0, 5, 3, 1, MAP_ECRUTEAK_CITY

Route42_Gate_MapEvents::
	map_events Route42_Gate_EventObjects, Route42_Gate_MapWarps, 0x0, 0x0

