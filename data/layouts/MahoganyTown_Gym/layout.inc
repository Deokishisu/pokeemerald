MahoganyTown_Gym_MapBorder::
	.incbin "data/layouts/MahoganyTown_Gym/border.bin"

MahoganyTown_Gym_MapBlockdata::
	.incbin "data/layouts/MahoganyTown_Gym/map.bin"

	.align 2
MahoganyTown_Gym_Layout::
	.4byte 10
	.4byte 18
	.4byte MahoganyTown_Gym_MapBorder
	.4byte MahoganyTown_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

