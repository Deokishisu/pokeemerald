Route102_MapBorder::
	.incbin "data/layouts/Route102/border.bin"

Route102_MapBlockdata::
	.incbin "data/layouts/Route102/map.bin"

	.align 2
Route102_Layout::
	.4byte 20
	.4byte 54
	.4byte Route102_MapBorder
	.4byte Route102_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

