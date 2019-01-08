DarkCave_Violet_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 6, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 16, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 27, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 7, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 36, 31, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 0, 36, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 7, EVENT_OBJ_GFX_ITEM_BALL, 0, 35, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, 0, 30, 28, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

DarkCave_Violet_MapWarps::
	warp_def 3, 15, 3, 0, MAP_ROUTE31
	warp_def 17, 1, 3, 1, MAP_DARK_CAVE_BLACKTHORN
	warp_def 35, 33, 3, 2, MAP_ROUTE46

DarkCave_Violet_MapBGEvents::
	bg_hidden_item_event 26, 3, 3, ITEM_ELIXIR, FLAG_TEMP_1

DarkCave_Violet_MapEvents::
	map_events DarkCave_Violet_EventObjects, DarkCave_Violet_MapWarps, 0x0, DarkCave_Violet_MapBGEvents
