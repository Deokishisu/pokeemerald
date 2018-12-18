Route41_MapBorder::
	.incbin "data/layouts/Route41/border.bin"

Route41_MapBlockdata::
	.incbin "data/layouts/Route41/map.bin"

	.align 2
Route41_Layout::
	.4byte 50
	.4byte 54
	.4byte Route41_MapBorder
	.4byte Route41_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

