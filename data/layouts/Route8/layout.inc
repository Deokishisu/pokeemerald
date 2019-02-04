Route8_MapBorder::
	.incbin "data/layouts/Route8/border.bin"

Route8_MapBlockdata::
	.incbin "data/layouts/Route8/map.bin"

	.align 2
Route8_Layout::
	.4byte 40
	.4byte 18
	.4byte Route8_MapBorder
	.4byte Route8_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

