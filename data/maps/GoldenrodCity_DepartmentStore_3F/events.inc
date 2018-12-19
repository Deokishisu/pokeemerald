GoldenrodCity_DepartmentStore_3F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 6, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, LilycoveCity_DepartmentStore_3F_EventScript_21FCB6, 0
	object_event 2, EVENT_OBJ_GFX_SUPER_NERD, PAL_NPC_RED, 12, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, LilycoveCity_DepartmentStore_3F_EventScript_21FCBF, 0
	object_event 3, EVENT_OBJ_GFX_GUITARIST, 0, 2, 5, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, LilycoveCity_DepartmentStore_3F_EventScript_21FCC8, 0

GoldenrodCity_DepartmentStore_3F_MapWarps::
	warp_def 12, 0, 0, 1, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_2F
	warp_def 15, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_4F
	warp_def 2, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ELEVATOR

GoldenrodCity_DepartmentStore_3F_MapEvents::
	map_events GoldenrodCity_DepartmentStore_3F_EventObjects, GoldenrodCity_DepartmentStore_3F_MapWarps, 0x0, 0x0
