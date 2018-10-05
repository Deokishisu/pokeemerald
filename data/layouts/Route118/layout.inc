Route118_MapBorder::
	.incbin "data/layouts/Route118/border.bin"

Route118_MapBlockdata::
	.incbin "data/layouts/Route118/map.bin"

	.align 2
Route118_Layout::
	.4byte 20
	.4byte 36
	.4byte Route118_MapBorder
	.4byte Route118_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Mauville

