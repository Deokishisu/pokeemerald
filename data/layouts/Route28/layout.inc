Route28_MapBorder::
	.incbin "data/layouts/Route28/border.bin"

Route28_MapBlockdata::
	.incbin "data/layouts/Route28/map.bin"

	.align 2
Route28_Layout::
	.4byte 40
	.4byte 18
	.4byte Route28_MapBorder
	.4byte Route28_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

