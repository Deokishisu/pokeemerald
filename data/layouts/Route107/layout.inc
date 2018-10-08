Route107_MapBorder::
	.incbin "data/layouts/Route107/border.bin"

Route107_MapBlockdata::
	.incbin "data/layouts/Route107/map.bin"

	.align 2
Route107_Layout::
	.4byte 20
	.4byte 36
	.4byte Route107_MapBorder
	.4byte Route107_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

