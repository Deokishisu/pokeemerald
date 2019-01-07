NewBarkTown_ProfElmsLab_EventObjects::
	object_event 1, EVENT_OBJ_GFX_SCIENTIST, 1, 9, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_1F9F84, 0
	object_event 2, EVENT_OBJ_GFX_PROF_ELM, 4, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_1FA25A, FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	object_event 3, EVENT_OBJ_GFX_VAR_0, 0, 7, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_1FA3EC, FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 1, 8, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_1F9FBB, 0
	object_event 5, EVENT_OBJ_GFX_ITEM_BALL, 1, 7, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_1F9FEF, 0
	object_event 6, EVENT_OBJ_GFX_ITEM_BALL, 1, 6, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_1FA023, 0

NewBarkTown_ProfElmsLab_MapWarps::
	warp_def 4, 11, 0, 2, MAP_NEW_BARK_TOWN
	warp_def 5, 11, 0, 2, MAP_NEW_BARK_TOWN

NewBarkTown_ProfElmsLab_MapBGEvents::
	bg_event 10, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, LittlerootTown_ProfessorBirchsLab_EventScript_1FA3E3
	bg_event 11, 7, 0, BG_EVENT_PLAYER_FACING_NORTH, LittlerootTown_ProfessorBirchsLab_EventScript_1FA3E3
	bg_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4CD
	bg_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4CD
	bg_event 1, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4C4
	bg_event 0, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4C4
	bg_event 1, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4C4
	bg_event 2, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4C4
	bg_event 3, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4C4
	bg_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4BB
	bg_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4BB
	bg_event 1, 10, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4BB
	bg_event 1, 9, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4BB
	bg_event 11, 10, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4BB
	bg_event 11, 9, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_ProfessorBirchsLab_EventScript_1FA4BB

NewBarkTown_ProfElmsLab_MapEvents::
	map_events NewBarkTown_ProfElmsLab_EventObjects, NewBarkTown_ProfElmsLab_MapWarps, 0x0, NewBarkTown_ProfElmsLab_MapBGEvents
