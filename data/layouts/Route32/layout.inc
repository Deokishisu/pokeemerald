Route32_MapBorder::
	.incbin "data/layouts/Route32/border.bin"

Route32_MapBlockdata::
	.incbin "data/layouts/Route32/map.bin"

	.align 2
Route32_Layout::
	.4byte 20
	.4byte 90
	.4byte Route32_MapBorder
	.4byte Route32_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

