GoldenrodCity_DepartmentStore_1F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_RECEPTIONIST, 0, 10, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_DepartmentStore_1F_EventScript_21F693, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_F, 0, 5, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_DepartmentStore_1F_EventScript_21F69C, 0
	object_event 3, EVENT_OBJ_GFX_BUG_CATCHER, 0, 5, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, LilycoveCity_DepartmentStore_1F_EventScript_21F82F, 0
	object_event 4, EVENT_OBJ_GFX_GENTLEMAN, 0, 11, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStore_1F_EventScript_21F838, 0

GoldenrodCity_DepartmentStore_1F_MapWarps:
	warp_def 7, 7, 0, 8, MAP_GOLDENROD_CITY
	warp_def 8, 7, 0, 8, MAP_GOLDENROD_CITY
	warp_def 15, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_2F
	warp_def 2, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ELEVATOR

GoldenrodCity_DepartmentStore_1F_MapBGEvents:
	bg_event 14, 0, 0, BG_EVENT_PLAYER_FACING_NORTH, LilycoveCity_DepartmentStore_1F_EventScript_21F85D
	bg_event 3, 0, 0, BG_EVENT_PLAYER_FACING_NORTH, LilycoveCity_DepartmentStore_1F_EventScript_21F85D

GoldenrodCity_DepartmentStore_1F_MapEvents::
	map_events GoldenrodCity_DepartmentStore_1F_EventObjects, GoldenrodCity_DepartmentStore_1F_MapWarps, 0x0, GoldenrodCity_DepartmentStore_1F_MapBGEvents

