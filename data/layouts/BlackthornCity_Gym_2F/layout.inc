BlackthornCity_Gym_2F_MapBorder::
	.incbin "data/layouts/BlackthornCity_Gym_2F/border.bin"

BlackthornCity_Gym_2F_MapBlockdata::
	.incbin "data/layouts/BlackthornCity_Gym_2F/map.bin"

	.align 2
BlackthornCity_Gym_2F_Layout::
	.4byte 10
	.4byte 18
	.4byte BlackthornCity_Gym_2F_MapBorder
	.4byte BlackthornCity_Gym_2F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

