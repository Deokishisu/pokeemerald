BlackthornCity_Gym_1F_MapBorder::
	.incbin "data/layouts/BlackthornCity_Gym_1F/border.bin"

BlackthornCity_Gym_1F_MapBlockdata::
	.incbin "data/layouts/BlackthornCity_Gym_1F/map.bin"

	.align 2
BlackthornCity_Gym_1F_Layout::
	.4byte 10
	.4byte 18
	.4byte BlackthornCity_Gym_1F_MapBorder
	.4byte BlackthornCity_Gym_1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

