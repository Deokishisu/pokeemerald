Route22_MapBorder::
	.incbin "data/layouts/Route22/border.bin"

Route22_MapBlockdata::
	.incbin "data/layouts/Route22/map.bin"

	.align 2
Route22_Layout::
	.4byte 40
	.4byte 18
	.4byte Route22_MapBorder
	.4byte Route22_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

