EcruteakCity_House1_EventObjects:
	object_event 1, EVENT_OBJ_GFX_OLD_MAN, 0, 2, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, MauvilleCity_House1_EventScript_20F976, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, 0, 5, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, MauvilleCity_House1_EventScript_20F976, 0

EcruteakCity_House1_MapWarps:
	warp_def 3, 7, 0, 6, MAP_ECRUTEAK_CITY
	warp_def 4, 7, 0, 6, MAP_ECRUTEAK_CITY

EcruteakCity_House1_MapEvents::
	map_events EcruteakCity_House1_EventObjects, EcruteakCity_House1_MapWarps, 0x0, 0x0

