RuinsOfAlph_OmanyteWordRoom_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_OmanyteWordRoom/border.bin"

RuinsOfAlph_OmanyteWordRoom_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_OmanyteWordRoom/map.bin"

	.align 2
RuinsOfAlph_OmanyteWordRoom_Layout::
	.4byte 20
	.4byte 15
	.4byte RuinsOfAlph_OmanyteWordRoom_MapBorder
	.4byte RuinsOfAlph_OmanyteWordRoom_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

