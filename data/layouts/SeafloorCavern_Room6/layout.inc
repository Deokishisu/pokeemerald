SeafloorCavern_Room6_MapBorder::
	.incbin "data/layouts/SeafloorCavern_Room6/border.bin"

SeafloorCavern_Room6_MapBlockdata::
	.incbin "data/layouts/SeafloorCavern_Room6/map.bin"

	.align 2
SeafloorCavern_Room6_Layout::
	.4byte 20
	.4byte 18
	.4byte SeafloorCavern_Room6_MapBorder
	.4byte SeafloorCavern_Room6_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

