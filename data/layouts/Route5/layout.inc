Route5_MapBorder::
	.incbin "data/layouts/Route5/border.bin"

Route5_MapBlockdata::
	.incbin "data/layouts/Route5/map.bin"

	.align 2
Route5_Layout::
	.4byte 20
	.4byte 18
	.4byte Route5_MapBorder
	.4byte Route5_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

