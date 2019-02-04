Route11_MapBorder::
	.incbin "data/layouts/Route11/border.bin"

Route11_MapBlockdata::
	.incbin "data/layouts/Route11/map.bin"

	.align 2
Route11_Layout::
	.4byte 40
	.4byte 18
	.4byte Route11_MapBorder
	.4byte Route11_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

