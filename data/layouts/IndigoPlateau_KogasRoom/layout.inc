IndigoPlateau_KogasRoom_MapBorder::
	.incbin "data/layouts/IndigoPlateau_KogasRoom/border.bin"

IndigoPlateau_KogasRoom_MapBlockdata::
	.incbin "data/layouts/IndigoPlateau_KogasRoom/map.bin"

	.align 2
IndigoPlateau_KogasRoom_Layout::
	.4byte 10
	.4byte 18
	.4byte IndigoPlateau_KogasRoom_MapBorder
	.4byte IndigoPlateau_KogasRoom_MapBlockdata
	.4byte gTileset_Building2
	.4byte gTileset_BikeShop

