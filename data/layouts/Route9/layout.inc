Route9_MapBorder::
	.incbin "data/layouts/Route9/border.bin"

Route9_MapBlockdata::
	.incbin "data/layouts/Route9/map.bin"

	.align 2
Route9_Layout::
	.4byte 60
	.4byte 18
	.4byte Route9_MapBorder
	.4byte Route9_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

