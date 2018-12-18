Route43_MapBorder::
	.incbin "data/layouts/Route43/border.bin"

Route43_MapBlockdata::
	.incbin "data/layouts/Route43/map.bin"

	.align 2
Route43_Layout::
	.4byte 20
	.4byte 54
	.4byte Route43_MapBorder
	.4byte Route43_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

