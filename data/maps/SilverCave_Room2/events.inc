SilverCave_Room2_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 24, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 22, 24, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 4, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

SilverCave_Room2_MapWarps::
	warp_def 17, 31, 3, 1, MAP_SILVER_CAVE_ROOM1
	warp_def 11, 5, 4, 0, MAP_SILVER_CAVE_ROOM3
	warp_def 13, 21, 3, 0, MAP_SILVER_CAVE_ITEM_ROOMS
	warp_def 23, 3, 3, 1, MAP_SILVER_CAVE_ITEM_ROOMS

SilverCave_Room2_MapBGEvents::
	bg_hidden_item_event 14, 31, 3, ITEM_MAX_POTION, FLAG_TEMP_1

SilverCave_Room2_MapEvents::
	map_events SilverCave_Room2_EventObjects, SilverCave_Room2_MapWarps, 0x0, SilverCave_Room2_MapBGEvents
