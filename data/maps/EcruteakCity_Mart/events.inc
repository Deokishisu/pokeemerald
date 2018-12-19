EcruteakCity_Mart_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, MauvilleCity_Mart_EventScript_2110E6, 0
	object_event 2, EVENT_OBJ_GFX_SUPER_NERD, PAL_NPC_GREEN, 5, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, MauvilleCity_Mart_EventScript_21111C, 0
	object_event 3, EVENT_OBJ_GFX_OLD_WOMAN, 0, 6, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, MauvilleCity_Mart_EventScript_211125, 0

EcruteakCity_Mart_MapWarps::
	warp_def 2, 7, 0, 8, MAP_ECRUTEAK_CITY
	warp_def 3, 7, 0, 8, MAP_ECRUTEAK_CITY

EcruteakCity_Mart_MapEvents::
	map_events EcruteakCity_Mart_EventObjects, EcruteakCity_Mart_MapWarps, 0x0, 0x0
