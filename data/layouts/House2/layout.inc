House2_MapBorder::
	.incbin "data/layouts/House2/border.bin"

House2_MapBlockdata::
	.incbin "data/layouts/House2/map.bin"

	.align 2
House2_Layout::
	.4byte 8
	.4byte 8
	.4byte House2_MapBorder
	.4byte House2_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

