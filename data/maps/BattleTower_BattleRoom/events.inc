BattleTower_BattleRoom_EventObjects:
	object_event 1, EVENT_OBJ_GFX_VAR_0, 0, 4, 0, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_RECEPTIONIST, 0, 1, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, NULL, 0

BattleTower_BattleRoom_MapWarps:
	warp_def 3, 7, 3, 3, MAP_BATTLE_TOWER_HALLWAY
	warp_def 4, 7, 3, 3, MAP_BATTLE_TOWER_HALLWAY

BattleTower_BattleRoom_MapEvents::
	map_events BattleTower_BattleRoom_EventObjects, BattleTower_BattleRoom_MapWarps, 0x0, 0x0

