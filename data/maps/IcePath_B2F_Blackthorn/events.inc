IcePath_B2F_Blackthorn_EventObjects::
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 8, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, FALSE, 0, NULL, 0

IcePath_B2F_Blackthorn_MapWarps::
	warp_def 3, 15, 3, 7, MAP_ICE_PATH_B1F
	warp_def 3, 3, 3, 1, MAP_ICE_PATH_B3F

IcePath_B2F_Blackthorn_MapBGEvents::
	bg_hidden_item_event 2, 10, 3, ITEM_ICE_HEAL, FLAG_TEMP_1

IcePath_B2F_Blackthorn_MapEvents::
	map_events IcePath_B2F_Blackthorn_EventObjects, IcePath_B2F_Blackthorn_MapWarps, 0x0, IcePath_B2F_Blackthorn_MapBGEvents
