EcruteakCity_TinTowerGate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SAGE, 0, 4, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LavaridgeTown_HerbShop_EventScript_1FE4D7, 0
	object_event 2, EVENT_OBJ_GFX_SAGE, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LavaridgeTown_HerbShop_EventScript_1FE505, 0
	object_event 3, EVENT_OBJ_GFX_SAGE, 0, 6, 9, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LavaridgeTown_HerbShop_EventScript_1FE505, 0
	object_event 4, EVENT_OBJ_GFX_OLD_MAN, 0, 3, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LavaridgeTown_HerbShop_EventScript_1FE4FC, 0

EcruteakCity_TinTowerGate_MapWarps::
	warp_def 4, 17, 0, 2, MAP_ECRUTEAK_CITY
	warp_def 5, 17, 0, 2, MAP_ECRUTEAK_CITY
	warp_def 5, 3, 0, 3, MAP_ECRUTEAK_CITY_TIN_TOWER_GATE
	warp_def 19, 15, 0, 2, MAP_ECRUTEAK_CITY_TIN_TOWER_GATE
	warp_def 19, 3, 0, 2, MAP_ECRUTEAK_CITY_WISE_TRIOS_ROOM

EcruteakCity_TinTowerGate_MapCoordEvents::
	coord_event 4, 7, 3, VAR_TEMP_0, 0, NULL
	coord_event 5, 7, 3, VAR_TEMP_0, 0, NULL

EcruteakCity_TinTowerGate_MapEvents::
	map_events EcruteakCity_TinTowerGate_EventObjects, EcruteakCity_TinTowerGate_MapWarps, EcruteakCity_TinTowerGate_MapCoordEvents, 0x0
