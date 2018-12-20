BlackthornCity_Gym_B1F_MapBorder::
	.incbin "data/layouts/BlackthornCity_Gym_B1F/border.bin"

BlackthornCity_Gym_B1F_MapBlockdata::
	.incbin "data/layouts/BlackthornCity_Gym_B1F/map.bin"

	.align 2
BlackthornCity_Gym_B1F_Layout::
	.4byte 0x11
	.4byte 0x1a
	.4byte BlackthornCity_Gym_B1F_MapBorder
	.4byte BlackthornCity_Gym_B1F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_SootopolisGym

