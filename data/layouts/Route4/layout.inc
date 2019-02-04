Route4_MapBorder::
	.incbin "data/layouts/Route4/border.bin"

Route4_MapBlockdata::
	.incbin "data/layouts/Route4/map.bin"

	.align 2
Route4_Layout::
	.4byte 40
	.4byte 18
	.4byte Route4_MapBorder
	.4byte Route4_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

