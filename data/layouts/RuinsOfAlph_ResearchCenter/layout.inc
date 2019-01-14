RuinsOfAlph_ResearchCenter_MapBorder::
	.incbin "data/layouts/RuinsOfAlph_ResearchCenter/border.bin"

RuinsOfAlph_ResearchCenter_MapBlockdata::
	.incbin "data/layouts/RuinsOfAlph_ResearchCenter/map.bin"

	.align 2
RuinsOfAlph_ResearchCenter_Layout::
	.4byte 8
	.4byte 8
	.4byte RuinsOfAlph_ResearchCenter_MapBorder
	.4byte RuinsOfAlph_ResearchCenter_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

