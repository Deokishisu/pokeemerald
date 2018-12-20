CianwoodCity_Gym_MapBorder::
	.incbin "data/layouts/CianwoodCity_Gym/border.bin"

CianwoodCity_Gym_MapBlockdata::
	.incbin "data/layouts/CianwoodCity_Gym/map.bin"

	.align 2
CianwoodCity_Gym_Layout::
	.4byte 10
	.4byte 18
	.4byte CianwoodCity_Gym_MapBorder
	.4byte CianwoodCity_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

