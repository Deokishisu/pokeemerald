Route113_MapBorder::
	.incbin "data/layouts/Route113/border.bin"

Route113_MapBlockdata::
	.incbin "data/layouts/Route113/map.bin"

	.align 2
Route113_Layout::
	.4byte 50
	.4byte 54
	.4byte Route113_MapBorder
	.4byte Route113_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

