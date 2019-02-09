OlivineCity_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 26, 27, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, 0, 0, RustboroCity_EventScript_1E088A, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 0, 20, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, RustboroCity_EventScript_1E085F, 0
	object_event 3, EVENT_OBJ_GFX_SAILOR, 0, 17, 21, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, RustboroCity_EventScript_1E08DA, 0
	object_event 4, EVENT_OBJ_GFX_RIVAL, 0, 10, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_EventScript_1E08D1, 0

OlivineCity_MapWarps:
	warp_def 13, 21, 0, 0, MAP_OLIVINE_CITY_POKEMON_CENTER_1F
	warp_def 10, 11, 0, 0, MAP_OLIVINE_CITY_GYM
	warp_def 25, 11, 0, 0, MAP_OLIVINE_CITY_HOUSE2
	warp_def 0, 0, 0, 0, MAP_OLIVINE_CITY
	warp_def 29, 11, 0, 0, MAP_OLIVINE_CITY_HOUSE3
	warp_def 13, 15, 0, 0, MAP_OLIVINE_CITY_HOUSE1
	warp_def 7, 21, 0, 0, MAP_OLIVINE_CITY_CAFE
	warp_def 19, 17, 0, 0, MAP_OLIVINE_CITY_MART
	warp_def 29, 27, 0, 0, MAP_LIGHTHOUSE_1F
	warp_def 19, 27, 0, 0, MAP_OLIVINE_CITY_PORT_PASSAGE
	warp_def 20, 27, 0, 1, MAP_OLIVINE_CITY_PORT_PASSAGE

OlivineCity_MapCoordEvents:
	coord_event 13, 12, 3, VAR_0x405A, 1, RustboroCity_EventScript_1E095A
	coord_event 13, 13, 3, VAR_0x405A, 1, RustboroCity_EventScript_1E0971

OlivineCity_MapBGEvents:
	bg_event 17, 11, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_EventScript_1E08F5
	bg_event 20, 24, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_EventScript_1E0910
	bg_event 7, 11, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_EventScript_271E6A
	bg_event 30, 28, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_EventScript_271E73
	bg_event 3, 23, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_EventScript_1E0907
	bg_event 14, 21, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_EventScript_271E6A
	bg_event 20, 17, 0, BG_EVENT_PLAYER_FACING_ANY, RustboroCity_EventScript_271E73

OlivineCity_MapEvents::
	map_events OlivineCity_EventObjects, OlivineCity_MapWarps, OlivineCity_MapCoordEvents, OlivineCity_MapBGEvents

