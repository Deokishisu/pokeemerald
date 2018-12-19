Route29_EventObjects::
	object_event 1, EVENT_OBJ_GFX_COOLTRAINER_M, PAL_NPC_RED, 50, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route101_EventScript_1EBE04, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_GREEN, 27, 16, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, Route101_EventScript_1EBDFB, 0
	object_event 3, EVENT_OBJ_GFX_TEACHER, PAL_NPC_GREEN, 15, 11, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_BERRY_TREE, PAL_NPC_TREE, 12, 2, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, Route101_EventScript_272141, 0
	object_event 5, EVENT_OBJ_GFX_FAT_MAN, PAL_NPC_BLUE, 25, 3, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_COOLTRAINER_M, PAL_NPC_RED, 13, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_TEACHER, 0, 29, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 1, FALSE, 0, NULL, 0
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, PAL_NPC_RED, 48, 2, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, Route104_EventScript_290D26, FLAG_ITEM_ROUTE_104_POTION
	object_event 9, EVENT_OBJ_GFX_PAPER, 0, 49, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route101_EventScript_1EBE16, FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG

Route29_MapWarps::
	warp_def 27, 1, 3, 0, MAP_ROUTE29_GATE

Route29_MapCoordEvents::
	coord_event 10, 19, 3, VAR_0x4060, 1, Route101_EventScript_1EBCDE
	coord_event 11, 19, 3, VAR_0x4060, 1, Route101_EventScript_1EBCDE
	coord_event 10, 18, 3, VAR_0x4060, 2, Route101_EventScript_1EBD4E
	coord_event 11, 18, 3, VAR_0x4060, 2, Route101_EventScript_1EBD4E
	coord_event 6, 16, 3, VAR_0x4060, 2, Route101_EventScript_1EBD64
	coord_event 6, 15, 3, VAR_0x4060, 2, Route101_EventScript_1EBD64
	coord_event 6, 17, 3, VAR_0x4060, 2, Route101_EventScript_1EBD64
	coord_event 6, 18, 3, VAR_0x4060, 2, Route101_EventScript_1EBD64
	coord_event 7, 13, 3, VAR_0x4060, 2, Route101_EventScript_1EBD7A

Route29_MapBGEvents::
	bg_event 51, 7, 0, BG_EVENT_PLAYER_FACING_ANY, Route101_EventScript_1EBE0D

Route29_MapEvents::
	map_events Route29_EventObjects, Route29_MapWarps, Route29_MapCoordEvents, Route29_MapBGEvents
