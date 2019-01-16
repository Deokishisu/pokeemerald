BattleTower_Exterior_EventObjects::
	object_event 1, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_RED, 6, 12, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_BEAUTY, PAL_NPC_GREEN, 13, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_SAILOR, 0, 12, 18, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_LASS, PAL_NPC_GREEN, 12, 24, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, NULL, 0

BattleTower_Exterior_MapWarps::
	warp_def 8, 21, 3, 2, MAP_ROUTE40_BATTLE_TOWER_GATE
	warp_def 9, 21, 3, 3, MAP_ROUTE40_BATTLE_TOWER_GATE
	warp_def 8, 9, 3, 0, MAP_BATTLE_TOWER_LOBBY
	warp_def 9, 9, 3, 1, MAP_BATTLE_TOWER_LOBBY

BattleTower_Exterior_MapBGEvents::
	bg_event 10, 10, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

BattleTower_Exterior_MapEvents::
	map_events BattleTower_Exterior_EventObjects, BattleTower_Exterior_MapWarps, 0x0, BattleTower_Exterior_MapBGEvents
