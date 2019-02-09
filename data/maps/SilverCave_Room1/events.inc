SilverCave_Room1_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 4, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 15, 29, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 5, 30, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 7, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

SilverCave_Room1_MapWarps:
	warp_def 9, 33, 3, 1, MAP_SILVER_CAVE_EXTERIOR
	warp_def 15, 1, 3, 0, MAP_SILVER_CAVE_ROOM2

SilverCave_Room1_MapBGEvents:
	bg_hidden_item_event 16, 23, 3, ITEM_DIRE_HIT, FLAG_TEMP_1
	bg_hidden_item_event 17, 12, 3, ITEM_ULTRA_BALL, FLAG_TEMP_1

SilverCave_Room1_MapEvents::
	map_events SilverCave_Room1_EventObjects, SilverCave_Room1_MapWarps, 0x0, SilverCave_Room1_MapBGEvents

