RuinsOfAlph_HoOhWordRoom_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_HoOhWordRoom/border.bin"

RuinsOfAlph_HoOhWordRoom_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_HoOhWordRoom/map.bin"

	.align 2
RuinsOfAlph_HoOhWordRoom_Layout::
	.4byte 20
	.4byte 23
	.4byte RuinsOfAlph_HoOhWordRoom_MapBorder
	.4byte RuinsOfAlph_HoOhWordRoom_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

