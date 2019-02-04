Route3_MapBorder::
	.incbin "data/layouts/Route3/border.bin"

Route3_MapBlockdata::
	.incbin "data/layouts/Route3/map.bin"

	.align 2
Route3_Layout::
	.4byte 60
	.4byte 18
	.4byte Route3_MapBorder
	.4byte Route3_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

