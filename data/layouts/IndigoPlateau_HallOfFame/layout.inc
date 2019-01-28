IndigoPlateau_HallOfFame_MapBorder::
	.incbin "data/layouts/IndigoPlateau_HallOfFame/border.bin"

IndigoPlateau_HallOfFame_MapBlockdata::
	.incbin "data/layouts/IndigoPlateau_HallOfFame/map.bin"

	.align 2
IndigoPlateau_HallOfFame_Layout::
	.4byte 10
	.4byte 14
	.4byte IndigoPlateau_HallOfFame_MapBorder
	.4byte IndigoPlateau_HallOfFame_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

