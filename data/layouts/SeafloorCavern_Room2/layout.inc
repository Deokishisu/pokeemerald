SeafloorCavern_Room2_MapBorder::
	.incbin "data/layouts/SeafloorCavern_Room2/border.bin"

SeafloorCavern_Room2_MapBlockdata::
	.incbin "data/layouts/SeafloorCavern_Room2/map.bin"

	.align 2
SeafloorCavern_Room2_Layout::
	.4byte 20
	.4byte 18
	.4byte SeafloorCavern_Room2_MapBorder
	.4byte SeafloorCavern_Room2_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

