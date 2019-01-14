RuinsOfAlph_PuzzleChamber_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_PuzzleChamber/border.bin"

RuinsOfAlph_PuzzleChamber_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_PuzzleChamber/map.bin"

	.align 2
RuinsOfAlph_PuzzleChamber_Layout::
	.4byte 8
	.4byte 10
	.4byte RuinsOfAlph_PuzzleChamber_MapBorder
	.4byte RuinsOfAlph_PuzzleChamber_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

