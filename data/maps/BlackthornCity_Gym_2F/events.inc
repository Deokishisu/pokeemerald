BlackthornCity_Gym_2F_EventObjects:
	object_event 1, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 4, 1, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, SootopolisCity_Gym_B1F_EventScript_225C8B, 0
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 4, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 1, SootopolisCity_Gym_B1F_EventScript_225CD0, 0
	object_event 3, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_Gym_B1F_EventScript_225CB9, 0
	object_event 4, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 2, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_Gym_B1F_EventScript_225CE7, 0
	object_event 5, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 6, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_Gym_B1F_EventScript_225D15, 0
	object_event 6, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 3, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_Gym_B1F_EventScript_225D2C, 0
	object_event 7, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 6, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_Gym_B1F_EventScript_225CA2, 0
	object_event 8, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 8, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, SootopolisCity_Gym_B1F_EventScript_225CFE, 0

BlackthornCity_Gym_2F_MapWarps:
	warp_def 1, 7, 0, 2, MAP_BLACKTHORN_CITY_GYM_1F
	warp_def 7, 9, 0, 3, MAP_BLACKTHORN_CITY_GYM_1F
	warp_def 2, 5, 0, 4, MAP_BLACKTHORN_CITY_GYM_1F
	warp_def 8, 7, 0, 5, MAP_BLACKTHORN_CITY_GYM_1F
	warp_def 8, 3, 0, 6, MAP_BLACKTHORN_CITY_GYM_1F

BlackthornCity_Gym_2F_MapEvents::
	map_events BlackthornCity_Gym_2F_EventObjects, BlackthornCity_Gym_2F_MapWarps, 0x0, 0x0

