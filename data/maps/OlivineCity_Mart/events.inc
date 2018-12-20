OlivineCity_Mart_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, RustboroCity_Mart_EventScript_214F06, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_F, PAL_NPC_GREEN, 6, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, 0, 0, RustboroCity_Mart_EventScript_214F7D, 0
	object_event 3, EVENT_OBJ_GFX_LASS, 0, 1, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, RustboroCity_Mart_EventScript_214F74, 0

OlivineCity_Mart_MapWarps::
	warp_def 2, 7, 0, 7, MAP_OLIVINE_CITY
	warp_def 3, 7, 0, 7, MAP_OLIVINE_CITY

OlivineCity_Mart_MapEvents::
	map_events OlivineCity_Mart_EventObjects, OlivineCity_Mart_MapWarps, 0x0, 0x0
