Route40_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SWIMMER_M, 0, 14, 15, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, Route112_EventScript_1F1F11, 0
	object_event 2, EVENT_OBJ_GFX_SWIMMER_M, 0, 18, 30, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 5, Route112_EventScript_1F1E6A, 0
	object_event 3, EVENT_OBJ_GFX_SWIMMER_F, 0, 3, 19, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, Route112_EventScript_1F1EE3, 0
	object_event 4, EVENT_OBJ_GFX_SWIMMER_F, 0, 10, 25, 3, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, 1, 3, Route112_EventScript_1F1EFA, 0
	object_event 5, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 7, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 3, Route112_EventScript_1F1E81, 0
	object_event 6, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 6, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route112_EventScript_1F1DB7, 0
	object_event 7, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 7, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route112_EventScript_1F1F11, 0
	object_event 8, EVENT_OBJ_GFX_LASS, 0, 11, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, Route112_EventScript_1F1F28, 0
	object_event 9, EVENT_OBJ_GFX_BEAUTY, 0, 8, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, BerryTreeScript, 0
	object_event 10, EVENT_OBJ_GFX_POKEFAN_M, 0, 7, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, BerryTreeScript, 0
	object_event 11, EVENT_OBJ_GFX_LASS, 0, 13, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route112_EventScript_1F1E61, 0
	object_event 12, EVENT_OBJ_GFX_YOUNGSTER, 0, 16, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route112_EventScript_290DCF, 0

Route40_MapWarps:
	warp_def 9, 5, 0, 0, MAP_ROUTE40_BATTLE_TOWER_GATE

Route40_MapBGEvents:
	bg_event 14, 10, 3, BG_EVENT_PLAYER_FACING_ANY, Route112_EventScript_1F1E4F
	bg_event 7, 8, 0, BG_EVENT_PLAYER_FACING_ANY, Route112_EventScript_1F1E46

Route40_MapEvents::
	map_events Route40_EventObjects, Route40_MapWarps, 0x0, Route40_MapBGEvents

