GoldenrodCity_GameCorner_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, PAL_NPC_RED, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_210125, 0
	object_event 2, EVENT_OBJ_GFX_RECEPTIONIST, PAL_NPC_RED, 16, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_21012E, 0
	object_event 3, EVENT_OBJ_GFX_RECEPTIONIST, PAL_NPC_RED, 18, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_20FBB9, 0
	object_event 4, EVENT_OBJ_GFX_PHARMACIST, PAL_NPC_BLUE, 8, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_20FCF1, 0 //DAY
	object_event 5, EVENT_OBJ_GFX_PHARMACIST, PAL_NPC_BLUE, 8, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_210137, 0 //NIGHT
	object_event 6, EVENT_OBJ_GFX_POKEFAN_M, PAL_NPC_BROWN, 11, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_21021D, 0
	object_event 7, EVENT_OBJ_GFX_COOLTRAINER_M, PAL_NPC_BLUE, 14, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_210279, 0
	object_event 8, EVENT_OBJ_GFX_POKEFAN_F, PAL_NPC_RED, 17, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_210289, 0
	object_event 9, EVENT_OBJ_GFX_COOLTRAINER_F, PAL_NPC_GREEN, 10, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, 0, 0, MauvilleCity_GameCorner_EventScript_20FE9F, 0
	object_event 10, EVENT_OBJ_GFX_GENTLEMAN, PAL_NPC_BLUE, 5, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, MauvilleCity_GameCorner_EventScript_210299, 0
	object_event 11, EVENT_OBJ_GFX_POKEFAN_M, PAL_NPC_BROWN, 2, 9, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, MauvilleCity_GameCorner_EventScript_2102B6, 0
	object_event 12, EVENT_OBJ_GFX_POKEFAN_M, PAL_NPC_RED, 17, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, MauvilleCity_GameCorner_EventScript_2102C6, 0

GoldenrodCity_GameCorner_MapWarps::
	warp_def 2, 13, 3, 9, MAP_GOLDENROD_CITY
	warp_def 3, 13, 3, 9, MAP_GOLDENROD_CITY

GoldenrodCity_GameCorner_MapBGEvents::
	bg_event 6, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2102D6
	bg_event 6, 7, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2102F6
	bg_event 6, 8, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_210316
	bg_event 6, 9, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_210336
	bg_event 6, 10, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_210356
	bg_event 6, 11, 0, BG_EVENT_PLAYER_FACING_EAST, MauvilleCity_GameCorner_EventScript_210376
	bg_event 7, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_210396
	bg_event 7, 7, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2103B6 //Lucky
	bg_event 7, 8, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2103D6
	bg_event 7, 9, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2103F6
	bg_event 7, 10, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_210416
	bg_event 7, 11, 0, BG_EVENT_PLAYER_FACING_WEST, MauvilleCity_GameCorner_EventScript_210436
	bg_event 12, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5AB1
	bg_event 12, 7, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5AB1
	bg_event 12, 8, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5AB1
	bg_event 12, 9, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5AB1
	bg_event 12, 10, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5AB1
	bg_event 12, 11, 0, BG_EVENT_PLAYER_FACING_EAST, MauvilleCity_GameCorner_EventScript_2A5AB1
	bg_event 13, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF //Card Flip Starts here
	bg_event 13, 7, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 13, 8, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 13, 9, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 13, 10, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 13, 11, 0, BG_EVENT_PLAYER_FACING_WEST, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 18, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5AB1
	bg_event 18, 7, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 18, 8, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 18, 9, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 18, 10, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 18, 11, 0, BG_EVENT_PLAYER_FACING_EAST, MauvilleCity_GameCorner_EventScript_2A5ADF
	bg_event 12, 1, 0, BG_EVENT_PLAYER_FACING_WEST, MauvilleCity_GameCorner_EventScript_2A5ADF //LeftTheirDrinkScript

GoldenrodCity_GameCorner_MapEvents::
	map_events GoldenrodCity_GameCorner_EventObjects, GoldenrodCity_GameCorner_MapWarps, 0x0, GoldenrodCity_GameCorner_MapBGEvents
