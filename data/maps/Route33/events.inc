Route33_EventObjects::
	object_event 1, EVENT_OBJ_GFX_POKEFAN_M, PAL_NPC_BROWN, 6, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, Route105_EventScript_1EE261, 0
	object_event 2, EVENT_OBJ_GFX_LASS, PAL_NPC_BLUE, 13, 16, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, Route105_EventScript_1EE278, 0
	object_event 3, EVENT_OBJ_GFX_BERRY_TREE, 0, 14, 16, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, Route105_EventScript_1EE28F, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 0, 0, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route105_EventScript_290D33, FLAG_ITEM_ROUTE_105_IRON

Route33_MapWarps::
	warp_def 11, 9, 3, 3, MAP_ROUTE32

Route33_MapBGEvents::
	bg_hidden_item_event -6, -6, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE
	bg_hidden_item_event -6, -6, 3, ITEM_BIG_PEARL, FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL
	bg_event 11, 11, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

Route33_MapEvents::
	map_events Route33_EventObjects, Route33_MapWarps, 0x0, Route33_MapBGEvents
