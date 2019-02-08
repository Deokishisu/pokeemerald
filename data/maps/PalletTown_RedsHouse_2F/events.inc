PalletTown_RedsHouse_2F_MapWarps::
	warp_def 7, 0, 3, 2, MAP_PALLET_TOWN_REDS_HOUSE_1F

PalletTown_RedsHouse_2F_MapBGEvents::
	bg_event 0, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 3, 5, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

PalletTown_RedsHouse_2F_MapEvents::
	map_events 0x0, PalletTown_RedsHouse_2F_MapWarps, 0x0, PalletTown_RedsHouse_2F_MapBGEvents
