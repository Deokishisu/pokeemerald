Route14_MapBorder::
	.incbin "data/layouts/Route14/border.bin"

Route14_MapBlockdata::
	.incbin "data/layouts/Route14/map.bin"

	.align 2
Route14_Layout::
	.4byte 20
	.4byte 36
	.4byte Route14_MapBorder
	.4byte Route14_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

