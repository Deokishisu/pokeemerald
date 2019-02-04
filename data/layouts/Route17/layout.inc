Route17_MapBorder::
	.incbin "data/layouts/Route17/border.bin"

Route17_MapBlockdata::
	.incbin "data/layouts/Route17/map.bin"

	.align 2
Route17_Layout::
	.4byte 20
	.4byte 90
	.4byte Route17_MapBorder
	.4byte Route17_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

