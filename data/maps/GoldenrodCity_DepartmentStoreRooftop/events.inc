GoldenrodCity_DepartmentStoreRooftop_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_220268, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_F, 0, 10, 3, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_22028C, 0
	object_event 3, EVENT_OBJ_GFX_FAT_MAN, 0, 2, 1, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_22022F, FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	object_event 4, EVENT_OBJ_GFX_TWIN, 0, 3, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_2C8186, 0
	object_event 5, EVENT_OBJ_GFX_SUPER_NERD, 0, 14, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_22028C, 0
	object_event 6, EVENT_OBJ_GFX_POKEFAN_M, 0, 7, 0, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_22028C, 0
	object_event 7, EVENT_OBJ_GFX_TEACHER, 0, 5, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_22028C, 0
	object_event 8, EVENT_OBJ_GFX_BUG_CATCHER, 0, 1, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 0, 0, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_22028C, 0

GoldenrodCity_DepartmentStoreRooftop_MapWarps:
	warp_def 13, 1, 0, 1, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_6F

GoldenrodCity_DepartmentStoreRooftop_MapBGEvents:
	bg_event 15, 3, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_DepartmentStoreRooftop_EventScript_220295
	bg_event 15, 5, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_DepartmentStoreRooftop_EventScript_220295
	bg_event 15, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_DepartmentStoreRooftop_EventScript_220295
	bg_event 3, 0, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_DepartmentStoreRooftop_EventScript_220295

GoldenrodCity_DepartmentStoreRooftop_MapEvents::
	map_events GoldenrodCity_DepartmentStoreRooftop_EventObjects, GoldenrodCity_DepartmentStoreRooftop_MapWarps, 0x0, GoldenrodCity_DepartmentStoreRooftop_MapBGEvents

