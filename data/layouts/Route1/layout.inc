Route1_MapBorder::
	.incbin "data/layouts/Route1/border.bin"

Route1_MapBlockdata::
	.incbin "data/layouts/Route1/map.bin"

	.align 2
Route1_Layout::
	.4byte 20
	.4byte 36
	.4byte Route1_MapBorder
	.4byte Route1_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

