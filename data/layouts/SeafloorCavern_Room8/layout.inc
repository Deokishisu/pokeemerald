SeafloorCavern_Room8_MapBorder::
	.incbin "data/layouts/SeafloorCavern_Room8/border.bin"

SeafloorCavern_Room8_MapBlockdata::
	.incbin "data/layouts/SeafloorCavern_Room8/map.bin"

	.align 2
SeafloorCavern_Room8_Layout::
	.4byte 20
	.4byte 18
	.4byte SeafloorCavern_Room8_MapBorder
	.4byte SeafloorCavern_Room8_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

