GoldenrodCity_DepartmentStore_B1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 10, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_DevonCorp_2F_EventScript_21186F, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 14, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_DevonCorp_2F_EventScript_211886, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 6, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_DevonCorp_2F_EventScript_2118B0, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 15, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_DevonCorp_2F_EventScript_2118DA, 0
	object_event 5, EVENT_OBJ_GFX_BLACK_BELT, 0, 9, 10, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, RustboroCity_DevonCorp_2F_EventScript_2118F1, 0
	object_event 6, EVENT_OBJ_GFX_BLACK_BELT, 0, 4, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, RustboroCity_DevonCorp_2F_EventScript_211BCF, 0
	object_event 7, EVENT_OBJ_GFX_BLACK_BELT, 0, 6, 13, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, RustboroCity_DevonCorp_2F_EventScript_211BCF, 0
	object_event 8, EVENT_OBJ_GFX_CAL, 0, 7, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_DevonCorp_2F_EventScript_211BCF, 0

GoldenrodCity_DepartmentStore_B1F_MapWarps:
	warp_def 17, 2, 0, 2, MAP_GOLDENROD_CITY_UNDERGROUND_WAREHOUSE
	warp_def 9, 4, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 10, 4, 0, 1, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ELEVATOR

GoldenrodCity_DepartmentStore_B1F_MapEvents::
	map_events GoldenrodCity_DepartmentStore_B1F_EventObjects, GoldenrodCity_DepartmentStore_B1F_MapWarps, 0x0, 0x0

