IndigoPlateau_BrunosRoom_MapBorder::
	.incbin "data/layouts/IndigoPlateau_BrunosRoom/border.bin"

IndigoPlateau_BrunosRoom_MapBlockdata::
	.incbin "data/layouts/IndigoPlateau_BrunosRoom/map.bin"

	.align 2
IndigoPlateau_BrunosRoom_Layout::
	.4byte 10
	.4byte 18
	.4byte IndigoPlateau_BrunosRoom_MapBorder
	.4byte IndigoPlateau_BrunosRoom_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

