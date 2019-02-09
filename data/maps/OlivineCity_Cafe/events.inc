OlivineCity_Cafe_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 4, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, RustboroCity_CuttersHouse_EventScript_215BD4, 0
	object_event 2, EVENT_OBJ_GFX_FISHING_GURU, 0, 7, 3, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, RustboroCity_CuttersHouse_EventScript_215C0A, 0
	object_event 3, EVENT_OBJ_GFX_SAILOR, 0, 6, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_CuttersHouse_EventScript_215C0A, 0

OlivineCity_Cafe_MapWarps:
	warp_def 2, 7, 0, 6, MAP_OLIVINE_CITY
	warp_def 3, 7, 0, 6, MAP_OLIVINE_CITY

OlivineCity_Cafe_MapEvents::
	map_events OlivineCity_Cafe_EventObjects, OlivineCity_Cafe_MapWarps, 0x0, 0x0

