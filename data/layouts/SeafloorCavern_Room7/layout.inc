SeafloorCavern_Room7_MapBorder::
	.incbin "data/layouts/SeafloorCavern_Room7/border.bin"

SeafloorCavern_Room7_MapBlockdata::
	.incbin "data/layouts/SeafloorCavern_Room7/map.bin"

	.align 2
SeafloorCavern_Room7_Layout::
	.4byte 20
	.4byte 18
	.4byte SeafloorCavern_Room7_MapBorder
	.4byte SeafloorCavern_Room7_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

