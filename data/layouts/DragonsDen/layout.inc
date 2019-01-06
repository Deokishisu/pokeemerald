DragonsDen_MapBorder::
	.incbin "data/layouts/DragonsDen/border.bin"

DragonsDen_MapBlockdata::
	.incbin "data/layouts/DragonsDen/map.bin"

	.align 2
DragonsDen_Layout::
	.4byte 40
	.4byte 36
	.4byte DragonsDen_MapBorder
	.4byte DragonsDen_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

