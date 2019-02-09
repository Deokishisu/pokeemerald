GoldenrodCity_Gym_EventObjects:
	object_event 1, EVENT_OBJ_GFX_WHITNEY, 0, 8, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MauvilleCity_Gym_EventScript_20DEEB, 0
	object_event 2, EVENT_OBJ_GFX_LASS, 0, 9, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 4, MauvilleCity_Gym_EventScript_20E0D0, 0
	object_event 3, EVENT_OBJ_GFX_LASS, 0, 9, 6, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 1, 1, MauvilleCity_Gym_EventScript_20E0FE, 0
	object_event 4, EVENT_OBJ_GFX_BEAUTY, 0, 0, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, MauvilleCity_Gym_EventScript_20E0E7, 0
	object_event 5, EVENT_OBJ_GFX_BEAUTY, 0, 19, 5, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, MauvilleCity_Gym_EventScript_20E0B9, 0
	object_event 6, EVENT_OBJ_GFX_GYM_GUIDE, 0, 5, 15, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MauvilleCity_Gym_EventScript_20E12C, 0

GoldenrodCity_Gym_MapWarps:
	warp_def 2, 17, 0, 0, MAP_GOLDENROD_CITY
	warp_def 3, 17, 0, 0, MAP_GOLDENROD_CITY

GoldenrodCity_Gym_MapCoordEvents:
	coord_event 8, 5, 3, VAR_TEMP_0, 0, NULL

GoldenrodCity_Gym_MapBGEvents:
	bg_event 1, 15, 0, BG_EVENT_PLAYER_FACING_NORTH, MauvilleCity_Gym_EventScript_20E14B
	bg_event 4, 15, 0, BG_EVENT_PLAYER_FACING_NORTH, MauvilleCity_Gym_EventScript_20E15B

GoldenrodCity_Gym_MapEvents::
	map_events GoldenrodCity_Gym_EventObjects, GoldenrodCity_Gym_MapWarps, GoldenrodCity_Gym_MapCoordEvents, GoldenrodCity_Gym_MapBGEvents

