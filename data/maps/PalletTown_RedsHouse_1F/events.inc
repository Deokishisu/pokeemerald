PalletTown_RedsHouse_1F_EventObjects::
	object_event 1, EVENT_OBJ_GFX_REDS_MOM, 0, 5, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, FALSE, 0, NULL, 0

PalletTown_RedsHouse_1F_MapWarps::
	warp_def 2, 7, 3, 0, MAP_PALLET_TOWN
	warp_def 3, 7, 3, 0, MAP_PALLET_TOWN
	warp_def 7, 0, 3, 0, MAP_PALLET_TOWN_REDS_HOUSE_2F

PalletTown_RedsHouse_1F_MapBGEvents::
	bg_event 0, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 1, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 2, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

PalletTown_RedsHouse_1F_MapEvents::
	map_events PalletTown_RedsHouse_1F_EventObjects, PalletTown_RedsHouse_1F_MapWarps, 0x0, PalletTown_RedsHouse_1F_MapBGEvents
