VioletCity_EarlsPokemonAcademy_MapBorder::
	.incbin "data/layouts/VioletCity_EarlsPokemonAcademy/border.bin"

VioletCity_EarlsPokemonAcademy_MapBlockdata::
	.incbin "data/layouts/VioletCity_EarlsPokemonAcademy/map.bin"

	.align 2
VioletCity_EarlsPokemonAcademy_Layout::
	.4byte 8
	.4byte 16
	.4byte VioletCity_EarlsPokemonAcademy_MapBorder
	.4byte VioletCity_EarlsPokemonAcademy_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

