BattleTower_Lobby_EventObjects::
	object_event 1, EVENT_OBJ_GFX_RECEPTIONIST, 0, 7, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, NULL, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_BROWN, 14, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, FALSE, 0, NULL, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_F, PAL_NPC_RED, 4, 9, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, FALSE, 0, NULL, 0
	object_event 4, EVENT_OBJ_GFX_BUG_CATCHER, PAL_NPC_BLUE, 1, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, FALSE, 0, NULL, 0
	object_event 5, EVENT_OBJ_GFX_OLD_WOMAN, 0, 14, 3, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, FALSE, 0, NULL, 0

BattleTower_Lobby_MapWarps::
	warp_def 7, 9, 3, 2, MAP_BATTLE_TOWER_EXTERIOR
	warp_def 8, 9, 3, 3, MAP_BATTLE_TOWER_EXTERIOR
	warp_def 7, 0, 3, 0, MAP_BATTLE_TOWER_ELEVATOR

BattleTower_Lobby_MapBGEvents::
	bg_event 6, 6, 3, BG_EVENT_PLAYER_FACING_ANY, NULL

BattleTower_Lobby_MapEvents::
	map_events BattleTower_Lobby_EventObjects, BattleTower_Lobby_MapWarps, 0x0, BattleTower_Lobby_MapBGEvents
