Route19_MapBorder::
	.incbin "data/layouts/Route19/border.bin"

Route19_MapBlockdata::
	.incbin "data/layouts/Route19/map.bin"

	.align 2
Route19_Layout::
	.4byte 20
	.4byte 36
	.4byte Route19_MapBorder
	.4byte Route19_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

