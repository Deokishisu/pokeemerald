IndigoPlateau_WillsRoom_MapBorder::
	.incbin "data/layouts/IndigoPlateau_WillsRoom/border.bin"

IndigoPlateau_WillsRoom_MapBlockdata::
	.incbin "data/layouts/IndigoPlateau_WillsRoom/map.bin"

	.align 2
IndigoPlateau_WillsRoom_Layout::
	.4byte 10
	.4byte 18
	.4byte IndigoPlateau_WillsRoom_MapBorder
	.4byte IndigoPlateau_WillsRoom_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

