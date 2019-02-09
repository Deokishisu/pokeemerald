OlivineCity_Port_EventObjects:
	object_event 1, EVENT_OBJ_GFX_SAILOR, 0, 7, 23, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_Flat1_2F_EventScript_21523D, 0
	object_event 2, EVENT_OBJ_GFX_SAILOR, 0, 7, 15, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_Flat1_2F_EventScript_215246, 0
	object_event 3, EVENT_OBJ_GFX_SAILOR, 0, 6, 15, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, RustboroCity_Flat1_2F_EventScript_215246, 0
	object_event 4, EVENT_OBJ_GFX_FISHING_GURU, 0, 4, 15, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_Flat1_2F_EventScript_215246, 0
	object_event 5, EVENT_OBJ_GFX_FISHING_GURU, 0, 13, 14, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, RustboroCity_Flat1_2F_EventScript_215246, 0
	object_event 6, EVENT_OBJ_GFX_YOUNGSTER, 0, 4, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_Flat1_2F_EventScript_21513A, 0
	object_event 7, EVENT_OBJ_GFX_COOLTRAINER_F, 0, 11, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RustboroCity_Flat1_2F_EventScript_215246, 0

OlivineCity_Port_MapWarps:
	warp_def 11, 7, 0, 4, MAP_OLIVINE_CITY_PORT_PASSAGE
	warp_def 7, 23, 0, 0, MAP_OLIVINE_CITY

OlivineCity_Port_MapEvents::
	map_events OlivineCity_Port_EventObjects, OlivineCity_Port_MapWarps, 0x0, 0x0

