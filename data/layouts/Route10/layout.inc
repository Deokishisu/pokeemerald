Route10_MapBorder::
	.incbin "data/layouts/Route10/border.bin"

Route10_MapBlockdata::
	.incbin "data/layouts/Route10/map.bin"

	.align 2
Route10_Layout::
	.4byte 20
	.4byte 36
	.4byte Route10_MapBorder
	.4byte Route10_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

