BattleTower_Elevator_EventObjects:
	object_event 1, EVENT_OBJ_GFX_RECEPTIONIST, 0, 1, 2, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, NULL, 0

BattleTower_Elevator_MapWarps:
	warp_def 1, 3, 3, 0, MAP_BATTLE_TOWER_HALLWAY
	warp_def 2, 3, 3, 0, MAP_BATTLE_TOWER_HALLWAY

BattleTower_Elevator_MapEvents::
	map_events BattleTower_Elevator_EventObjects, BattleTower_Elevator_MapWarps, 0x0, 0x0

