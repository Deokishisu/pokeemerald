Route124_EventObjects::
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, 0, 4, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 0, 1, 2, Route124_EventScript_1F662C, 0
	object_event 2, EVENT_OBJ_GFX_SCIENTIST, 0, 11, 15, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, Route124_EventScript_1F6643, 0
	object_event 3, EVENT_OBJ_GFX_FAT_MAN, 0, 13, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 1, 1, Route124_EventScript_1F66A7, 0
	object_event 4, EVENT_OBJ_GFX_YOUNGSTER, 4, 14, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, Route124_EventScript_1F670B, 0
	object_event 5, EVENT_OBJ_GFX_YOUNGSTER, 1, 12, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, Route124_EventScript_1F6722, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 0, 0, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route124_EventScript_290FF1, FLAG_ITEM_ROUTE_124_RED_SHARD
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 0, 0, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route124_EventScript_290FFE, FLAG_ITEM_ROUTE_124_BLUE_SHARD
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, 0, 0, 0, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route124_EventScript_29100B, FLAG_ITEM_ROUTE_124_YELLOW_SHARD

Route124_MapWarps::
	warp_def 7, 5, 3, 0, MAP_ROUTE36_GATE
	warp_def 14, 7, 3, 0, MAP_ROUTE124
	warp_def 17, 11, 3, 0, MAP_ROUTE124
	warp_def 10, 13, 3, 0, MAP_ROUTE124
	warp_def 2, 17, 3, 0, MAP_ROUTE124
	warp_def 6, 19, 3, 0, MAP_ROUTE124
	warp_def 13, 20, 3, 2, MAP_ROUTE32_GATE
	warp_def 13, 21, 3, 3, MAP_ROUTE32_GATE
	warp_def 6, 27, 3, 0, MAP_ROUTE124
	warp_def 2, 29, 3, 0, MAP_ROUTE124
	warp_def 16, 33, 3, 0, MAP_ROUTE124

Route124_MapBGEvents::
	bg_event 16, 8, 3, BG_EVENT_PLAYER_FACING_ANY, Route124_EventScript_1F657C
	bg_event 18, 12, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 12, 16, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route124_MapEvents::
	map_events Route124_EventObjects, Route124_MapWarps, 0x0, Route124_MapBGEvents
