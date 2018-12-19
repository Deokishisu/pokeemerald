CherrygroveCity_Mart_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, PAL_NPC_GREEN, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, OldaleTown_Mart_EventScript_1FC240, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_RED, 2, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, OldaleTown_Mart_EventScript_1FC28A, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_M, PAL_NPC_BLUE, 7, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, 0, 0, OldaleTown_Mart_EventScript_1FC2A9, 0

CherrygroveCity_Mart_MapWarps::
	warp_def 3, 7, 0, 3, MAP_CHERRYGROVE_CITY
	warp_def 2, 7, 0, 3, MAP_CHERRYGROVE_CITY

CherrygroveCity_Mart_MapEvents::
	map_events CherrygroveCity_Mart_EventObjects, CherrygroveCity_Mart_MapWarps, 0x0, 0x0
