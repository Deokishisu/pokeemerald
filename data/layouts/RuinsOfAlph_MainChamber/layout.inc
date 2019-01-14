RuinsOfAlph_MainChamber_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_MainChamber/border.bin"

RuinsOfAlph_MainChamber_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_MainChamber/map.bin"

	.align 2
RuinsOfAlph_MainChamber_Layout::
	.4byte 20
	.4byte 27
	.4byte RuinsOfAlph_MainChamber_MapBorder
	.4byte RuinsOfAlph_MainChamber_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

