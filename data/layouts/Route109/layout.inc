Route109_MapBorder::
	.incbin "data/layouts/Route109/border.bin"

Route109_MapBlockdata::
	.incbin "data/layouts/Route109/map.bin"

	.align 2
Route109_Layout::
	.4byte 20
	.4byte 18
	.4byte Route109_MapBorder
	.4byte Route109_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

