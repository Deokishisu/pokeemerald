Route35_National_Park_Gate_MapBorder::
	.incbin "data/layouts/Route35_National_Park_Gate/border.bin"

Route35_National_Park_Gate_MapBlockdata::
	.incbin "data/layouts/Route35_National_Park_Gate/map.bin"

	.align 2
Route35_National_Park_Gate_Layout::
	.4byte 8
	.4byte 8
	.4byte Route35_National_Park_Gate_MapBorder
	.4byte Route35_National_Park_Gate_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

