Route118_EventObjects::
	object_event 1, EVENT_OBJ_GFX_POKEFAN_M, 4, 12, 19, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 2, Route118_EventScript_1F4079, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 3, 4, 14, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 2, Route118_EventScript_1F3F87, 0
	object_event 3, EVENT_OBJ_GFX_LASS, 3, 2, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 2, Route118_EventScript_1F4000, 0
	object_event 4, EVENT_OBJ_GFX_BERRY_TREE, 0, 7, 5, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, Route118_EventScript_1F4090, 0
	object_event 5, EVENT_OBJ_GFX_BERRY_TREE, 0, 8, 6, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, Route118_EventScript_1F3FE9, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 1, 1, 15, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, Route118_EventScript_290ED3, FLAG_ITEM_ROUTE_118_HYPER_POTION

Route118_MapWarps::
	warp_def 7, 33, 3, 1, MAP_ROUTE29_GATE
	warp_def 8, 33, 3, 3, MAP_ROUTE29_GATE

Route118_MapBGEvents::
	bg_event 9, 27, 0, BG_EVENT_PLAYER_FACING_ANY, Route118_EventScript_1F3E7C
	bg_hidden_item_event 24, 40, 3, ITEM_IRON, FLAG_HIDDEN_ITEM_ROUTE_118_IRON
	bg_hidden_item_event 25, 40, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE

Route118_MapEvents::
	map_events Route118_EventObjects, Route118_MapWarps, 0x0, Route118_MapBGEvents
