Route15_MapBorder::
	.incbin "data/layouts/Route15/border.bin"

Route15_MapBlockdata::
	.incbin "data/layouts/Route15/map.bin"

	.align 2
Route15_Layout::
	.4byte 40
	.4byte 18
	.4byte Route15_MapBorder
	.4byte Route15_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

