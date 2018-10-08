SlateportCity_MapBorder::
	.incbin "data/layouts/SlateportCity/border.bin"

SlateportCity_MapBlockdata::
	.incbin "data/layouts/SlateportCity/map.bin"

	.align 2
SlateportCity_Layout::
	.4byte 40
	.4byte 36
	.4byte SlateportCity_MapBorder
	.4byte SlateportCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

