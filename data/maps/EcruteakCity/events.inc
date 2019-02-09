EcruteakCity_EventObjects:
	object_event 1, EVENT_OBJ_GFX_OLD_MAN, 0, 18, 15, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, MauvilleCity_EventScript_1DF3B3, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN, 0, 20, 21, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MauvilleCity_EventScript_1DF3CE, 0
	object_event 3, EVENT_OBJ_GFX_LASS, 0, 21, 29, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, 0, 0, MauvilleCity_EventScript_1DF3BC, 0
	object_event 4, EVENT_OBJ_GFX_LASS, 0, 3, 9, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, MauvilleCity_EventScript_1DF3C5, 0
	object_event 5, EVENT_OBJ_GFX_FAT_MAN, 0, 9, 22, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, MauvilleCity_EventScript_1DF3FB, 0
	object_event 6, EVENT_OBJ_GFX_YOUNGSTER, 0, 10, 14, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, MauvilleCity_EventScript_1DF452, FLAG_HIDE_MAUVILLE_CITY_WALLY
	object_event 7, EVENT_OBJ_GFX_OLD_MAN, 0, 3, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, MauvilleCity_EventScript_1DF41D, FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE

EcruteakCity_MapWarps:
	warp_def 35, 26, 3, 2, MAP_ROUTE42_GATE
	warp_def 35, 27, 3, 3, MAP_ROUTE42_GATE
	warp_def 18, 11, 0, 0, MAP_ECRUTEAK_CITY_TIN_TOWER_GATE
	warp_def 20, 2, 0, 0, MAP_ECRUTEAK_CITY_WISE_TRIOS_ROOM
	warp_def 20, 3, 0, 1, MAP_ECRUTEAK_CITY_WISE_TRIOS_ROOM
	warp_def 23, 27, 0, 0, MAP_ECRUTEAK_CITY_POKEMON_CENTER_1F
	warp_def 5, 21, 0, 0, MAP_ECRUTEAK_CITY_HOUSE1
	warp_def 23, 21, 0, 0, MAP_ECRUTEAK_CITY_DANCE_THEATER
	warp_def 29, 21, 0, 0, MAP_ECRUTEAK_CITY_MART
	warp_def 6, 27, 0, 0, MAP_ECRUTEAK_CITY_GYM
	warp_def 13, 27, 0, 0, MAP_ECRUTEAK_CITY_HOUSE2
	warp_def 37, 7, 0, 0, MAP_TIN_TOWER_1F
	warp_def 5, 5, 0, 0, MAP_BURNED_TOWER_1F
	warp_def 0, 18, 3, 0, MAP_ROUTE38_GATE
	warp_def 0, 19, 3, 1, MAP_ROUTE38_GATE

EcruteakCity_MapBGEvents:
	bg_event 15, 21, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_271E73
	bg_event 38, 10, 3, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_1DF3E0
	bg_event 8, 28, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_271E6A
	bg_event 21, 21, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_271E6A
	bg_event 2, 10, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_271E73
	bg_event 24, 27, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_1DF3D7
	bg_event 30, 21, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_1DF3E9
	bg_event 23, 14, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_1DF3F2

EcruteakCity_MapEvents::
	map_events EcruteakCity_EventObjects, EcruteakCity_MapWarps, 0x0, EcruteakCity_MapBGEvents

