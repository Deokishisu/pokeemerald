Route18_MapBorder::
	.incbin "data/layouts/Route18/border.bin"

Route18_MapBlockdata::
	.incbin "data/layouts/Route18/map.bin"

	.align 2
Route18_Layout::
	.4byte 20
	.4byte 18
	.4byte Route18_MapBorder
	.4byte Route18_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

