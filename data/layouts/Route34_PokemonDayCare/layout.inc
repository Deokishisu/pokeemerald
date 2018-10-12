Route34_PokemonDayCare_MapBorder::
	.incbin "data/layouts/Route34_PokemonDayCare/border.bin"

Route34_PokemonDayCare_MapBlockdata::
	.incbin "data/layouts/Route34_PokemonDayCare/map.bin"

	.align 2
Route34_PokemonDayCare_Layout::
	.4byte 8
	.4byte 8
	.4byte Route34_PokemonDayCare_MapBorder
	.4byte Route34_PokemonDayCare_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

