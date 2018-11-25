Route33_MapBorder::
	.incbin "data/layouts/Route33/border.bin"

Route33_MapBlockdata::
	.incbin "data/layouts/Route33/map.bin"

	.align 2
Route33_Layout::
	.4byte 20
	.4byte 18
	.4byte Route33_MapBorder
	.4byte Route33_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

