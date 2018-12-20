OlivineCity_Gym_MapBorder::
	.incbin "data/layouts/OlivineCity_Gym/border.bin"

OlivineCity_Gym_MapBlockdata::
	.incbin "data/layouts/OlivineCity_Gym/map.bin"

	.align 2
OlivineCity_Gym_Layout::
	.4byte 10
	.4byte 16
	.4byte OlivineCity_Gym_MapBorder
	.4byte OlivineCity_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

