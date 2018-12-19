GoldenrodCity_DepartmentStore_6F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_LASS, PAL_NPC_GREEN, 10, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, RustboroCity_DevonCorp_1F_EventScript_211261, 0
	object_event 2, EVENT_OBJ_GFX_SUPER_NERD, PAL_NPC_RED, 8, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_DevonCorp_1F_EventScript_211293, 0

GoldenrodCity_DepartmentStore_6F_MapWarps::
	warp_def 2, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 13, 0, 0, 0, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_ROOFTOP
	warp_def 15, 0, 0, 2, MAP_GOLDENROD_CITY_DEPARTMENT_STORE_5F

GoldenrodCity_DepartmentStore_6F_MapBGEvents::
	bg_event 14, 0, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_DevonCorp_1F_EventScript_211312
	bg_event 3, 0, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_DevonCorp_1F_EventScript_211309
	bg_event 8, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, RustboroCity_DevonCorp_1F_EventScript_211312
	bg_event 9, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, RustboroCity_DevonCorp_1F_EventScript_211309
	bg_event 10, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, RustboroCity_DevonCorp_1F_EventScript_211312
	bg_event 11, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, RustboroCity_DevonCorp_1F_EventScript_211309

GoldenrodCity_DepartmentStore_6F_MapEvents::
	map_events GoldenrodCity_DepartmentStore_6F_EventObjects, GoldenrodCity_DepartmentStore_6F_MapWarps, 0x0, GoldenrodCity_DepartmentStore_6F_MapBGEvents
