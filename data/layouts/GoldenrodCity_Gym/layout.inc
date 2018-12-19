GoldenrodCity_Gym_MapBorder::
	.incbin "data/layouts/GoldenrodCity_Gym/border.bin"

GoldenrodCity_Gym_MapBlockdata::
	.incbin "data/layouts/GoldenrodCity_Gym/map.bin"

	.align 2
GoldenrodCity_Gym_Layout::
	.4byte 20
	.4byte 18
	.4byte GoldenrodCity_Gym_MapBorder
	.4byte GoldenrodCity_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

