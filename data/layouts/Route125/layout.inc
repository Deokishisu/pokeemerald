Route125_MapBorder::
	.incbin "data/layouts/Route125/border.bin"

Route125_MapBlockdata::
	.incbin "data/layouts/Route125/map.bin"

	.align 2
Route125_Layout::
	.4byte 40
	.4byte 36
	.4byte Route125_MapBorder
	.4byte Route125_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Mossdeep

