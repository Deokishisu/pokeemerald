Route31_Gate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_OFFICER, PAL_NPC_RED, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_F, PAL_NPC_BLUE, 1, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, NULL, 0

Route31_Gate_MapWarps::
	warp_def 9, 4, 3, 1, MAP_ROUTE31
	warp_def 9, 5, 3, 2, MAP_ROUTE31
	warp_def 0, 4, 3, 6, MAP_VIOLET_CITY
	warp_def 0, 5, 3, 7, MAP_VIOLET_CITY

Route31_Gate_MapEvents::
	map_events Route31_Gate_EventObjects, Route31_Gate_MapWarps, 0x0, 0x0
