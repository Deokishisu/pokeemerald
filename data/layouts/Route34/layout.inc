Route34_MapBorder::
	.incbin "data/layouts/Route34/border.bin"

Route34_MapBlockdata::
	.incbin "data/layouts/Route34/map.bin"

	.align 2
Route34_Layout::
	.4byte 20
	.4byte 54
	.4byte Route34_MapBorder
	.4byte Route34_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

