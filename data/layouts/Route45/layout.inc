Route45_MapBorder::
	.incbin "data/layouts/Route45/border.bin"

Route45_MapBlockdata::
	.incbin "data/layouts/Route45/map.bin"

	.align 2
Route45_Layout::
	.4byte 20
	.4byte 90
	.4byte Route45_MapBorder
	.4byte Route45_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Mauville

