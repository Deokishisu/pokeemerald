SeafloorCavern_Room1_MapBorder::
	.incbin "data/layouts/SeafloorCavern_Room1/border.bin"

SeafloorCavern_Room1_MapBlockdata::
	.incbin "data/layouts/SeafloorCavern_Room1/map.bin"

	.align 2
SeafloorCavern_Room1_Layout::
	.4byte 20
	.4byte 18
	.4byte SeafloorCavern_Room1_MapBorder
	.4byte SeafloorCavern_Room1_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

