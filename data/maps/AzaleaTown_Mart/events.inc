AzaleaTown_Mart_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 3, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, FallarborTown_Mart_EventScript_1FFCBF, 0
	object_event 2, EVENT_OBJ_GFX_BUG_CATCHER, 1, 7, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, 0, 0, FallarborTown_Mart_EventScript_1FFCFD, 0
	object_event 3, EVENT_OBJ_GFX_COOLTRAINER_M, 2, 2, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 0, 0, FallarborTown_Mart_EventScript_1FFD06, 0

AzaleaTown_Mart_MapWarps::
	warp_def 3, 7, 0, 4, MAP_AZALEA_TOWN
	warp_def 2, 7, 0, 4, MAP_AZALEA_TOWN

AzaleaTown_Mart_MapEvents::
	map_events AzaleaTown_Mart_EventObjects, AzaleaTown_Mart_MapWarps, 0x0, 0x0
