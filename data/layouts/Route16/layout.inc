Route16_MapBorder::
	.incbin "data/layouts/Route16/border.bin"

Route16_MapBlockdata::
	.incbin "data/layouts/Route16/map.bin"

	.align 2
Route16_Layout::
	.4byte 20
	.4byte 18
	.4byte Route16_MapBorder
	.4byte Route16_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

