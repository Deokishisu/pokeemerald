FastShip_Cabins_SW_SSW_NW_MapBorder::
	.incbin "data/layouts/FastShip_Cabins_SW_SSW_NW/border.bin"

FastShip_Cabins_SW_SSW_NW_MapBlockdata::
	.incbin "data/layouts/FastShip_Cabins_SW_SSW_NW/map.bin"

	.align 2
FastShip_Cabins_SW_SSW_NW_Layout::
	.4byte 8
	.4byte 34
	.4byte FastShip_Cabins_SW_SSW_NW_MapBorder
	.4byte FastShip_Cabins_SW_SSW_NW_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

