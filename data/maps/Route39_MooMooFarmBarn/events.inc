Route39_MooMooFarmBarn_EventObjects::
	object_event 1, EVENT_OBJ_GFX_TWIN, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_TWIN, 0, 4, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_CAL, 0, 3, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

Route39_MooMooFarmBarn_MapWarps::
	warp_def 3, 7, 3, 1, MAP_ROUTE39
	warp_def 4, 7, 3, 1, MAP_ROUTE39

Route39_MooMooFarmBarn_MapEvents::
	map_events Route39_MooMooFarmBarn_EventObjects, Route39_MooMooFarmBarn_MapWarps, 0x0, 0x0
