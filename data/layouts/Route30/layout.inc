Route30_MapBorder::
	.incbin "data/layouts/Route30/border.bin"

Route30_MapBlockdata::
	.incbin "data/layouts/Route30/map.bin"

	.align 2
Route30_Layout::
	.4byte 20
	.4byte 54
	.4byte Route30_MapBorder
	.4byte Route30_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

