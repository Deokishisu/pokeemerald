Route37_EventObjects::
	object_event 1, EVENT_OBJ_GFX_TWIN, 0, 6, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 1, 0x0, 0
	object_event 2, EVENT_OBJ_GFX_TWIN, 0, 7, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRUE, 1, Route109_EventScript_1EE910, 0
	object_event 3, EVENT_OBJ_GFX_YOUNGSTER, 0, 6, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRUE, 1, Route109_EventScript_1EEA3D, 0
	object_event 4, EVENT_OBJ_GFX_BERRY_TREE, 0, 13, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, Route109_EventScript_1EEA54, 0
	object_event 5, EVENT_OBJ_GFX_BUG_CATCHER, 0, 16, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, FALSE, 0, Route109_EventScript_1EEA6B, 0
	object_event 6, EVENT_OBJ_GFX_BERRY_TREE, 0, 16, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, Route109_EventScript_1EEA82, 0
	object_event 7, EVENT_OBJ_GFX_BERRY_TREE, 0, 15, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FALSE, 0, Route109_EventScript_1EEA99, 0

Route37_MapBGEvents::
	bg_event 5, 3, 0, BG_EVENT_PLAYER_FACING_ANY, Route109_EventScript_1EEA2B
	bg_hidden_item_event 4, 2, 0, ITEM_ETHER, FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE

Route37_MapEvents::
	map_events Route37_EventObjects, 0x0, 0x0, Route37_MapBGEvents
