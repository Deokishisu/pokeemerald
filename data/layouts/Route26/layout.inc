Route26_MapBorder::
	.incbin "data/layouts/Route26/border.bin"

Route26_MapBlockdata::
	.incbin "data/layouts/Route26/map.bin"

	.align 2
Route26_Layout::
	.4byte 20
	.4byte 108
	.4byte Route26_MapBorder
	.4byte Route26_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

