Route43_Gate2_EventObjects::
	object_event 1, EVENT_OBJ_GFX_OFFICER, PAL_NPC_RED, 0, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ROCKET_GRUNT_M, 0, 7, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0

Route43_Gate2_MapWarps::
	warp_def 4, 7, 3, 2, MAP_ROUTE43
	warp_def 5, 7, 3, 2, MAP_ROUTE43
	warp_def 4, 0, 3, 3, MAP_ROUTE43
	warp_def 5, 0, 3, 4, MAP_ROUTE43

Route43_Gate2_MapEvents::
	map_events Route43_Gate2_EventObjects, Route43_Gate2_MapWarps, 0x0, 0x0
