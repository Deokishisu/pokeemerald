Route39_MooMooFarmHouse_EventObjects:
	object_event 1, EVENT_OBJ_GFX_POKEFAN_M, 0, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_F, 0, 5, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, NULL, 0

Route39_MooMooFarmHouse_MapWarps:
	warp_def 2, 7, 3, 0, MAP_ROUTE39
	warp_def 3, 7, 3, 0, MAP_ROUTE39

Route39_MooMooFarmHouse_MapEvents::
	map_events Route39_MooMooFarmHouse_EventObjects, Route39_MooMooFarmHouse_MapWarps, 0x0, 0x0

