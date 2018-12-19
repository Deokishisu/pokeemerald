Route32_Gate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_OFFICER, PAL_NPC_RED, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_M, PAL_NPC_BROWN, 8, 2, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_GREEN, 1, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0

Route32_Gate_MapWarps::
	warp_def 9, 4, 3, 0, MAP_ROUTE32
	warp_def 9, 5, 3, 1, MAP_ROUTE32
	warp_def 0, 4, 3, 7, MAP_RUINS_OF_ALPH_EXTERIOR
	warp_def 0, 5, 3, 8, MAP_RUINS_OF_ALPH_EXTERIOR

Route32_Gate_MapEvents::
	map_events Route32_Gate_EventObjects, Route32_Gate_MapWarps, 0x0, 0x0
