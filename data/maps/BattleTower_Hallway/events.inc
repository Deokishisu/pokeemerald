BattleTower_Hallway_EventObjects::
	object_event 1, EVENT_OBJ_GFX_RECEPTIONIST, 0, 11, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0

BattleTower_Hallway_MapWarps::
	warp_def 11, 1, 3, 0, MAP_BATTLE_TOWER_ELEVATOR
	warp_def 5, 0, 3, 0, MAP_BATTLE_TOWER_BATTLE_ROOM
	warp_def 7, 0, 3, 0, MAP_BATTLE_TOWER_BATTLE_ROOM
	warp_def 9, 0, 3, 0, MAP_BATTLE_TOWER_BATTLE_ROOM
	warp_def 13, 0, 3, 0, MAP_BATTLE_TOWER_BATTLE_ROOM
	warp_def 15, 0, 3, 0, MAP_BATTLE_TOWER_BATTLE_ROOM

BattleTower_Hallway_MapEvents::
	map_events BattleTower_Hallway_EventObjects, BattleTower_Hallway_MapWarps, 0x0, 0x0
