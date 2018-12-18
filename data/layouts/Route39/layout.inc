Route39_MapBorder::
	.incbin "data/layouts/Route39/border.bin"

Route39_MapBlockdata::
	.incbin "data/layouts/Route39/map.bin"

	.align 2
Route39_Layout::
	.4byte 20
	.4byte 36
	.4byte Route39_MapBorder
	.4byte Route39_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

