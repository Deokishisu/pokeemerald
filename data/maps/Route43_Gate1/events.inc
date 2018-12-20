Route43_Gate1_EventObjects::
	object_event 1, EVENT_OBJ_GFX_OFFICER, PAL_NPC_RED, 0, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0

Route43_Gate1_MapWarps::
	warp_def 4, 7, 3, 0, MAP_MAHOGANY_TOWN
	warp_def 5, 7, 3, 0, MAP_MAHOGANY_TOWN
	warp_def 4, 0, 3, 0, MAP_ROUTE43
	warp_def 5, 0, 3, 1, MAP_ROUTE43

Route43_Gate1_MapEvents::
	map_events Route43_Gate1_EventObjects, Route43_Gate1_MapWarps, 0x0, 0x0
