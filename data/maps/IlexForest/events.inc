IlexForest_EventObjects::
	object_event 1, EVENT_OBJ_GFX_BIRD, PAL_NPC_BROWN, 14, 31, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, 0x0, 0
	object_event 2, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_GREEN, 7, 28, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, 0
	object_event 3, EVENT_OBJ_GFX_BLACK_BELT, 0, 5, 28, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, PetalburgWoods_EventScript_22E210, 0
	object_event 4, EVENT_OBJ_GFX_GUITARIST, 0, 15, 14, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, PetalburgWoods_EventScript_22E26D, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 0, 20, 32, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgWoods_EventScript_291129, FLAG_ITEM_PETALBURD_WOODS_PARALYZE_HEAL
	object_event 6, EVENT_OBJ_GFX_KURT, 0, 8, 29, 4, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, PetalburgWoods_EventScript_22E222, 0
	object_event 7, EVENT_OBJ_GFX_LASS, PAL_NPC_GREEN, 3, 24, 4, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, PetalburgWoods_EventScript_22E222, 0
	object_event 8, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_GREEN, 12, 1, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, 0x0, 0
	object_event 9, EVENT_OBJ_GFX_ITEM_BALL, 0, 9, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgWoods_EventScript_29110F, FLAG_ITEM_PETALBURG_WOODS_GREAT_BALL
	object_event 10, EVENT_OBJ_GFX_ITEM_BALL, 0, 17, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgWoods_EventScript_291102, FLAG_ITEM_PETALBURG_WOODS_X_ATTACK
	object_event 11, EVENT_OBJ_GFX_ITEM_BALL, 0, 27, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgWoods_EventScript_29111C, FLAG_ITEM_PETALBURG_WOODS_ETHER

IlexForest_MapWarps::
	warp_def 1, 5, 0, 0, MAP_ROUTE34_GATE2
	warp_def 3, 42, 0, 2, MAP_ROUTE34_GATE1
	warp_def 3, 43, 0, 3, MAP_ROUTE34_GATE1

IlexForest_MapBGEvents::
	bg_event 3, 17, 3, BG_EVENT_PLAYER_FACING_ANY, PetalburgWoods_EventScript_22E25B
	bg_hidden_item_event 11, 7, 3, ITEM_ETHER, FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POTION
	bg_hidden_item_event 22, 14, 3, ITEM_SUPER_POTION, FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_1
	bg_hidden_item_event 1, 17, 3, ITEM_FULL_HEAL, FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_2
	bg_event 8, 22, 3, BG_EVENT_PLAYER_FACING_NORTH, PetalburgWoods_EventScript_22E264

IlexForest_MapEvents::
	map_events IlexForest_EventObjects, IlexForest_MapWarps, 0x0, IlexForest_MapBGEvents
