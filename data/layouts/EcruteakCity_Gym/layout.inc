EcruteakCity_Gym_MapBorder::
	.incbin "data/layouts/EcruteakCity_Gym/border.bin"

EcruteakCity_Gym_MapBlockdata::
	.incbin "data/layouts/EcruteakCity_Gym/map.bin"

	.align 2
EcruteakCity_Gym_Layout::
	.4byte 10
	.4byte 18
	.4byte EcruteakCity_Gym_MapBorder
	.4byte EcruteakCity_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

