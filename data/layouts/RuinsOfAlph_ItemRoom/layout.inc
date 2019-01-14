RuinsOfAlph_ItemRoom_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_ItemRoom/border.bin"

RuinsOfAlph_ItemRoom_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_ItemRoom/map.bin"

	.align 2
RuinsOfAlph_ItemRoom_Layout::
	.4byte 8
	.4byte 10
	.4byte RuinsOfAlph_ItemRoom_MapBorder
	.4byte RuinsOfAlph_ItemRoom_MapBlockdata
	.4byte gTileset_Special
	.4byte gTileset_Petalburg

