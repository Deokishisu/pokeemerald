GoldenrodCity_BillsFamilysHouse_EventObjects::
	object_event 1, EVENT_OBJ_GFX_BILL, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, SlateportCity_House2_EventScript_20D9AF, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_F, 0, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SlateportCity_House2_EventScript_20D9AF, 0
	object_event 3, EVENT_OBJ_GFX_TWIN, PAL_NPC_GREEN, 5, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, SlateportCity_House2_EventScript_20D9B8, 0

GoldenrodCity_BillsFamilysHouse_MapWarps::
	warp_def 2, 7, 0, 3, MAP_GOLDENROD_CITY
	warp_def 3, 7, 0, 3, MAP_GOLDENROD_CITY

GoldenrodCity_BillsFamilysHouse_MapEvents::
	map_events GoldenrodCity_BillsFamilysHouse_EventObjects, GoldenrodCity_BillsFamilysHouse_MapWarps, 0x0, 0x0
