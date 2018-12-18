Route36_MapBorder::
	.incbin "data/layouts/Route36/border.bin"

Route36_MapBlockdata::
	.incbin "data/layouts/Route36/map.bin"

	.align 2
Route36_Layout::
	.4byte 60
	.4byte 18
	.4byte Route36_MapBorder
	.4byte Route36_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

