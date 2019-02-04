Route21_MapBorder::
	.incbin "data/layouts/Route21/border.bin"

Route21_MapBlockdata::
	.incbin "data/layouts/Route21/map.bin"

	.align 2
Route21_Layout::
	.4byte 20
	.4byte 36
	.4byte Route21_MapBorder
	.4byte Route21_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

