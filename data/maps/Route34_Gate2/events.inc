Route34_Gate2_EventObjects::
	object_event 1, EVENT_OBJ_GFX_TEACHER, PAL_NPC_BLUE, 9, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_CAL, PAL_NPC_RED, 9, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_LASS, PAL_NPC_GREEN, 3, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_TEACHER, PAL_NPC_BLUE, 5, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0

Route34_Gate2_MapWarps::
	warp_def 4, 7, 3, 0, MAP_ILEX_FOREST
	warp_def 5, 7, 3, 0, MAP_ILEX_FOREST
	warp_def 4, 0, 3, 0, MAP_ROUTE34
	warp_def 5, 0, 3, 1, MAP_ROUTE34

Route34_Gate2_MapEvents::
	map_events Route34_Gate2_EventObjects, Route34_Gate2_MapWarps, 0x0, 0x0
