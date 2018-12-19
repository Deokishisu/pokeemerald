CherrygroveCity_House1_EventObjects::
	object_event 1, EVENT_OBJ_GFX_POKEFAN_M, PAL_NPC_BROWN, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, OldaleTown_House1_EventScript_1FBE86, 0
	object_event 2, EVENT_OBJ_GFX_BUG_CATCHER, PAL_NPC_RED, 5, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, OldaleTown_House1_EventScript_1FBE86, 0

CherrygroveCity_House1_MapWarps::
	warp_def 2, 7, 0, 0, MAP_CHERRYGROVE_CITY
	warp_def 3, 7, 0, 0, MAP_CHERRYGROVE_CITY

CherrygroveCity_House1_MapEvents::
	map_events CherrygroveCity_House1_EventObjects, CherrygroveCity_House1_MapWarps, 0x0, 0x0
