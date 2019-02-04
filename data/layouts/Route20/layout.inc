Route20_MapBorder::
	.incbin "data/layouts/Route20/border.bin"

Route20_MapBlockdata::
	.incbin "data/layouts/Route20/map.bin"

	.align 2
Route20_Layout::
	.4byte 60
	.4byte 18
	.4byte Route20_MapBorder
	.4byte Route20_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

