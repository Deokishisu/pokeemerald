Route13_MapBorder::
	.incbin "data/layouts/Route13/border.bin"

Route13_MapBlockdata::
	.incbin "data/layouts/Route13/map.bin"

	.align 2
Route13_Layout::
	.4byte 60
	.4byte 18
	.4byte Route13_MapBorder
	.4byte Route13_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

