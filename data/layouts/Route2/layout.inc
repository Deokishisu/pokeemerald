Route2_MapBorder::
	.incbin "data/layouts/Route2/border.bin"

Route2_MapBlockdata::
	.incbin "data/layouts/Route2/map.bin"

	.align 2
Route2_Layout::
	.4byte 20
	.4byte 54
	.4byte Route2_MapBorder
	.4byte Route2_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

