PetalburgCity_Gym_MapBorder::
	.incbin "data/layouts/PetalburgCity_Gym/border.bin"

PetalburgCity_Gym_MapBlockdata::
	.incbin "data/layouts/PetalburgCity_Gym/map.bin"

	.align 2
PetalburgCity_Gym_Layout::
	.4byte 10
	.4byte 16
	.4byte PetalburgCity_Gym_MapBorder
	.4byte PetalburgCity_Gym_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

