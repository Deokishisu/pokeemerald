Route37_MapBorder::
	.incbin "data/layouts/Route37/border.bin"

Route37_MapBlockdata::
	.incbin "data/layouts/Route37/map.bin"

	.align 2
Route37_Layout::
	.4byte 20
	.4byte 18
	.4byte Route37_MapBorder
	.4byte Route37_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

