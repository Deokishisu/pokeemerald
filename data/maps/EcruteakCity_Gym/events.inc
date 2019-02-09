EcruteakCity_Gym_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MORTY, 0, 5, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LavaridgeTown_Gym_1F_EventScript_1FE78C, 0
	object_event 2, EVENT_OBJ_GFX_SAGE, 0, 2, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, LavaridgeTown_Gym_1F_EventScript_1FE87F, 0
	object_event 3, EVENT_OBJ_GFX_SAGE, 0, 3, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 3, LavaridgeTown_Gym_1F_EventScript_1FE900, 0
	object_event 4, EVENT_OBJ_GFX_OLD_WOMAN, 0, 7, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 1, LavaridgeTown_Gym_1F_EventScript_1FE8AF, 0
	object_event 5, EVENT_OBJ_GFX_OLD_WOMAN, 0, 7, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 1, LavaridgeTown_Gym_1F_EventScript_1FE8E5, 0
	object_event 6, EVENT_OBJ_GFX_GYM_GUIDE, 0, 7, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LavaridgeTown_Gym_1F_EventScript_1FE96C, 0
	object_event 7, EVENT_OBJ_GFX_OLD_MAN, 0, 4, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LavaridgeTown_Gym_1F_EventScript_1FE8E5, 0

EcruteakCity_Gym_MapWarps:
	warp_def 4, 17, 3, 9, MAP_ECRUTEAK_CITY
	warp_def 5, 17, 3, 9, MAP_ECRUTEAK_CITY
	warp_def 4, 14, 3, 3, MAP_ECRUTEAK_CITY_GYM
	warp_def 2, 4, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 3, 4, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 4, 4, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 4, 5, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 6, 7, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 7, 4, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 2, 6, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 3, 6, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 4, 6, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 5, 6, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 7, 6, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 7, 7, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 4, 8, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 5, 8, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 6, 8, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 7, 8, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 2, 8, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 2, 9, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 2, 10, 0, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 2, 11, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 4, 10, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 5, 10, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 2, 12, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 3, 12, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 4, 12, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 5, 12, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 7, 10, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 7, 11, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 7, 12, 3, 2, MAP_ECRUTEAK_CITY_GYM
	warp_def 7, 13, 3, 2, MAP_ECRUTEAK_CITY_GYM

EcruteakCity_Gym_MapBGEvents:
	bg_event 3, 15, 0, BG_EVENT_PLAYER_FACING_ANY, LavaridgeTown_Gym_1F_EventScript_1FE98B
	bg_event 6, 15, 0, BG_EVENT_PLAYER_FACING_ANY, LavaridgeTown_Gym_1F_EventScript_1FE99B

EcruteakCity_Gym_MapEvents::
	map_events EcruteakCity_Gym_EventObjects, EcruteakCity_Gym_MapWarps, 0x0, EcruteakCity_Gym_MapBGEvents

