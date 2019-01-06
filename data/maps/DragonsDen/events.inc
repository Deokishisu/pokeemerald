DragonsDen_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 35, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, AquaHideout_B1F_EventScript_291358, FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL
	object_event 2, EVENT_OBJ_GFX_CLAIR, PAL_NPC_BLUE, 14, 30, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, AquaHideout_B1F_EventScript_233AEC, 0
	object_event 3, EVENT_OBJ_GFX_RIVAL, 0, 20, 23, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, 0, 0, AquaHideout_B1F_EventScript_233AEC, 0
	object_event 4, EVENT_OBJ_GFX_COOLTRAINER_M, PAL_NPC_RED, 20, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 1, 4, AquaHideout_B1F_EventScript_233AEC, 0
	object_event 5, EVENT_OBJ_GFX_COOLTRAINER_F, PAL_NPC_RED, 8, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 1, 3, AquaHideout_B1F_EventScript_233AEC, 0
	object_event 6, EVENT_OBJ_GFX_TWIN, PAL_NPC_RED, 4, 17, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, AquaHideout_B1F_EventScript_233AEC, 0
	object_event 7, EVENT_OBJ_GFX_TWIN, PAL_NPC_RED, 4, 18, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 1, 1, AquaHideout_B1F_EventScript_233AEC, 0
	object_event 8, EVENT_OBJ_GFX_ITEM_BALL, 0, 30, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, AquaHideout_B1F_EventScript_2339EB, FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
	object_event 9, EVENT_OBJ_GFX_ITEM_BALL, 0, 5, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, AquaHideout_B1F_EventScript_291365, FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET

DragonsDen_MapWarps::
	warp_def 20, 3, 3, 7, MAP_BLACKTHORN_CITY
	warp_def 19, 29, 3, 0, MAP_DRAGONS_DEN_DRAGON_SHRINE

DragonsDen_MapCoordEvents::
	coord_event 19, 30, 3, VAR_TEMP_0, 0, NULL

DragonsDen_MapEvents::
	map_events DragonsDen_EventObjects, DragonsDen_MapWarps, DragonsDen_MapCoordEvents, 0x0
