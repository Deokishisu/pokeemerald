VioletCity_Gym_MapBorder::
	.incbin "data/layouts/VioletCity_Gym/border.bin"

VioletCity_Gym_MapBlockdata::
	.incbin "data/layouts/VioletCity_Gym/map.bin"

	.align 2
VioletCity_Gym_Layout::
	.4byte 10
	.4byte 16
	.4byte VioletCity_Gym_MapBorder
	.4byte VioletCity_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

