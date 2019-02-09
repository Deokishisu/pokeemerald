IcePath_B3F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 5, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 6, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

IcePath_B3F_MapWarps:
	warp_def 3, 5, 3, 1, MAP_ICE_PATH_B2F_MAHOGANY
	warp_def 15, 5, 3, 1, MAP_ICE_PATH_B2F_BLACKTHORN

IcePath_B3F_MapEvents::
	map_events IcePath_B3F_EventObjects, IcePath_B3F_MapWarps, 0x0, 0x0

