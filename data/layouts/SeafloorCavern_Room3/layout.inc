SeafloorCavern_Room3_MapBorder::
	.incbin "data/layouts/SeafloorCavern_Room3/border.bin"

SeafloorCavern_Room3_MapBlockdata::
	.incbin "data/layouts/SeafloorCavern_Room3/map.bin"

	.align 2
SeafloorCavern_Room3_Layout::
	.4byte 20
	.4byte 18
	.4byte SeafloorCavern_Room3_MapBorder
	.4byte SeafloorCavern_Room3_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

