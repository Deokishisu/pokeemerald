IndigoPlateau_PokemonCenter_1F_MapBorder::
	.incbin "data/layouts/IndigoPlateau_PokemonCenter_1F/border.bin"

IndigoPlateau_PokemonCenter_1F_MapBlockdata::
	.incbin "data/layouts/IndigoPlateau_PokemonCenter_1F/map.bin"

	.align 2
IndigoPlateau_PokemonCenter_1F_Layout::
	.4byte 18
	.4byte 14
	.4byte IndigoPlateau_PokemonCenter_1F_MapBorder
	.4byte IndigoPlateau_PokemonCenter_1F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

