Route25_MapBorder::
	.incbin "data/layouts/Route25/border.bin"

Route25_MapBlockdata::
	.incbin "data/layouts/Route25/map.bin"

	.align 2
Route25_Layout::
	.4byte 60
	.4byte 18
	.4byte Route25_MapBorder
	.4byte Route25_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

