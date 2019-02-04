Route6_MapBorder::
	.incbin "data/layouts/Route6/border.bin"

Route6_MapBlockdata::
	.incbin "data/layouts/Route6/map.bin"

	.align 2
Route6_Layout::
	.4byte 20
	.4byte 18
	.4byte Route6_MapBorder
	.4byte Route6_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

