Route38_MapBorder::
	.incbin "data/layouts/Route38/border.bin"

Route38_MapBlockdata::
	.incbin "data/layouts/Route38/map.bin"

	.align 2
Route38_Layout::
	.4byte 40
	.4byte 18
	.4byte Route38_MapBorder
	.4byte Route38_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

