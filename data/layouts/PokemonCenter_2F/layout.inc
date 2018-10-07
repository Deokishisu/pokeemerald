PokemonCenter_2F_MapBorder::
	.incbin "data/layouts/PokemonCenter_2F/border.bin"

PokemonCenter_2F_MapBlockdata::
	.incbin "data/layouts/PokemonCenter_2F/map.bin"

	.align 2
PokemonCenter_2F_Layout::
	.4byte 16
	.4byte 8
	.4byte PokemonCenter_2F_MapBorder
	.4byte PokemonCenter_2F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

