IcePath_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 31, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 32, 23, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 35, 9, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

IcePath_1F_MapWarps:
	warp_def 4, 19, 3, 0, MAP_ROUTE44
	warp_def 36, 27, 3, 6, MAP_BLACKTHORN_CITY
	warp_def 37, 5, 3, 0, MAP_ICE_PATH_B1F
	warp_def 37, 13, 3, 6, MAP_ICE_PATH_B1F

IcePath_1F_MapEvents::
	map_events IcePath_1F_EventObjects, IcePath_1F_MapWarps, 0x0, 0x0

