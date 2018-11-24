VioletCity_Gym_EventObjects::
	object_event 1, EVENT_OBJ_GFX_FALKNER, 0, 5, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgCity_Gym_EventScript_2049F1, FLAG_HIDE_PETALYBURG_GYM_NORMAN
	object_event 2, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 0, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 0, PetalburgCity_Gym_EventScript_2054AA, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 0, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 0, PetalburgCity_Gym_EventScript_2053BA, 0
	object_event 4, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 0, PetalburgCity_Gym_EventScript_2053F6, 0
	object_event 5, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 0, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 0, PetalburgCity_Gym_EventScript_2054E6, 0
	object_event 6, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 1, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 0, PetalburgCity_Gym_EventScript_205432, 0
	object_event 7, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 0, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 0, PetalburgCity_Gym_EventScript_205522, 0
	object_event 8, EVENT_OBJ_GFX_COOLTRAINER_M, 0, 1, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 0, PetalburgCity_Gym_EventScript_20546E, 0
	object_event 9, EVENT_OBJ_GFX_GYM_GUIDE, 0, 7, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, PetalburgCity_Gym_EventScript_20574F, FLAG_HIDE_PETALBURG_GYM_GREETER

VioletCity_Gym_MapWarps::
	warp_def 4, 15, 3, 2, MAP_VIOLET_CITY
	warp_def 5, 15, 3, 2, MAP_VIOLET_CITY

VioletCity_Gym_MapBGEvents::
	bg_event 3, 13, 3, BG_EVENT_PLAYER_FACING_NORTH, PetalburgCity_Gym_EventScript_20576E
	bg_event 6, 13, 3, BG_EVENT_PLAYER_FACING_NORTH, PetalburgCity_Gym_EventScript_20577E

VioletCity_Gym_MapEvents::
	map_events VioletCity_Gym_EventObjects, VioletCity_Gym_MapWarps, 0x0, VioletCity_Gym_MapBGEvents
