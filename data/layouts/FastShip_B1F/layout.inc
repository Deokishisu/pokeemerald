FastShip_B1F_MapBorder::
	.incbin "data/layouts/FastShip_B1F/border.bin"

FastShip_B1F_MapBlockdata::
	.incbin "data/layouts/FastShip_B1F/map.bin"

	.align 2
FastShip_B1F_Layout::
	.4byte 32
	.4byte 16
	.4byte FastShip_B1F_MapBorder
	.4byte FastShip_B1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

