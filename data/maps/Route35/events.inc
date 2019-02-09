Route35_EventObjects:
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, 0, 4, 19, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, Route107_EventScript_1EE595, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 0, 8, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, Route107_EventScript_1EE5AC, 0
	object_event 3, EVENT_OBJ_GFX_LASS, 0, 7, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, Route107_EventScript_1EE60E, 0
	object_event 4, EVENT_OBJ_GFX_LASS, 0, 10, 26, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 1, Route107_EventScript_1EE625, 0
	object_event 5, EVENT_OBJ_GFX_YOUNGSTER, 0, 14, 28, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 1, 0, Route107_EventScript_1EE63C, 0
	object_event 6, EVENT_OBJ_GFX_FAT_MAN, 0, 2, 10, 3, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE, 1, 1, 1, 2, Route107_EventScript_1EE657, 0
	object_event 7, EVENT_OBJ_GFX_BUG_CATCHER, 0, 16, 7, 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN, 1, 1, 1, 3, Route107_EventScript_1EE672, 0
	object_event 8, EVENT_OBJ_GFX_SUPER_NERD, 0, 5, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, Route107_EventScript_1EE657, 0
	object_event 9, EVENT_OBJ_GFX_OFFICER, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route107_EventScript_1EE657, 0
	object_event 10, EVENT_OBJ_GFX_BERRY_TREE, 0, 2, 25, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route107_EventScript_1EE657, 0
	object_event 11, EVENT_OBJ_GFX_ITEM_BALL, 0, 13, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route107_EventScript_1EE657, 0

Route35_MapWarps:
	warp_def 9, 33, 3, 2, MAP_ROUTE35_GATE
	warp_def 10, 33, 3, 3, MAP_ROUTE35_GATE
	warp_def 3, 5, 3, 0, MAP_ROUTE35_NATIONAL_PARK_GATE

Route35_MapEvents::
	map_events Route35_EventObjects, Route35_MapWarps, 0x0, 0x0

