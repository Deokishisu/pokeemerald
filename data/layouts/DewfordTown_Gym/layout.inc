DewfordTown_Gym_MapBorder::
	.incbin "data/layouts/DewfordTown_Gym/border.bin"

DewfordTown_Gym_MapBlockdata::
	.incbin "data/layouts/DewfordTown_Gym/map.bin"

	.align 2
DewfordTown_Gym_Layout::
	.4byte 10
	.4byte 16
	.4byte DewfordTown_Gym_MapBorder
	.4byte DewfordTown_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

