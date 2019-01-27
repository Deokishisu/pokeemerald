IndigoPlateau_KarensRoom_MapBorder::
	.incbin "data/layouts/IndigoPlateau_KarensRoom/border.bin"

IndigoPlateau_KarensRoom_MapBlockdata::
	.incbin "data/layouts/IndigoPlateau_KarensRoom/map.bin"

	.align 2
IndigoPlateau_KarensRoom_Layout::
	.4byte 10
	.4byte 18
	.4byte IndigoPlateau_KarensRoom_MapBorder
	.4byte IndigoPlateau_KarensRoom_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

