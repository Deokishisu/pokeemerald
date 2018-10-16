Route101_EventObjects::
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, 3, 27, 16, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, Route101_EventScript_1EBDFB, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_M, 1, 13, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_PAPER, 0, 49, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route101_EventScript_1EBE16, 700
	object_event 4, EVENT_OBJ_GFX_FAT_MAN, 2, 25, 3, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_BERRY_TREE, 7, 12, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route101_EventScript_272141, 0
	object_event 6, EVENT_OBJ_GFX_COOLTRAINER_M, 1, 50, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, Route101_EventScript_1EBE04, 0
	object_event 7, EVENT_OBJ_GFX_TEACHER, 3, 15, 11, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 0, 1, FALSE, 0, NULL, 0

Route101_MapWarps::
	warp_def 27, 1, 3, 0, MAP_ROUTE29_GATE

Route101_MapCoordEvents::
	coord_event 10, 19, 3, VAR_0x4060, 1, Route101_EventScript_1EBCDE
	coord_event 11, 19, 3, VAR_0x4060, 1, Route101_EventScript_1EBCDE
	coord_event 10, 18, 3, VAR_0x4060, 2, Route101_EventScript_1EBD4E
	coord_event 11, 18, 3, VAR_0x4060, 2, Route101_EventScript_1EBD4E
	coord_event 6, 16, 3, VAR_0x4060, 2, Route101_EventScript_1EBD64
	coord_event 6, 15, 3, VAR_0x4060, 2, Route101_EventScript_1EBD64
	coord_event 6, 17, 3, VAR_0x4060, 2, Route101_EventScript_1EBD64
	coord_event 6, 18, 3, VAR_0x4060, 2, Route101_EventScript_1EBD64
	coord_event 7, 13, 3, VAR_0x4060, 2, Route101_EventScript_1EBD7A

Route101_MapBGEvents::
	bg_event 51, 7, 0, BG_EVENT_PLAYER_FACING_ANY, Route101_EventScript_1EBE0D

Route101_MapEvents::
	map_events Route101_EventObjects, Route101_MapWarps, Route101_MapCoordEvents, Route101_MapBGEvents
