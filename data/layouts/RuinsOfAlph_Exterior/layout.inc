RuinsOfAlph_Exterior_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_Exterior/border.bin"

RuinsOfAlph_Exterior_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_Exterior/map.bin"

	.align 2
RuinsOfAlph_Exterior_Layout::
	.4byte 20
	.4byte 36
	.4byte RuinsOfAlph_Exterior_MapBorder
	.4byte RuinsOfAlph_Exterior_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

