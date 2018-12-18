BlackthornCity_MapBorder::
	.incbin "data/layouts/BlackthornCity/border.bin"

BlackthornCity_MapBlockdata::
	.incbin "data/layouts/BlackthornCity/map.bin"

	.align 2
BlackthornCity_Layout::
	.4byte 40
	.4byte 36
	.4byte BlackthornCity_MapBorder
	.4byte BlackthornCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

