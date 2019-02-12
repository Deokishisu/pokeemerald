Route32_PokemonCenter_1F_MapScripts:: @ 823B781
	map_script 3, Route32_PokemonCenter_1F_MapScript1_1FC011
	map_script 5, OldaleTown_PokemonCenter_1F_MapScript1_277C30
	.byte 0

Route32_PokemonCenter_1F_MapScript1_1FC011: @ 81FC011
	setrespawn HEAL_LOCATION_ROUTE32
	call OldaleTown_PokemonCenter_1F_EventScript_2718DE
	end
	