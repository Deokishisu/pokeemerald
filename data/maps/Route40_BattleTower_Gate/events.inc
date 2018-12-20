Route40_BattleTower_Gate_EventObjects::
	object_event 1, EVENT_OBJ_GFX_GUITARIST, PAL_NPC_GREEN, 3, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_TWIN, PAL_NPC_RED, 7, 5, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, FALSE, 0, NULL, 0

Route40_BattleTower_Gate_MapWarps::
	warp_def 4, 7, 3, 0, MAP_ROUTE40
	warp_def 5, 7, 3, 0, MAP_ROUTE40
	warp_def 4, 0, 3, 2, MAP_ROUTE40_BATTLE_TOWER_GATE
	warp_def 5, 0, 3, 3, MAP_ROUTE40_BATTLE_TOWER_GATE

Route40_BattleTower_Gate_MapEvents::
	map_events Route40_BattleTower_Gate_EventObjects, Route40_BattleTower_Gate_MapWarps, 0x0, 0x0
