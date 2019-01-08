IlexForest_MapBorder::
	.incbin "data/layouts/IlexForest/border.bin"

IlexForest_MapBlockdata::
	.incbin "data/layouts/IlexForest/map.bin"

	.align 2
IlexForest_Layout::
	.4byte 30
	.4byte 44
	.4byte IlexForest_MapBorder
	.4byte IlexForest_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

