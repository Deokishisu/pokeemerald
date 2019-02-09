GoldenrodCity_DepartmentStore_4F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 13, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LilycoveCity_DepartmentStore_4F_EventScript_21FDEB, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 11, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, LilycoveCity_DepartmentStore_4F_EventScript_21FDF4, 0
	object_event 3, EVENT_OBJ_GFX_BUG_CATCHER, 0, 7, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, LilycoveCity_DepartmentStore_4F_EventScript_21FDFD, 0
	object_event 4, EVENT_OBJ_GFX_GAMEBOY_KID, 0, 5, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_DepartmentStore_4F_EventScript_21FE06, 0

GoldenrodCity_DepartmentStore_4F_MapWarps:
	warp_def 15, 0, 0, 1, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_3F
	warp_def 12, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_5F
	warp_def 2, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ELEVATOR

GoldenrodCity_DepartmentStore_4F_MapEvents::
	map_events GoldenrodCity_DepartmentStore_4F_EventObjects, GoldenrodCity_DepartmentStore_4F_MapWarps, 0x0, 0x0

