IndigoPlateau_LancesRoom_MapBorder::
	.incbin "data/layouts/IndigoPlateau_LancesRoom/border.bin"

IndigoPlateau_LancesRoom_MapBlockdata::
	.incbin "data/layouts/IndigoPlateau_LancesRoom/map.bin"

	.align 2
IndigoPlateau_LancesRoom_Layout::
	.4byte 10
	.4byte 24
	.4byte IndigoPlateau_LancesRoom_MapBorder
	.4byte IndigoPlateau_LancesRoom_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

