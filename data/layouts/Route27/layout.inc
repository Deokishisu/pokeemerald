Route27_MapBorder::
	.incbin "data/layouts/Route27/border.bin"

Route27_MapBlockdata::
	.incbin "data/layouts/Route27/map.bin"

	.align 2
Route27_Layout::
	.4byte 80
	.4byte 18
	.4byte Route27_MapBorder
	.4byte Route27_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

