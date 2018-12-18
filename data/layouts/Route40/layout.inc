Route40_MapBorder::
	.incbin "data/layouts/Route40/border.bin"

Route40_MapBlockdata::
	.incbin "data/layouts/Route40/map.bin"

	.align 2
Route40_Layout::
	.4byte 20
	.4byte 36
	.4byte Route40_MapBorder
	.4byte Route40_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

