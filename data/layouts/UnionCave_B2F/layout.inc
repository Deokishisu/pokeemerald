UnionCave_B2F_MapBorder::
	.incbin "data/layouts/UnionCave_B2F/border.bin"

UnionCave_B2F_MapBlockdata::
	.incbin "data/layouts/UnionCave_B2F/map.bin"

	.align 2
UnionCave_B2F_Layout::
	.4byte 20
	.4byte 36
	.4byte UnionCave_B2F_MapBorder
	.4byte UnionCave_B2F_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

