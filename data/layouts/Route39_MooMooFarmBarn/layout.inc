Route39_MooMooFarmBarn_MapBorder::
	.incbin "data/layouts/Route39_MooMooFarmBarn/border.bin"

Route39_MooMooFarmBarn_MapBlockdata::
	.incbin "data/layouts/Route39_MooMooFarmBarn/map.bin"

	.align 2
Route39_MooMooFarmBarn_Layout::
	.4byte 8
	.4byte 8
	.4byte Route39_MooMooFarmBarn_MapBorder
	.4byte Route39_MooMooFarmBarn_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_GenericBuilding

