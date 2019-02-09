NewBarkTown_ProfElmsHouse_EventObjects:
	object_event 1, EVENT_OBJ_GFX_MOM, 0, 8, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, LittlerootTown_MaysHouse_1F_EventScript_2929C5, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	object_event 2, EVENT_OBJ_GFX_SILVER_TROPHY, 0, 6, 5, 3, MOVEMENT_TYPE_WALK_IN_PLACE_UP, 0, 0, 0, 0, LittlerootTown_MaysHouse_1F_EventScript_292ABA, FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
	object_event 3, EVENT_OBJ_GFX_GOLD_TROPHY, 0, 9, 3, 3, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 3, 0, 0, 0, LittlerootTown_MaysHouse_1F_EventScript_292ACD, FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
	object_event 4, EVENT_OBJ_GFX_ZWOMAN_4, 0, 8, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, LittlerootTown_MaysHouse_1F_EventScript_1F89F3, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	object_event 5, EVENT_OBJ_GFX_CHUCK, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, 0x0, FLAG_HIDE_PLAYERS_HOUSE_DAD
	object_event 6, EVENT_OBJ_GFX_ZNINJA_BOY, 0, 9, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, 0, 0, LittlerootTown_MaysHouse_1F_EventScript_1F8A3D, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	object_event 7, EVENT_OBJ_GFX_ZRIVAL_MAY_NORMAL, 0, 5, 7, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_BRENDAN

NewBarkTown_ProfElmsHouse_MapWarps:
	warp_def 3, 7, 0, 0, MAP_NEW_BARK_TOWN
	warp_def 2, 7, 0, 0, MAP_NEW_BARK_TOWN
	warp_def 2, 2, 0, 0, MAP_NEW_BARK_TOWN_HOUSE

NewBarkTown_ProfElmsHouse_MapCoordEvents:
	coord_event 0, 8, 0, VAR_0x4092, 4, LittlerootTown_MaysHouse_1F_EventScript_1F8A4C
	coord_event 1, 3, 0, VAR_0x408D, 2, LittlerootTown_MaysHouse_1F_EventScript_1F8A67
	coord_event 2, 4, 0, VAR_0x408D, 2, LittlerootTown_MaysHouse_1F_EventScript_1F8A73
	coord_event 3, 3, 0, VAR_0x408D, 2, LittlerootTown_MaysHouse_1F_EventScript_1F8A7F

NewBarkTown_ProfElmsHouse_MapEvents::
	map_events NewBarkTown_ProfElmsHouse_EventObjects, NewBarkTown_ProfElmsHouse_MapWarps, NewBarkTown_ProfElmsHouse_MapCoordEvents, 0x0

