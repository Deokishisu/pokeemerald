TohjoFalls_MapBorder::
	.incbin "data/layouts/TohjoFalls/border.bin"

TohjoFalls_MapBlockdata::
	.incbin "data/layouts/TohjoFalls/map.bin"

	.align 2
TohjoFalls_Layout::
	.4byte 30
	.4byte 18
	.4byte TohjoFalls_MapBorder
	.4byte TohjoFalls_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

