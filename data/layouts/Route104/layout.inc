Route104_MapBorder::
	.incbin "data/layouts/Route104/border.bin"

Route104_MapBlockdata::
	.incbin "data/layouts/Route104/map.bin"

	.align 2
Route104_Layout::
	.4byte 20
	.4byte 90
	.4byte Route104_MapBorder
	.4byte Route104_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

