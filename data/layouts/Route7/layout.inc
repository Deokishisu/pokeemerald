Route7_MapBorder::
	.incbin "data/layouts/Route7/border.bin"

Route7_MapBlockdata::
	.incbin "data/layouts/Route7/map.bin"

	.align 2
Route7_Layout::
	.4byte 20
	.4byte 18
	.4byte Route7_MapBorder
	.4byte Route7_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

