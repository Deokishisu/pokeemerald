Route46_MapBorder::
	.incbin "data/layouts/Route46/border.bin"

Route46_MapBlockdata::
	.incbin "data/layouts/Route46/map.bin"

	.align 2
Route46_Layout::
	.4byte 20
	.4byte 36
	.4byte Route46_MapBorder
	.4byte Route46_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

