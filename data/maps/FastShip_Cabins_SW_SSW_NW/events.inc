FastShip_Cabins_SW_SSW_NW_EventObjects::
	object_event 1, EVENT_OBJ_GFX_FAT_MAN, PAL_NPC_RED, 1, 16, 3, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE, 0, 0, TRUE, 2, NULL, 0
	object_event 2, EVENT_OBJ_GFX_BUG_CATCHER, PAL_NPC_BROWN, 6, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRUE, 2, NULL, 0
	object_event 3, EVENT_OBJ_GFX_BEAUTY, PAL_NPC_BLUE, 1, 28, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRUE, 3, NULL, 0
	object_event 4, EVENT_OBJ_GFX_GUITARIST, PAL_NPC_RED, 3, 30, 3, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE, 0, 0, TRUE, 2, NULL, 0

FastShip_Cabins_SW_SSW_NW_MapWarps::
	warp_def 2, 0, 3, 4, MAP_FAST_SHIP_1F
	warp_def 2, 20, 3, 5, MAP_FAST_SHIP_1F
	warp_def 3, 20, 3, 5, MAP_FAST_SHIP_1F
	warp_def 2, 33, 3, 6, MAP_FAST_SHIP_1F
	warp_def 3, 33, 3, 6, MAP_FAST_SHIP_1F

FastShip_Cabins_SW_SSW_NW_MapBGEvents::
	bg_event 7, 1, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 7, 2, 3, BG_EVENT_PLAYER_FACING_ANY, NULL
	bg_event 7, 7, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

FastShip_Cabins_SW_SSW_NW_MapEvents::
	map_events FastShip_Cabins_SW_SSW_NW_EventObjects, FastShip_Cabins_SW_SSW_NW_MapWarps, 0x0, FastShip_Cabins_SW_SSW_NW_MapBGEvents
