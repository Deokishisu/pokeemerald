	.align 2
gTileset_General:: @ 83DF704
	.byte TRUE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_General
	.4byte gTilesetPalettes_General, gTilesetPalettes_GeneralNite, gTilesetPalettes_GeneralMorn, gTilesetPalettes_General
	.4byte gMetatiles_General
	.4byte gMetatileAttributes_General
	.4byte InitTilesetAnim_General

	.align 2
gTileset_Petalburg:: @ 83DF71C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Petalburg
	.4byte gTilesetPalettes_Petalburg, gTilesetPalettes_GeneralNite, gTilesetPalettes_GeneralMorn, gTilesetPalettes_Petalburg
	.4byte gMetatiles_Petalburg
	.4byte gMetatileAttributes_Petalburg
	.4byte InitTilesetAnim_Petalburg

	.align 2
gTileset_Building:: @ 83DF884
	.byte TRUE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_InsideBuilding
	.4byte gTilesetPalettes_InsideBuilding, gTilesetPalettes_InsideBuilding_Nite, gTilesetPalettes_InsideBuilding_DungeonDay, gTilesetPalettes_InsideBuilding_DungeonDark
	.4byte gMetatiles_InsideBuilding
	.4byte gMetatileAttributes_InsideBuilding
	.4byte InitTilesetAnim_Building

	.align 2
gTileset_BikeShop:: @ 83DF9D4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BikeShop
	.4byte gTilesetPalettes_BikeShop, gTilesetPalettes_BikeShop, gTilesetPalettes_BikeShop, gTilesetPalettes_BikeShop
	.4byte gMetatiles_BikeShop
	.4byte gMetatileAttributes_BikeShop
	.4byte InitTilesetAnim_BikeShop

	.align 2
gTileset_GenericBuilding:: @ 83DFB6C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_GenericBuilding
	.4byte gTilesetPalettes_GenericBuilding, gTilesetPalettes_GenericBuilding, gTilesetPalettes_GenericBuilding, gTilesetPalettes_GenericBuilding
	.4byte gMetatiles_GenericBuilding
	.4byte gMetatileAttributes_GenericBuilding
	.4byte NULL @ animation callback

	.align 2
gTileset_Building2:: @ 83DF704
	.byte TRUE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Building2
	.4byte gTilesetPalettes_InsideBuilding, gTilesetPalettes_InsideBuilding_Nite, gTilesetPalettes_InsideBuilding_DungeonDay, gTilesetPalettes_InsideBuilding_DungeonDark
	.4byte gMetatiles_Building2
	.4byte gMetatileAttributes_Building2
	.4byte NULL
	
	.align 2
gTileset_Special:: @ 83DF884
	.byte TRUE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Special
	.4byte gTilesetPalettes_Special, gTilesetPalettes_Special, gTilesetPalettes_Special, gTilesetPalettes_Special
	.4byte gMetatiles_Special
	.4byte gMetatileAttributes_Special
	.4byte NULL

	.align 2
gTileset_BattleFrontierOutsideWest:: @ 83DF854
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleFrontierOutsideWest
	.4byte gTilesetPalettes_BattleFrontierOutsideWest
	.4byte gMetatiles_BattleFrontierOutsideWest
	.4byte gMetatileAttributes_BattleFrontierOutsideWest
	.4byte InitTilesetAnim_BattleFrontierOutsideWest

	.align 2
gTileset_BattleFrontierOutsideEast:: @ 83DF86C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleFrontierOutsideEast
	.4byte gTilesetPalettes_BattleFrontierOutsideEast
	.4byte gMetatiles_BattleFrontierOutsideEast
	.4byte gMetatileAttributes_BattleFrontierOutsideEast
	.4byte InitTilesetAnim_BattleFrontierOutsideEast

	.align 2
gTileset_SecretBaseBrownCave:: @ 83DFA04
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseBrownCave
	.4byte gTilesetPalettes_SecretBaseBrownCave
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseTree:: @ 83DFA1C
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseTree
	.4byte gTilesetPalettes_SecretBaseTree
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseShrub:: @ 83DFA34
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseShrub
	.4byte gTilesetPalettes_SecretBaseShrub
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseBlueCave:: @ 83DFA4C
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseBlueCave
	.4byte gTilesetPalettes_SecretBaseBlueCave
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseYellowCave:: @ 83DFA64
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseYellowCave
	.4byte gTilesetPalettes_SecretBaseYellowCave
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseRedCave:: @ 83DFA7C
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseRedCave
	.4byte gTilesetPalettes_SecretBaseRedCave
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_Contest:: @ 83DFAC4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Contest
	.4byte gTilesetPalettes_Contest
	.4byte gMetatiles_Contest
	.4byte gMetatileAttributes_Contest
	.4byte NULL @ animation callback

    .align 2
gTileset_SecretBase:: @ 83DFC5C
    .byte FALSE @ is compressed
    .byte FALSE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_SecretBase
    .4byte gTilesetPalettes_SecretBase
    .4byte gMetatiles_SecretBasePrimary
    .4byte gMetatileAttributes_SecretBasePrimary
    .4byte NULL @ animation callback

    .align 2
gTilesetPointer_SecretBase:: @ 83DFC74
    .4byte gTileset_SecretBase

    .align 2
gTilesetPointer_SecretBaseRedCave:: @ 83DFC78
    .4byte gTileset_SecretBaseRedCave

    .align 2
gTileset_BattleFrontier:: @ 83DFC94
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattleFrontier
    .4byte gTilesetPalettes_BattleFrontier
    .4byte gMetatiles_BattleFrontier
    .4byte gMetatileAttributes_BattleFrontier
    .4byte NULL @ animation callback

    .align 2
gTileset_BattlePalace:: @ 83DFCAC
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattlePalace
    .4byte gTilesetPalettes_BattlePalace
    .4byte gMetatiles_BattlePalace
    .4byte gMetatileAttributes_BattlePalace
    .4byte NULL @ animation callback

    .align 2
gTileset_BattleDome:: @ 83DFCC4
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattleDome
    .4byte gTilesetPalettes_BattleDome
    .4byte gMetatiles_BattleDome
    .4byte gMetatileAttributes_BattleDome
    .4byte InitTilesetAnim_BattleDome

    .align 2
gTileset_BattleFactory:: @ 83DFCDC
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattleFactory
    .4byte gTilesetPalettes_BattleFactory
    .4byte gMetatiles_BattleFactory
    .4byte gMetatileAttributes_BattleFactory
    .4byte NULL @ animation callback

    .align 2
gTileset_BattlePike:: @ 83DFCF4
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattlePike
    .4byte gTilesetPalettes_BattlePike
    .4byte gMetatiles_BattlePike
    .4byte gMetatileAttributes_BattlePike
    .4byte NULL @ animation callback

    .align 2
gTileset_BattleArena:: @ 83DFD0C
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattleArena
    .4byte gTilesetPalettes_BattleArena
    .4byte gMetatiles_BattleArena
    .4byte gMetatileAttributes_BattleArena
    .4byte NULL @ animation callback

    .align 2
gTileset_BattlePyramid:: @ 83DFD24
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattlePyramid
    .4byte gTilesetPalettes_BattlePyramid
    .4byte gMetatiles_BattlePyramid
    .4byte gMetatileAttributes_BattlePyramid
    .4byte InitTilesetAnim_BattlePyramid

    .align 2
gTileset_TrainerHill:: @ 83DFD84
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_TrainerHill
    .4byte gTilesetPalettes_TrainerHill
    .4byte gMetatiles_TrainerHill
    .4byte gMetatileAttributes_TrainerHill
    .4byte NULL @ animation callback

    .align 2
gTileset_BattleFrontierRankingHall:: @ 83DFDB4
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattleFrontierRankingHall
    .4byte gTilesetPalettes_BattleFrontierRankingHall
    .4byte gMetatiles_BattleFrontierRankingHall
    .4byte gMetatileAttributes_BattleFrontierRankingHall
    .4byte NULL @ animation callback

    .align 2
gTileset_BattleTent:: @ 83DFDCC
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_BattleTent
    .4byte gTilesetPalettes_BattleTent
    .4byte gMetatiles_BattleTent
    .4byte gMetatileAttributes_BattleTent
    .4byte NULL @ animation callback

    .align 2
gTileset_UnionRoom:: @ 83DFDFC
    .byte TRUE @ is compressed
    .byte TRUE @ is secondary tileset
    .2byte 0 @ padding
    .4byte gTilesetTiles_UnionRoom
    .4byte gTilesetPalettes_UnionRoom
    .4byte gMetatiles_UnionRoom
    .4byte gMetatileAttributes_UnionRoom
    .4byte NULL @ animation callback
