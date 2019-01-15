FastShip_Cabins_SE_SSE_Captains_MapBorder::
	.incbin "data/layouts/FastShip_Cabins_SE_SSE_Captains/border.bin"

FastShip_Cabins_SE_SSE_Captains_MapBlockdata::
	.incbin "data/layouts/FastShip_Cabins_SE_SSE_Captains/map.bin"

	.align 2
FastShip_Cabins_SE_SSE_Captains_Layout::
	.4byte 10
	.4byte 36
	.4byte FastShip_Cabins_SE_SSE_Captains_MapBorder
	.4byte FastShip_Cabins_SE_SSE_Captains_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

