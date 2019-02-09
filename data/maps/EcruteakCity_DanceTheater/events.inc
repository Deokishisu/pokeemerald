EcruteakCity_DanceTheater_EventObjects:
	object_event 1, EVENT_OBJ_GFX_KIMONO_GIRL, 0, 0, 2, 3, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE, 0, 0, 1, 0, RustboroCity_DevonCorp_3F_EventScript_21256C, 0
	object_event 2, EVENT_OBJ_GFX_KIMONO_GIRL, 0, 2, 1, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 0, RustboroCity_DevonCorp_3F_EventScript_21256C, 0
	object_event 3, EVENT_OBJ_GFX_KIMONO_GIRL, 0, 6, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 0, RustboroCity_DevonCorp_3F_EventScript_21256C, 0
	object_event 4, EVENT_OBJ_GFX_KIMONO_GIRL, 0, 9, 1, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, RustboroCity_DevonCorp_3F_EventScript_21256C, 0
	object_event 5, EVENT_OBJ_GFX_KIMONO_GIRL, 0, 11, 2, 3, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 1, 0, RustboroCity_DevonCorp_3F_EventScript_21256C, 0
	object_event 6, EVENT_OBJ_GFX_GENTLEMAN, 0, 7, 10, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_DevonCorp_3F_EventScript_21256C, 0
	object_event 7, EVENT_OBJ_GFX_RHYDON, 0, 6, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_DevonCorp_3F_EventScript_2125E1, FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
	object_event 8, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 10, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 0, 0, RustboroCity_DevonCorp_3F_EventScript_21256C, 0
	object_event 9, EVENT_OBJ_GFX_OLD_WOMAN, 0, 3, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, RustboroCity_DevonCorp_3F_EventScript_21256C, 0

EcruteakCity_DanceTheater_MapWarps:
	warp_def 5, 13, 0, 7, MAP_ECRUTEAK_CITY
	warp_def 6, 13, 0, 7, MAP_ECRUTEAK_CITY

EcruteakCity_DanceTheater_MapBGEvents:
	bg_event 5, 6, 3, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_DevonCorp_3F_EventScript_212600
	bg_event 6, 6, 3, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_DevonCorp_3F_EventScript_212600

EcruteakCity_DanceTheater_MapEvents::
	map_events EcruteakCity_DanceTheater_EventObjects, EcruteakCity_DanceTheater_MapWarps, 0x0, EcruteakCity_DanceTheater_MapBGEvents

