Route44_MapBorder::
	.incbin "data/layouts/Route44/border.bin"

Route44_MapBlockdata::
	.incbin "data/layouts/Route44/map.bin"

	.align 2
Route44_Layout::
	.4byte 60
	.4byte 18
	.4byte Route44_MapBorder
	.4byte Route44_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

