AzaleaTown_CharcoalKiln_EventObjects::
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_BLUE, 5, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, DewfordTown_House1_EventScript_1FC3D7, 0
	object_event 2, EVENT_OBJ_GFX_BLACK_BELT, PAL_NPC_BROWN, 2, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, DewfordTown_House1_EventScript_1FC3CE, 0
	object_event 3, EVENT_OBJ_GFX_LASS, PAL_NPC_BROWN, 5, 6, 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN, 3, 1, 0, 0, DewfordTown_House1_EventScript_1FC3E0, 0

AzaleaTown_CharcoalKiln_MapWarps::
	warp_def 2, 7, 0, 3, MAP_AZALEA_TOWN
	warp_def 3, 7, 0, 3, MAP_AZALEA_TOWN

AzaleaTown_CharcoalKiln_MapEvents::
	map_events AzaleaTown_CharcoalKiln_EventObjects, AzaleaTown_CharcoalKiln_MapWarps, 0x0, 0x0
