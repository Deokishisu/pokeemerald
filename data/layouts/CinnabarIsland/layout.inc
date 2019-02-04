CinnabarIsland_MapBorder::
	.incbin "data/layouts/CinnabarIsland/border.bin"

CinnabarIsland_MapBlockdata::
	.incbin "data/layouts/CinnabarIsland/map.bin"

	.align 2
CinnabarIsland_Layout::
	.4byte 20
	.4byte 18
	.4byte CinnabarIsland_MapBorder
	.4byte CinnabarIsland_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

