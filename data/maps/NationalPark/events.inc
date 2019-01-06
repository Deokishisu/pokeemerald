NationalPark_EventObjects::
	object_event 1, EVENT_OBJ_GFX_LASS, PAL_NPC_GREEN, 15, 24, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, 0, 0, RusturfTunnel_EventScript_22CE76, 0
	object_event 2, EVENT_OBJ_GFX_POKEFAN_F, 0, 14, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RusturfTunnel_EventScript_2907A6, 0
	object_event 3, EVENT_OBJ_GFX_TEACHER, PAL_NPC_GREEN, 27, 40, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, 0x0, 0
	object_event 4, EVENT_OBJ_GFX_YOUNGSTER, 0, 11, 41, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, 0, 0, RusturfTunnel_EventScript_22D0C2, 0
	object_event 5, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_RED, 10, 41, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RusturfTunnel_EventScript_22D0AF, 0
	object_event 6, EVENT_OBJ_GFX_TEACHER, 0, 17, 41, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, 0, 0, RusturfTunnel_EventScript_2907A6, 0
	object_event 7, EVENT_OBJ_GFX_CAL, 0, 26, 40, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 1, 3, RusturfTunnel_EventScript_22D1B1, 0
	object_event 8, EVENT_OBJ_GFX_YOUNGSTER, PAL_NPC_BLUE, 27, 23, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, RusturfTunnel_EventScript_22D1B1, 0
	object_event 9, EVENT_OBJ_GFX_POKEFAN_F, PAL_NPC_RED, 18, 29, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, RusturfTunnel_EventScript_22D1B1, 0
	object_event 10, EVENT_OBJ_GFX_POKEFAN_M, PAL_NPC_RED, 16, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 2, RusturfTunnel_EventScript_22D1B1, 0
	object_event 11, EVENT_OBJ_GFX_LASS, PAL_NPC_BLUE, 8, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 1, 3, RusturfTunnel_EventScript_22D1B1, 0
	object_event 12, EVENT_OBJ_GFX_ITEM_BALL, 0, 35, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RusturfTunnel_EventScript_291136, FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL
	object_event 13, EVENT_OBJ_GFX_GAMEBOY_KID, 0, 26, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RusturfTunnel_EventScript_22CE76, 0
	object_event 14, EVENT_OBJ_GFX_ITEM_BALL, 0, 1, 43, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, RusturfTunnel_EventScript_291143, FLAG_ITEM_RUSTURF_TUNNEL_MAX_ETHER

NationalPark_MapWarps::
	warp_def 10, 47, 3, 2, MAP_ROUTE35_NATIONAL_PARK_GATE
	warp_def 11, 47, 3, 3, MAP_ROUTE35_NATIONAL_PARK_GATE
	warp_def 33, 18, 3, 2, MAP_ROUTE36_NATIONAL_PARK_GATE
	warp_def 33, 19, 3, 3, MAP_ROUTE36_NATIONAL_PARK_GATE

NationalPark_MapEvents::
	map_events NationalPark_EventObjects, NationalPark_MapWarps, 0x0, 0x0
