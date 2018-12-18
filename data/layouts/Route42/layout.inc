Route42_MapBorder::
	.incbin "data/layouts/Route42/border.bin"

Route42_MapBlockdata::
	.incbin "data/layouts/Route42/map.bin"

	.align 2
Route42_Layout::
	.4byte 60
	.4byte 18
	.4byte Route42_MapBorder
	.4byte Route42_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

