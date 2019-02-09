Route34_Gate1_EventObjects:
	object_event 1, EVENT_OBJ_GFX_OFFICER, 0, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_OLD_WOMAN, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

Route34_Gate1_MapWarps:
	warp_def 9, 4, 3, 6, MAP_AZALEA_TOWN
	warp_def 9, 5, 3, 7, MAP_AZALEA_TOWN
	warp_def 0, 4, 3, 1, MAP_ILEX_FOREST
	warp_def 0, 5, 3, 2, MAP_ILEX_FOREST

Route34_Gate1_MapEvents::
	map_events Route34_Gate1_EventObjects, Route34_Gate1_MapWarps, 0x0, 0x0

