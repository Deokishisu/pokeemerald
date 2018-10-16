LittlerootTown_BrendansHouse_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MOM, 1, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, LittlerootTown_BrendansHouse_1F_EventScript_2929C5, 758
	object_event 2, EVENT_OBJ_GFX_BIG_ONIX_DOLL, 0, 1, 3, 3, MOVEMENT_TYPE_NONE, 3, 0, 0, 0, LittlerootTown_BrendansHouse_1F_EventScript_292ACD, 0
	object_event 3, EVENT_OBJ_GFX_FAMICOM, 0, 4, 5, 3, MOVEMENT_TYPE_NONE, 0, 0, 0, 0, LittlerootTown_BrendansHouse_1F_EventScript_292ABA, 0
	object_event 4, EVENT_OBJ_GFX_ZWOMAN_4, 0, 2, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, LittlerootTown_BrendansHouse_1F_EventScript_1F89F3, 784
	object_event 5, EVENT_OBJ_GFX_CHUCK, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 0, 0, 0x0, 734
	object_event 6, EVENT_OBJ_GFX_ZNINJA_BOY, 0, 1, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, 0, 0, LittlerootTown_BrendansHouse_1F_EventScript_1F8A3D, 735
	object_event 7, EVENT_OBJ_GFX_ZRIVAL_BRENDAN_NORMAL, 0, 8, 8, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, 0x0, 745

LittlerootTown_BrendansHouse_1F_MapWarps::
	warp_def 7, 7, 0, 1, MAP_NEW_BARK_TOWN
	warp_def 6, 7, 0, 1, MAP_NEW_BARK_TOWN
	warp_def 9, 0, 0, 0, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F

LittlerootTown_BrendansHouse_1F_MapCoordEvents::
	coord_event 6, 7, 0, VAR_0x4092, 4, LittlerootTown_BrendansHouse_1F_EventScript_1F78A3
	coord_event 8, 1, 0, VAR_0x408D, 2, LittlerootTown_BrendansHouse_1F_EventScript_1F78BE
	coord_event 9, 2, 0, VAR_0x408D, 2, LittlerootTown_BrendansHouse_1F_EventScript_1F78CA
	coord_event 6, 0, 0, VAR_0x408D, 2, LittlerootTown_BrendansHouse_1F_EventScript_1F78D6

LittlerootTown_BrendansHouse_1F_MapEvents::
	map_events LittlerootTown_BrendansHouse_1F_EventObjects, LittlerootTown_BrendansHouse_1F_MapWarps, LittlerootTown_BrendansHouse_1F_MapCoordEvents, 0x0
