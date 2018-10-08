Route30_Mr_Pokemons_House_MapBorder::
	.incbin "data/layouts/Route30_Mr_Pokemons_House/border.bin"

Route30_Mr_Pokemons_House_MapBlockdata::
	.incbin "data/layouts/Route30_Mr_Pokemons_House/map.bin"

	.align 2
Route30_Mr_Pokemons_House_Layout::
	.4byte 8
	.4byte 8
	.4byte Route30_Mr_Pokemons_House_MapBorder
	.4byte Route30_Mr_Pokemons_House_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

