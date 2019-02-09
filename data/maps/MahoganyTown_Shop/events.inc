MahoganyTown_Shop_EventObjects:
	object_event 1, EVENT_OBJ_GFX_PHARMACIST, 0, 4, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, VerdanturfTown_WandasHouse_EventScript_2028BF, 0
	object_event 2, EVENT_OBJ_GFX_BLACK_BELT, 0, 1, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, VerdanturfTown_WandasHouse_EventScript_202913, 0
	object_event 3, EVENT_OBJ_GFX_LANCE, 0, 4, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, VerdanturfTown_WandasHouse_EventScript_2028E1, 0
	object_event 4, EVENT_OBJ_GFX_DRAGONITE, 0, 3, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, VerdanturfTown_WandasHouse_EventScript_20294E, 0
	object_event 5, EVENT_OBJ_GFX_OLD_WOMAN, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, VerdanturfTown_WandasHouse_EventScript_20291C, 0

MahoganyTown_Shop_MapWarps:
	warp_def 3, 7, 0, 0, MAP_MAHOGANY_TOWN
	warp_def 4, 7, 0, 0, MAP_MAHOGANY_TOWN
	warp_def 7, 3, 0, 0, MAP_TEAM_ROCKET_BASE_B1F

MahoganyTown_Shop_MapEvents::
	map_events MahoganyTown_Shop_EventObjects, MahoganyTown_Shop_MapWarps, 0x0, 0x0

