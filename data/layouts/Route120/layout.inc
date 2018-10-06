Route120_MapBorder::
	.incbin "data/layouts/Route120/border.bin"

Route120_MapBlockdata::
	.incbin "data/layouts/Route120/map.bin"

	.align 2
Route120_Layout::
	.4byte 20
	.4byte 108
	.4byte Route120_MapBorder
	.4byte Route120_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Fortree

