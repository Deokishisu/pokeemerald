FastShip_Cabins_NNW_NNE_NE_MapBorder::
	.incbin "data/layouts/FastShip_Cabins_NNW_NNE_NE/border.bin"

FastShip_Cabins_NNW_NNE_NE_MapBlockdata::
	.incbin "data/layouts/FastShip_Cabins_NNW_NNE_NE/map.bin"

	.align 2
FastShip_Cabins_NNW_NNE_NE_Layout::
	.4byte 8
	.4byte 34
	.4byte FastShip_Cabins_NNW_NNE_NE_MapBorder
	.4byte FastShip_Cabins_NNW_NNE_NE_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

