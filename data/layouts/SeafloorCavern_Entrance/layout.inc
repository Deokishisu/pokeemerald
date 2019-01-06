SeafloorCavern_Entrance_MapBorder::
	.incbin "data/layouts/SeafloorCavern_Entrance/border.bin"

SeafloorCavern_Entrance_MapBlockdata::
	.incbin "data/layouts/SeafloorCavern_Entrance/map.bin"

	.align 2
SeafloorCavern_Entrance_Layout::
	.4byte 20
	.4byte 18
	.4byte SeafloorCavern_Entrance_MapBorder
	.4byte SeafloorCavern_Entrance_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

