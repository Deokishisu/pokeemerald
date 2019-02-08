PalletTown_EventObjects::
	object_event 1, EVENT_OBJ_GFX_TEACHER, 0, 3, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_FAT_MAN, PAL_NPC_GREEN, 12, 14, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, FALSE, 0, NULL, 0

PalletTown_MapWarps::
	warp_def 5, 5, 3, 0, MAP_PALLET_TOWN_REDS_HOUSE_1F
	warp_def 13, 5, 3, 0, MAP_PALLET_TOWN_BLUES_HOUSE
	warp_def 12, 11, 3, 0, MAP_PALLET_TOWN_PROF_OAKS_LAB

PalletTown_MapBGEvents::
	bg_event 7, 9, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 3, 5, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 13, 13, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 11, 5, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

PalletTown_MapEvents::
	map_events PalletTown_EventObjects, PalletTown_MapWarps, 0x0, PalletTown_MapBGEvents
