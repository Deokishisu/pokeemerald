Route28_House_EventObjects:
	object_event 1, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_CAL, 0, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

Route28_House_MapWarps:
	warp_def 2, 7, 3, 0, MAP_ROUTE28
	warp_def 3, 7, 3, 0, MAP_ROUTE28

Route28_House_MapBGEvents:
	bg_event 0, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 1, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route28_House_MapEvents::
	map_events Route28_House_EventObjects, Route28_House_MapWarps, 0x0, Route28_House_MapBGEvents

