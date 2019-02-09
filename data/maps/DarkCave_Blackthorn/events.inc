DarkCave_Blackthorn_EventObjects:
	object_event 1, EVENT_OBJ_GFX_PHARMACIST, 0, 7, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 21, 24, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 7, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0

DarkCave_Blackthorn_MapWarps:
	warp_def 23, 3, 3, 0, MAP_ROUTE45
	warp_def 3, 25, 3, 1, MAP_DARK_CAVE_VIOLET

DarkCave_Blackthorn_MapEvents::
	map_events DarkCave_Blackthorn_EventObjects, DarkCave_Blackthorn_MapWarps, 0x0, 0x0

