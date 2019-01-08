UnionCave_1F_MapBorder::
	.incbin "data/layouts/UnionCave_1F/border.bin"

UnionCave_1F_MapBlockdata::
	.incbin "data/layouts/UnionCave_1F/map.bin"

	.align 2
UnionCave_1F_Layout::
	.4byte 20
	.4byte 36
	.4byte UnionCave_1F_MapBorder
	.4byte UnionCave_1F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

