NewBarkTown_House_EventObjects::
	object_event 1, EVENT_OBJ_GFX_MOM, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 0, 0, 0, 0x0, FLAG_HIDE_LITTLE_ROOT_TOWN_PLAYERS_BEDROOM_MOM
	object_event 2, EVENT_OBJ_GFX_ZPICHU_DOLL, 0, 5, 3, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL

NewBarkTown_House_MapWarps::
	warp_def 2, 7, 0, 3, MAP_NEW_BARK_TOWN
	warp_def 3, 7, 3, 3, MAP_NEW_BARK_TOWN

NewBarkTown_House_MapEvents::
	map_events NewBarkTown_House_EventObjects, NewBarkTown_House_MapWarps, 0x0, 0x0
