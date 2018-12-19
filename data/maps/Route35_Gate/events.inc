Route35_Gate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_OFFICER, PAL_NPC_RED, 0, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_F, PAL_NPC_BLUE, 6, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_FAT_MAN, PAL_NPC_GREEN, 3, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, NULL, 0

Route35_Gate_MapWarps::
	warp_def 4, 7, 3, 11, MAP_GOLDENROD_CITY
	warp_def 5, 7, 3, 11, MAP_GOLDENROD_CITY
	warp_def 4, 0, 3, 0, MAP_ROUTE35
	warp_def 5, 0, 3, 1, MAP_ROUTE35

Route35_Gate_MapEvents::
	map_events Route35_Gate_EventObjects, Route35_Gate_MapWarps, 0x0, 0x0
