Route24_MapBorder::
	.incbin "data/layouts/Route24/border.bin"

Route24_MapBlockdata::
	.incbin "data/layouts/Route24/map.bin"

	.align 2
Route24_Layout::
	.4byte 20
	.4byte 18
	.4byte Route24_MapBorder
	.4byte Route24_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

