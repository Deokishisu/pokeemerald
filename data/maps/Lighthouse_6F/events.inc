Lighthouse_6F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_JASMINE, PAL_NPC_RED, 8, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, 0
	object_event 2, EVENT_OBJ_GFX_RHYDON, PAL_NPC_BROWN, 9, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 3, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

Lighthouse_6F_MapWarps::
	warp_def 9, 15, 3, 0, MAP_LIGHTHOUSE_5F
	warp_def 16, 5, 3, 5, MAP_LIGHTHOUSE_5F
	warp_def 17, 5, 3, 6, MAP_LIGHTHOUSE_5F

Lighthouse_6F_MapCoordEvents::
	coord_event 14, 9, 3, VAR_0x40D7, 0, SkyPillar_Top_EventScript_23979A

Lighthouse_6F_MapEvents::
	map_events Lighthouse_6F_EventObjects, Lighthouse_6F_MapWarps, Lighthouse_6F_MapCoordEvents, 0x0
