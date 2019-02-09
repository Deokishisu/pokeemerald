GoldenrodCity_DepartmentStore_2F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 13, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_21FB2D, 0
	object_event 2, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 13, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_21FB36, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, 0, 9, 6, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_21FB3F, 0
	object_event 4, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 6, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_21FB7A, 0
	object_event 5, EVENT_OBJ_GFX_GENTLEMAN, 0, 2, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, LilycoveCity_DepartmentStore_2F_EventScript_21FB48, 0

GoldenrodCity_DepartmentStore_2F_MapWarps:
	warp_def 15, 0, 0, 2, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_1F
	warp_def 12, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_3F
	warp_def 2, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ELEVATOR

GoldenrodCity_DepartmentStore_2F_MapEvents::
	map_events GoldenrodCity_DepartmentStore_2F_EventObjects, GoldenrodCity_DepartmentStore_2F_MapWarps, 0x0, 0x0

