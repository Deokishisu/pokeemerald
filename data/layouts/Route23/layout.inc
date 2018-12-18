Route23_MapBorder::
	.incbin "data/layouts/Route23/border.bin"

Route23_MapBlockdata::
	.incbin "data/layouts/Route23/map.bin"

	.align 2
Route23_Layout::
	.4byte 20
	.4byte 18
	.4byte Route23_MapBorder
	.4byte Route23_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

