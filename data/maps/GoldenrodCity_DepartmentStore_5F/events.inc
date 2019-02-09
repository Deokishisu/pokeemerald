GoldenrodCity_DepartmentStore_5F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 8, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LilycoveCity_DepartmentStore_5F_EventScript_2200BC, 0
	object_event 2, EVENT_OBJ_GFX_LASS, 0, 3, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStore_5F_EventScript_22006C, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 6, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, LilycoveCity_DepartmentStore_5F_EventScript_21FFA6, 0
	object_event 4, EVENT_OBJ_GFX_POKEFAN_M, 0, 13, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, 0, 0, LilycoveCity_DepartmentStore_5F_EventScript_21FFDC, 0
	object_event 5, EVENT_OBJ_GFX_TWIN, 0, 9, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_DepartmentStore_5F_EventScript_22000A, 0
	object_event 6, EVENT_OBJ_GFX_RECEPTIONIST, 0, 7, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LilycoveCity_DepartmentStore_5F_EventScript_22003A, 0

GoldenrodCity_DepartmentStore_5F_MapWarps:
	warp_def 12, 0, 0, 1, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_4F
	warp_def 2, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 15, 0, 0, 2, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_6F

GoldenrodCity_DepartmentStore_5F_MapEvents::
	map_events GoldenrodCity_DepartmentStore_5F_EventObjects, GoldenrodCity_DepartmentStore_5F_MapWarps, 0x0, 0x0

