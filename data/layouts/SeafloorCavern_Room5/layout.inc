SeafloorCavern_Room5_MapBorder::
	.incbin "data/layouts/SeafloorCavern_Room5/border.bin"

SeafloorCavern_Room5_MapBlockdata::
	.incbin "data/layouts/SeafloorCavern_Room5/map.bin"

	.align 2
SeafloorCavern_Room5_Layout::
	.4byte 20
	.4byte 18
	.4byte SeafloorCavern_Room5_MapBorder
	.4byte SeafloorCavern_Room5_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

