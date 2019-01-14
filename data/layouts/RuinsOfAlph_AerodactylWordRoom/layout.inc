RuinsOfAlph_AerodactylWordRoom_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_AerodactylWordRoom/border.bin"

RuinsOfAlph_AerodactylWordRoom_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_AerodactylWordRoom/map.bin"

	.align 2
RuinsOfAlph_AerodactylWordRoom_Layout::
	.4byte 20
	.4byte 13
	.4byte RuinsOfAlph_AerodactylWordRoom_MapBorder
	.4byte RuinsOfAlph_AerodactylWordRoom_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

