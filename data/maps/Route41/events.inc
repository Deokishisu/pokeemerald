Route41_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SWIMMER_M, 0, 32, 6, 1, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, Route113_EventScript_1F21C0, 0
	object_event 2, EVENT_OBJ_GFX_SWIMMER_M, 0, 46, 8, 1, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, Route113_EventScript_1F21D7, 0
	object_event 3, EVENT_OBJ_GFX_SWIMMER_M, 0, 20, 26, 1, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE, 0, 0, 1, 3, Route113_EventScript_1F21EE, 0
	object_event 4, EVENT_OBJ_GFX_SWIMMER_M, 0, 32, 30, 1, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 1, 3, Route113_EventScript_1F2250, 0
	object_event 5, EVENT_OBJ_GFX_SWIMMER_M, 0, 19, 46, 1, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE, 0, 0, 1, 3, Route113_EventScript_1F22B2, 0
	object_event 6, EVENT_OBJ_GFX_SWIMMER_F, 0, 17, 4, 1, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, Route113_EventScript_1F22C9, 0
	object_event 7, EVENT_OBJ_GFX_SWIMMER_F, 0, 23, 19, 1, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 3, Route113_EventScript_1F22E4, 0
	object_event 8, EVENT_OBJ_GFX_SWIMMER_F, 0, 27, 34, 1, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 3, Route113_EventScript_1F2344, 0
	object_event 9, EVENT_OBJ_GFX_SWIMMER_F, 0, 44, 28, 1, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, Route113_EventScript_1F232D, 0
	object_event 10, EVENT_OBJ_GFX_SWIMMER_F, 0, 9, 50, 1, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, Route113_EventScript_1F22FF, 0

Route41_MapWarps:
	warp_def 12, 17, 0, 0, MAP_WHIRL_ISLANDS_1F_NW
	warp_def 36, 19, 0, 0, MAP_WHIRL_ISLANDS_1F_NE
	warp_def 12, 37, 0, 0, MAP_WHIRL_ISLANDS_1F_SW
	warp_def 36, 45, 0, 0, MAP_WHIRL_ISLANDS_1F_SE

Route41_MapBGEvents:
	bg_hidden_item_event 9, 35, 3, ITEM_MAX_ETHER, FLAG_HIDDEN_ITEM_ROUTE_113_ETHER

Route41_MapEvents::
	map_events Route41_EventObjects, Route41_MapWarps, 0x0, Route41_MapBGEvents

