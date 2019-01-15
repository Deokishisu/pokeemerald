FastShip_1F_MapBorder::
	.incbin "data/layouts/FastShip_1F/border.bin"

FastShip_1F_MapBlockdata::
	.incbin "data/layouts/FastShip_1F/map.bin"

	.align 2
FastShip_1F_Layout::
	.4byte 32
	.4byte 18
	.4byte FastShip_1F_MapBorder
	.4byte FastShip_1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

