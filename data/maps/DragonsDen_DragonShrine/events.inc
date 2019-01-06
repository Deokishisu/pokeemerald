DragonsDen_DragonShrine_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ELDER, 0, 5, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, AquaHideout_B2F_EventScript_233E09, 0
	object_event 2, EVENT_OBJ_GFX_ELDER, 0, 2, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, AquaHideout_B2F_EventScript_233E8A, 0
	object_event 3, EVENT_OBJ_GFX_ELDER, 0, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, 0x0, 0
	object_event 4, EVENT_OBJ_GFX_CLAIR, PAL_NPC_BLUE, 4, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, AquaHideout_B2F_EventScript_233EAF, 0

DragonsDen_DragonShrine_MapWarps::
	warp_def 4, 9, 3, 1, MAP_DRAGONS_DEN
	warp_def 5, 9, 3, 1, MAP_DRAGONS_DEN

DragonsDen_DragonShrine_MapEvents::
	map_events DragonsDen_DragonShrine_EventObjects, DragonsDen_DragonShrine_MapWarps, 0x0, 0x0
