SilverCave_ItemRooms_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 6, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 15, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

SilverCave_ItemRooms_MapWarps::
	warp_def 13, 3, 3, 2, MAP_SILVER_CAVE_ROOM2
	warp_def 7, 15, 3, 3, MAP_SILVER_CAVE_ROOM2

SilverCave_ItemRooms_MapEvents::
	map_events SilverCave_ItemRooms_EventObjects, SilverCave_ItemRooms_MapWarps, 0x0, 0x0
