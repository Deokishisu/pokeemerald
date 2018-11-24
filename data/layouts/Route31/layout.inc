Route31_MapBorder::
	.incbin "data/layouts/Route31/border.bin"

Route31_MapBlockdata::
	.incbin "data/layouts/Route31/map.bin"

	.align 2
Route31_Layout::
	.4byte 40
	.4byte 18
	.4byte Route31_MapBorder
	.4byte Route31_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

