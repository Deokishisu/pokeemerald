SproutTower_2F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 0, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 1, MeteorFalls_1F_2R_EventScript_22C4DE, 0
	object_event 2, EVENT_OBJ_GFX_OLD_MAN, 0, 0, 0, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 1, 1, MeteorFalls_1F_2R_EventScript_22C540, 0
	object_event 3, EVENT_OBJ_GFX_OLD_WOMAN, 0, 1, 0, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 1, 1, MeteorFalls_1F_2R_EventScript_22C5A4, 0

SproutTower_2F_MapWarps:
	warp_def 6, 4, 3, 2, MAP_SPROUT_TOWER_1F
	warp_def 17, 3, 3, 3, MAP_SPROUT_TOWER_1F
	warp_def 2, 6, 3, 4, MAP_SPROUT_TOWER_1F
	warp_def 10, 14, 3, 0, MAP_SPROUT_TOWER_3F

SproutTower_2F_MapBGEvents:
	bg_event 1, 1, 0, BG_EVENT_PLAYER_FACING_ANY, 0x0

SproutTower_2F_MapEvents::
	map_events SproutTower_2F_EventObjects, SproutTower_2F_MapWarps, 0x0, SproutTower_2F_MapBGEvents

