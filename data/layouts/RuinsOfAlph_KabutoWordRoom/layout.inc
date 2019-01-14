RuinsOfAlph_KabutoWordRoom_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_KabutoWordRoom/border.bin"

RuinsOfAlph_KabutoWordRoom_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_KabutoWordRoom/map.bin"

	.align 2
RuinsOfAlph_KabutoWordRoom_Layout::
	.4byte 20
	.4byte 13
	.4byte RuinsOfAlph_KabutoWordRoom_MapBorder
	.4byte RuinsOfAlph_KabutoWordRoom_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

