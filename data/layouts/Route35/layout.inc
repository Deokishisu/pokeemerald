Route35_MapBorder::
	.incbin "data/layouts/Route35/border.bin"

Route35_MapBlockdata::
	.incbin "data/layouts/Route35/map.bin"

	.align 2
Route35_Layout::
	.4byte 20
	.4byte 36
	.4byte Route35_MapBorder
	.4byte Route35_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

