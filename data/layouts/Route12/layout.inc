Route12_MapBorder::
	.incbin "data/layouts/Route12/border.bin"

Route12_MapBlockdata::
	.incbin "data/layouts/Route12/map.bin"

	.align 2
Route12_Layout::
	.4byte 20
	.4byte 54
	.4byte Route12_MapBorder
	.4byte Route12_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

