MauvilleCity_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ZBOY_3, 0, 29, 16, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, 0, 0, MauvilleCity_EventScript_1DF3B3, 0
	object_event 2, EVENT_OBJ_GFX_ZRICH_BOY, 0, 24, 10, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, MauvilleCity_EventScript_1DF3CE, 0
	object_event 3, EVENT_OBJ_GFX_SUPER_NERD, 0, 14, 11, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, MauvilleCity_EventScript_1DF3BC, 0
	object_event 4, EVENT_OBJ_GFX_ZWOMAN_4, 0, 18, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MauvilleCity_EventScript_1DF3C5, 0
	object_event 5, EVENT_OBJ_GFX_ZSCHOOL_KID_M, 0, 17, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MauvilleCity_EventScript_1DF3FB, 0
	object_event 6, EVENT_OBJ_GFX_JANINE, 0, 10, 11, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, MauvilleCity_EventScript_1DF452, FLAG_HIDE_MAUVILLE_CITY_WALLY
	object_event 7, EVENT_OBJ_GFX_POKEFAN_M, 0, 9, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, MauvilleCity_EventScript_1DF41D, FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
	object_event 8, EVENT_OBJ_GFX_WHITNEY, 0, 29, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MauvilleCity_EventScript_1DF73A, FLAG_HIDE_MAUVILLE_CITY_WATTSON
	object_event 9, EVENT_OBJ_GFX_ITEM_BALL, 0, 28, 19, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 0, 0, MauvilleCity_EventScript_2910CE, FLAG_ITEM_MAUVILLE_CITY_X_SPEED
	object_event 10, EVENT_OBJ_GFX_FAT_MAN, 0, 13, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, MauvilleCity_EventScript_2C7F7E, 0
	object_event 11, EVENT_OBJ_GFX_PHARMACIST, 0, 12, 14, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, 0x0, 765

MauvilleCity_MapWarps::
	warp_def 6, 27, 0, 0, MAP_MAUVILLE_CITY_GYM
	warp_def 23, 27, 0, 0, MAP_MAUVILLE_CITY_POKEMON_CENTER_1F
	warp_def 18, 11, 0, 0, MAP_MAUVILLE_CITY_BIKE_SHOP
	warp_def 29, 21, 0, 0, MAP_MAUVILLE_CITY_MART
	warp_def 23, 21, 0, 0, MAP_MAUVILLE_CITY_HOUSE1
	warp_def 5, 21, 0, 0, MAP_MAUVILLE_CITY_GAME_CORNER
	warp_def 13, 27, 0, 0, MAP_MAUVILLE_CITY_HOUSE2
	warp_def 0, 18, 3, 0, MAP_ROUTE38_GATE
	warp_def 0, 19, 3, 1, MAP_ROUTE38_GATE
	warp_def 35, 26, 3, 2, MAP_ROUTE42_GATE
	warp_def 35, 27, 3, 3, MAP_ROUTE42_GATE

MauvilleCity_MapBGEvents::
	bg_event 24, 27, 0, BG_EVENT_PLAYER_FACING_NORTH, MauvilleCity_EventScript_271E73
	bg_event 11, 6, 3, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_1DF3E0
	bg_event 30, 21, 0, BG_EVENT_PLAYER_FACING_NORTH, MauvilleCity_EventScript_271E6A
	bg_event 30, 19, 0, BG_EVENT_PLAYER_FACING_NORTH, MauvilleCity_EventScript_271E6A
	bg_event 24, 25, 0, BG_EVENT_PLAYER_FACING_NORTH, MauvilleCity_EventScript_271E73
	bg_event 19, 7, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_1DF3D7
	bg_event 33, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_1DF3E9
	bg_event 11, 15, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_1DF3F2

MauvilleCity_MapEvents::
	map_events MauvilleCity_EventObjects, MauvilleCity_MapWarps, 0x0, MauvilleCity_MapBGEvents
