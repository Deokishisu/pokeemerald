const struct WildPokemon gDiglettsCave_LandMons[3][3][7] = //HARDCODE TIME OF DAY ENCOUNTER RATES FOR THIS
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{15, SPECIES_DIGLETT},
				{17, SPECIES_DIGLETT},
				{19, SPECIES_DIGLETT},
				{13, SPECIES_DIGLETT},
				{19, SPECIES_DUGTRIO},
				{24, SPECIES_DUGTRIO},
				{29, SPECIES_DUGTRIO},
		},
		{			//Day     [0][1][?]
				{15, SPECIES_DIGLETT},
				{17, SPECIES_DIGLETT},
				{19, SPECIES_DIGLETT},
				{13, SPECIES_DIGLETT},
				{19, SPECIES_DUGTRIO},
				{24, SPECIES_DUGTRIO},
				{29, SPECIES_DUGTRIO},
		},
		{			//Nite    [0][2][?]
				{15, SPECIES_DIGLETT},
				{17, SPECIES_DIGLETT},
				{19, SPECIES_DIGLETT},
				{13, SPECIES_DIGLETT},
				{19, SPECIES_DUGTRIO},
				{24, SPECIES_DUGTRIO},
				{29, SPECIES_DUGTRIO},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{15, SPECIES_DIGLETT},
				{17, SPECIES_DIGLETT},
				{19, SPECIES_DIGLETT},
				{13, SPECIES_DIGLETT},
				{19, SPECIES_DUGTRIO},
				{24, SPECIES_DUGTRIO},
				{29, SPECIES_DUGTRIO},
		},
		{			//Day     [1][1][?]
				{15, SPECIES_DIGLETT},
				{17, SPECIES_DIGLETT},
				{19, SPECIES_DIGLETT},
				{13, SPECIES_DIGLETT},
				{19, SPECIES_DUGTRIO},
				{24, SPECIES_DUGTRIO},
				{29, SPECIES_DUGTRIO},
		},
		{			//Nite    [1][2][?]
				{15, SPECIES_DIGLETT},
				{17, SPECIES_DIGLETT},
				{19, SPECIES_DIGLETT},
				{13, SPECIES_DIGLETT},
				{19, SPECIES_DUGTRIO},
				{24, SPECIES_DUGTRIO},
				{29, SPECIES_DUGTRIO},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{3, SPECIES_DIGLETT},
				{6, SPECIES_DIGLETT},
				{12, SPECIES_DIGLETT},
				{24, SPECIES_DIGLETT},
				{24, SPECIES_DUGTRIO},
				{24, SPECIES_DUGTRIO},
				{24, SPECIES_DUGTRIO},
		},
		{			//Day     [2][1][?]
				{2, SPECIES_DIGLETT},
				{4, SPECIES_DIGLETT},
				{8, SPECIES_DIGLETT},
				{16, SPECIES_DIGLETT},
				{16, SPECIES_DUGTRIO},
				{16, SPECIES_DUGTRIO},
				{16, SPECIES_DUGTRIO},
		},
		{			//Nite    [2][2][?]
				{4, SPECIES_DIGLETT},
				{8, SPECIES_DIGLETT},
				{16, SPECIES_DIGLETT},
				{32, SPECIES_DIGLETT},
				{32, SPECIES_DUGTRIO},
				{32, SPECIES_DUGTRIO},
				{32, SPECIES_DUGTRIO},
		}
	}
};

const struct WildPokemonInfo gDiglettsCave_LandMonsInfo = {20, gDiglettsCave_LandMons}; //Only map with different encounter rates by time of day
																						//Values are 10(4%) in Morn, 5(2%) in Day, 20(8%) in Nite.
const struct WildPokemon gMtMoon_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_SANDSHREW},
				{12, SPECIES_PARAS},
				{10, SPECIES_SANDSLASH},
				{8, SPECIES_CLEFAIRY},
				{8, SPECIES_CLEFAIRY},
		},
		{			//Day     [0][1][?]
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_SANDSHREW},
				{12, SPECIES_PARAS},
				{10, SPECIES_SANDSLASH},
				{8, SPECIES_CLEFAIRY},
				{8, SPECIES_CLEFAIRY},
		},
		{			//Nite    [0][2][?]
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_SANDSHREW},
				{12, SPECIES_PARAS},
				{10, SPECIES_SANDSLASH},
				{8, SPECIES_CLEFAIRY},
				{8, SPECIES_CLEFAIRY},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_ZUBAT},
				{12, SPECIES_PARAS},
				{10, SPECIES_GEODUDE},
				{8, SPECIES_CLEFAIRY},
				{8, SPECIES_CLEFAIRY},
		},
		{			//Day     [1][1][?]
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_ZUBAT},
				{12, SPECIES_PARAS},
				{10, SPECIES_GEODUDE},
				{8, SPECIES_CLEFAIRY},
				{8, SPECIES_CLEFAIRY},
		},
		{			//Nite    [1][2][?]
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_ZUBAT},
				{12, SPECIES_PARAS},
				{10, SPECIES_GEODUDE},
				{8, SPECIES_CLEFAIRY},
				{8, SPECIES_CLEFAIRY},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_SANDSHREW},
				{12, SPECIES_PARAS},
				{10, SPECIES_GEODUDE},
				{8, SPECIES_CLEFAIRY},
				{8, SPECIES_CLEFAIRY},
		},
		{			//Day     [2][1][?]
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_SANDSHREW},
				{12, SPECIES_PARAS},
				{10, SPECIES_GEODUDE},
				{8, SPECIES_CLEFAIRY},
				{8, SPECIES_CLEFAIRY},
		},
		{			//Nite    [2][2][?]
				{6, SPECIES_ZUBAT},
				{8, SPECIES_GEODUDE},
				{8, SPECIES_CLEFAIRY},
				{12, SPECIES_PARAS},
				{10, SPECIES_GEODUDE},
				{12, SPECIES_CLEFAIRY},
				{12, SPECIES_CLEFAIRY},
		}
	}
};

const struct WildPokemonInfo gMtMoon_LandMonsInfo = {15, gMtMoon_LandMons}; //6% encounter rate

const struct WildPokemon gRockTunnel_1F_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{10, SPECIES_CUBONE},
				{10, SPECIES_GEODUDE},
				{12, SPECIES_MACHOP},
				{8, SPECIES_ZUBAT},
				{14, SPECIES_MACHOKE},
				{13, SPECIES_CUBONE},
				{13, SPECIES_CUBONE},
		},
		{			//Day     [0][1][?]
				{10, SPECIES_CUBONE},
				{10, SPECIES_GEODUDE},
				{12, SPECIES_MACHOP},
				{8, SPECIES_ZUBAT},
				{14, SPECIES_MACHOKE},
				{13, SPECIES_CUBONE},
				{13, SPECIES_CUBONE},
		},
		{			//Nite    [0][2][?]
				{10, SPECIES_CUBONE},
				{10, SPECIES_GEODUDE},
				{12, SPECIES_MACHOP},
				{8, SPECIES_ZUBAT},
				{14, SPECIES_MACHOKE},
				{13, SPECIES_CUBONE},
				{13, SPECIES_CUBONE},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{10, SPECIES_CUBONE},
				{10, SPECIES_GEODUDE},
				{12, SPECIES_MACHOP},
				{8, SPECIES_ZUBAT},
				{14, SPECIES_MACHOKE},
				{13, SPECIES_CUBONE},
				{13, SPECIES_CUBONE},
		},
		{			//Day     [1][1][?]
				{10, SPECIES_CUBONE},
				{10, SPECIES_GEODUDE},
				{12, SPECIES_MACHOP},
				{8, SPECIES_ZUBAT},
				{14, SPECIES_MACHOKE},
				{13, SPECIES_CUBONE},
				{13, SPECIES_CUBONE},
		},
		{			//Nite    [1][2][?]
				{10, SPECIES_CUBONE},
				{10, SPECIES_GEODUDE},
				{12, SPECIES_MACHOP},
				{8, SPECIES_ZUBAT},
				{14, SPECIES_MACHOKE},
				{13, SPECIES_CUBONE},
				{13, SPECIES_CUBONE},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{10, SPECIES_CUBONE},
				{11, SPECIES_GEODUDE},
				{12, SPECIES_MACHOP},
				{12, SPECIES_ZUBAT},
				{15, SPECIES_MACHOKE},
				{12, SPECIES_MAROWAK},
				{12, SPECIES_MAROWAK},
		},
		{			//Day     [2][1][?]
				{10, SPECIES_CUBONE},
				{11, SPECIES_GEODUDE},
				{12, SPECIES_MACHOP},
				{12, SPECIES_ZUBAT},
				{15, SPECIES_MACHOKE},
				{12, SPECIES_MAROWAK},
				{12, SPECIES_MAROWAK},
		},
		{			//Nite    [2][2][?]
				{12, SPECIES_ZUBAT},
				{11, SPECIES_GEODUDE},
				{12, SPECIES_GEODUDE},
				{17, SPECIES_HAUNTER},
				{15, SPECIES_ZUBAT},
				{15, SPECIES_ZUBAT},
				{15, SPECIES_ZUBAT},
		}
	}
};

const struct WildPokemonInfo gRockTunnel_1F_LandMonsInfo = {15, gRockTunnel_1F_LandMons}; //6% encounter rate

const struct WildPokemon gRockTunnel_B1F_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{12, SPECIES_CUBONE},
				{12, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{10, SPECIES_ZUBAT},
				{14, SPECIES_MAROWAK},
				{14, SPECIES_KANGASKHAN},
				{14, SPECIES_KANGASKHAN},
		},
		{			//Day     [0][1][?]
				{12, SPECIES_CUBONE},
				{12, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{10, SPECIES_ZUBAT},
				{14, SPECIES_MAROWAK},
				{14, SPECIES_KANGASKHAN},
				{14, SPECIES_KANGASKHAN},
		},
		{			//Nite    [0][2][?]
				{12, SPECIES_CUBONE},
				{12, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{10, SPECIES_ZUBAT},
				{14, SPECIES_MAROWAK},
				{14, SPECIES_KANGASKHAN},
				{14, SPECIES_KANGASKHAN},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{12, SPECIES_CUBONE},
				{12, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{10, SPECIES_ZUBAT},
				{14, SPECIES_MAROWAK},
				{14, SPECIES_KANGASKHAN},
				{14, SPECIES_KANGASKHAN},
		},
		{			//Day     [1][1][?]
				{12, SPECIES_CUBONE},
				{12, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{10, SPECIES_ZUBAT},
				{14, SPECIES_MAROWAK},
				{14, SPECIES_KANGASKHAN},
				{14, SPECIES_KANGASKHAN},
		},
		{			//Nite    [1][2][?]
				{12, SPECIES_CUBONE},
				{12, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{10, SPECIES_ZUBAT},
				{14, SPECIES_MAROWAK},
				{14, SPECIES_KANGASKHAN},
				{14, SPECIES_KANGASKHAN},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{12, SPECIES_CUBONE},
				{14, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{12, SPECIES_ZUBAT},
				{15, SPECIES_MAROWAK},
				{15, SPECIES_KANGASKHAN},
				{15, SPECIES_KANGASKHAN},
		},
		{			//Day     [2][1][?]
				{12, SPECIES_CUBONE},
				{14, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{12, SPECIES_ZUBAT},
				{15, SPECIES_MAROWAK},
				{15, SPECIES_KANGASKHAN},
				{15, SPECIES_KANGASKHAN},
		},
		{			//Nite    [2][2][?]
				{12, SPECIES_ZUBAT},
				{14, SPECIES_GEODUDE},
				{16, SPECIES_ONIX},
				{15, SPECIES_ZUBAT},
				{15, SPECIES_HAUNTER},
				{15, SPECIES_GOLBAT},
				{15, SPECIES_GOLBAT},
		}
	}
};

const struct WildPokemonInfo gRockTunnel_B1F_LandMonsInfo = {15, gRockTunnel_B1F_LandMons}; //6% encounter rate

const struct WildPokemon gVictoryRoad_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{32, SPECIES_GRAVELER},
				{32, SPECIES_GOLBAT},
				{33, SPECIES_URSARING},
				{34, SPECIES_ONIX},
				{36, SPECIES_ONIX},
				{35, SPECIES_RHYHORN},
				{35, SPECIES_RHYHORN},
		},
		{			//Day     [0][1][?]
				{32, SPECIES_GRAVELER},
				{32, SPECIES_GOLBAT},
				{33, SPECIES_URSARING},
				{34, SPECIES_ONIX},
				{36, SPECIES_ONIX},
				{35, SPECIES_RHYHORN},
				{35, SPECIES_RHYHORN},
		},
		{			//Nite    [0][2][?]
				{32, SPECIES_GRAVELER},
				{32, SPECIES_GOLBAT},
				{33, SPECIES_URSARING},
				{34, SPECIES_ONIX},
				{36, SPECIES_ONIX},
				{35, SPECIES_RHYHORN},
				{35, SPECIES_RHYHORN},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{32, SPECIES_GRAVELER},
				{32, SPECIES_GOLBAT},
				{33, SPECIES_DONPHAN},
				{34, SPECIES_ONIX},
				{36, SPECIES_ONIX},
				{35, SPECIES_RHYHORN},
				{35, SPECIES_RHYHORN},
		},
		{			//Day     [1][1][?]
				{32, SPECIES_GRAVELER},
				{32, SPECIES_GOLBAT},
				{33, SPECIES_DONPHAN},
				{34, SPECIES_ONIX},
				{36, SPECIES_ONIX},
				{35, SPECIES_RHYHORN},
				{35, SPECIES_RHYHORN},
		},
		{			//Nite    [1][2][?]
				{32, SPECIES_GRAVELER},
				{32, SPECIES_GOLBAT},
				{33, SPECIES_DONPHAN},
				{34, SPECIES_ONIX},
				{36, SPECIES_ONIX},
				{35, SPECIES_RHYHORN},
				{35, SPECIES_RHYHORN},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{34, SPECIES_GRAVELER},
				{32, SPECIES_RHYHORN},
				{33, SPECIES_ONIX},
				{34, SPECIES_GOLBAT},
				{35, SPECIES_SANDSLASH},
				{35, SPECIES_RHYDON},
				{35, SPECIES_RHYDON},
		},
		{			//Day     [2][1][?]
				{34, SPECIES_GRAVELER},
				{32, SPECIES_RHYHORN},
				{33, SPECIES_ONIX},
				{34, SPECIES_GOLBAT},
				{35, SPECIES_SANDSLASH},
				{35, SPECIES_RHYDON},
				{35, SPECIES_RHYDON},
		},
		{			//Nite    [2][2][?]
				{34, SPECIES_GOLBAT},
				{34, SPECIES_GRAVELER},
				{32, SPECIES_ONIX},
				{36, SPECIES_GRAVELER},
				{38, SPECIES_GRAVELER},
				{40, SPECIES_GRAVELER},
				{40, SPECIES_GRAVELER},
		}
	}
};

const struct WildPokemonInfo gVictoryRoad_LandMonsInfo = {15, gVictoryRoad_LandMons}; //6% encounter rate

const struct WildPokemon gTohjoFalls_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{22, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		},
		{			//Day     [0][1][?]
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{22, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		},
		{			//Nite    [0][2][?]
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{22, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{22, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		},
		{			//Day     [1][1][?]
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{22, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		},
		{			//Nite    [1][2][?]
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{22, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{24, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		},
		{			//Day     [2][1][?]
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{24, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		},
		{			//Nite    [2][2][?]
				{22, SPECIES_ZUBAT},
				{22, SPECIES_RATICATE},
				{24, SPECIES_GOLBAT},
				{21, SPECIES_SLOWPOKE},
				{20, SPECIES_RATTATA},
				{23, SPECIES_SLOWPOKE},
				{23, SPECIES_SLOWPOKE},
		}
	}
};

const struct WildPokemonInfo gTohjoFalls_LandMonsInfo = {10, gTohjoFalls_LandMons}; //4% encounter rate

const struct WildPokemon gRoute1_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{2, SPECIES_PIDGEY},
				{2, SPECIES_RATTATA},
				{3, SPECIES_SENTRET},
				{3, SPECIES_PIDGEY},
				{6, SPECIES_FURRET},
				{4, SPECIES_PIDGEY},
				{4, SPECIES_PIDGEY},
		},
		{			//Day     [0][1][?]
				{2, SPECIES_PIDGEY},
				{2, SPECIES_RATTATA},
				{3, SPECIES_SENTRET},
				{3, SPECIES_PIDGEY},
				{6, SPECIES_FURRET},
				{4, SPECIES_PIDGEY},
				{4, SPECIES_PIDGEY},
		},
		{			//Nite    [0][2][?]
				{2, SPECIES_HOOTHOOT},
				{2, SPECIES_RATTATA},
				{3, SPECIES_RATTATA},
				{3, SPECIES_HOOTHOOT},
				{6, SPECIES_RATTATA},
				{4, SPECIES_HOOTHOOT},
				{4, SPECIES_HOOTHOOT},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{2, SPECIES_PIDGEY},
				{2, SPECIES_RATTATA},
				{3, SPECIES_SENTRET},
				{3, SPECIES_PIDGEY},
				{6, SPECIES_FURRET},
				{4, SPECIES_PIDGEY},
				{4, SPECIES_PIDGEY},
		},
		{			//Day     [1][1][?]
				{2, SPECIES_PIDGEY},
				{2, SPECIES_RATTATA},
				{3, SPECIES_SENTRET},
				{3, SPECIES_PIDGEY},
				{6, SPECIES_FURRET},
				{4, SPECIES_PIDGEY},
				{4, SPECIES_PIDGEY},
		},
		{			//Nite    [1][2][?]
				{2, SPECIES_HOOTHOOT},
				{2, SPECIES_RATTATA},
				{3, SPECIES_RATTATA},
				{3, SPECIES_HOOTHOOT},
				{6, SPECIES_RATTATA},
				{4, SPECIES_HOOTHOOT},
				{4, SPECIES_HOOTHOOT},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{2, SPECIES_PIDGEY},
				{2, SPECIES_RATTATA},
				{3, SPECIES_SENTRET},
				{3, SPECIES_PIDGEY},
				{6, SPECIES_FURRET},
				{4, SPECIES_PIDGEY},
				{4, SPECIES_PIDGEY},
		},
		{			//Day     [2][1][?]
				{2, SPECIES_PIDGEY},
				{2, SPECIES_RATTATA},
				{3, SPECIES_SENTRET},
				{3, SPECIES_PIDGEY},
				{6, SPECIES_FURRET},
				{4, SPECIES_PIDGEY},
				{4, SPECIES_PIDGEY},
		},
		{			//Nite    [2][2][?]
				{2, SPECIES_HOOTHOOT},
				{2, SPECIES_RATTATA},
				{3, SPECIES_RATTATA},
				{3, SPECIES_HOOTHOOT},
				{6, SPECIES_RATICATE},
				{4, SPECIES_HOOTHOOT},
				{4, SPECIES_HOOTHOOT},
		}
	}
};

const struct WildPokemonInfo gRoute1_LandMonsInfo = {25, gRoute1_LandMons}; //10% encounter rate

const struct WildPokemon gRoute2_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{3, SPECIES_CATERPIE},
				{3, SPECIES_PIDGEY},
				{5, SPECIES_METAPOD},
				{7, SPECIES_BUTTERFREE},
				{7, SPECIES_PIDGEOTTO},
				{4, SPECIES_PIKACHU},
				{4, SPECIES_PIKACHU},
		},
		{			//Day     [0][1][?]
				{3, SPECIES_CATERPIE},
				{3, SPECIES_PIDGEY},
				{5, SPECIES_METAPOD},
				{7, SPECIES_PIDGEY},
				{7, SPECIES_PIDGEOTTO},
				{4, SPECIES_PIKACHU},
				{4, SPECIES_PIKACHU},
		},
		{			//Nite    [0][2][?]
				{3, SPECIES_HOOTHOOT},
				{3, SPECIES_SPINARAK},
				{5, SPECIES_HOOTHOOT},
				{7, SPECIES_NOCTOWL},
				{7, SPECIES_ARIADOS},
				{4, SPECIES_PIKACHU},
				{4, SPECIES_PIKACHU},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{3, SPECIES_WEEDLE},
				{3, SPECIES_LEDYBA},
				{5, SPECIES_KAKUNA},
				{7, SPECIES_BEEDRILL},
				{7, SPECIES_LEDIAN},
				{4, SPECIES_PIKACHU},
				{4, SPECIES_PIKACHU},
		},
		{			//Day     [1][1][?]
				{3, SPECIES_WEEDLE},
				{3, SPECIES_PIDGEY},
				{5, SPECIES_KAKUNA},
				{7, SPECIES_PIDGEY},
				{7, SPECIES_PIDGEOTTO},
				{4, SPECIES_PIKACHU},
				{4, SPECIES_PIKACHU},
		},
		{			//Nite    [1][2][?]
				{3, SPECIES_HOOTHOOT},
				{3, SPECIES_HOOTHOOT},
				{5, SPECIES_HOOTHOOT},
				{7, SPECIES_NOCTOWL},
				{7, SPECIES_NOCTOWL},
				{4, SPECIES_PIKACHU},
				{4, SPECIES_PIKACHU},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{3, SPECIES_CATERPIE},
				{3, SPECIES_LEDYBA},
				{5, SPECIES_PIDGEY},
				{7, SPECIES_BUTTERFREE},
				{7, SPECIES_LEDIAN},
				{4, SPECIES_PIKACHU},
				{4, SPECIES_PIKACHU},
		},
		{			//Day     [2][1][?]
				{3, SPECIES_CATERPIE},
				{3, SPECIES_PIDGEY},
				{5, SPECIES_PIDGEY},
				{7, SPECIES_BUTTERFREE},
				{7, SPECIES_PIDGEOTTO},
				{4, SPECIES_PIKACHU},
				{4, SPECIES_PIKACHU},
		},
		{			//Nite    [2][2][?]
				{3, SPECIES_HOOTHOOT},
				{3, SPECIES_SPINARAK},
				{5, SPECIES_HOOTHOOT},
				{7, SPECIES_NOCTOWL},
				{7, SPECIES_ARIADOS},
				{4, SPECIES_NOCTOWL},
				{4, SPECIES_NOCTOWL},
		}
	}
};

const struct WildPokemonInfo gRoute2_LandMonsInfo = {25, gRoute2_LandMons}; //10% encounter rate

const struct WildPokemon gRoute3_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_SPEAROW},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_RATTATA},
				{8, SPECIES_SPEAROW},
				{8, SPECIES_SPEAROW},
		},
		{			//Day     [0][1][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_SPEAROW},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_RATTATA},
				{8, SPECIES_SPEAROW},
				{8, SPECIES_SPEAROW},
		},
		{			//Nite    [0][2][?]
				{5, SPECIES_RATTATA},
				{5, SPECIES_ZUBAT},
				{8, SPECIES_RATTATA},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_RATTATA},
				{8, SPECIES_RATTATA},
				{8, SPECIES_RATTATA},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_EKANS},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_ARBOK},
				{8, SPECIES_SPEAROW},
				{8, SPECIES_SPEAROW},
		},
		{			//Day     [1][1][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_EKANS},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_ARBOK},
				{8, SPECIES_SPEAROW},
				{8, SPECIES_SPEAROW},
		},
		{			//Nite    [1][2][?]
				{5, SPECIES_RATTATA},
				{5, SPECIES_ZUBAT},
				{8, SPECIES_EKANS},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_ARBOK},
				{8, SPECIES_RATTATA},
				{8, SPECIES_RATTATA},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_EKANS},
				{10, SPECIES_RATICATE},
				{10, SPECIES_ARBOK},
				{10, SPECIES_SANDSHREW},
				{10, SPECIES_SANDSHREW},
		},
		{			//Day     [2][1][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_EKANS},
				{10, SPECIES_RATICATE},
				{10, SPECIES_ARBOK},
				{10, SPECIES_SANDSHREW},
				{10, SPECIES_SANDSHREW},
		},
		{			//Nite    [2][2][?]
				{5, SPECIES_RATTATA},
				{10, SPECIES_RATTATA},
				{10, SPECIES_RATICATE},
				{6, SPECIES_ZUBAT},
				{5, SPECIES_RATTATA},
				{6, SPECIES_CLEFAIRY},
				{6, SPECIES_CLEFAIRY},
		}
	}
};

const struct WildPokemonInfo gRoute3_LandMonsInfo = {25, gRoute3_LandMons}; //10% encounter rate

const struct WildPokemon gRoute4_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_SPEAROW},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_RATTATA},
				{8, SPECIES_SPEAROW},
				{8, SPECIES_SPEAROW},
		},
		{			//Day     [0][1][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_SPEAROW},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_RATTATA},
				{8, SPECIES_SPEAROW},
				{8, SPECIES_SPEAROW},
		},
		{			//Nite    [0][2][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_ZUBAT},
				{8, SPECIES_RATTATA},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_RATTATA},
				{8, SPECIES_RATTATA},
				{8, SPECIES_RATTATA},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_EKANS},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_ARBOK},
				{8, SPECIES_SPEAROW},
				{8, SPECIES_SPEAROW},
		},
		{			//Day     [1][1][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_EKANS},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_ARBOK},
				{8, SPECIES_SPEAROW},
				{8, SPECIES_SPEAROW},
		},
		{			//Nite    [1][2][?]
				{5, SPECIES_RATTATA},
				{5, SPECIES_ZUBAT},
				{8, SPECIES_EKANS},
				{6, SPECIES_JIGGLYPUFF},
				{10, SPECIES_ARBOK},
				{8, SPECIES_RATTATA},
				{8, SPECIES_RATTATA},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_EKANS},
				{10, SPECIES_RATICATE},
				{10, SPECIES_ARBOK},
				{10, SPECIES_SANDSHREW},
				{10, SPECIES_SANDSHREW},
		},
		{			//Day     [2][1][?]
				{5, SPECIES_SPEAROW},
				{5, SPECIES_RATTATA},
				{8, SPECIES_EKANS},
				{10, SPECIES_RATICATE},
				{10, SPECIES_ARBOK},
				{10, SPECIES_SANDSHREW},
				{10, SPECIES_SANDSHREW},
		},
		{			//Nite    [2][2][?]
				{5, SPECIES_RATTATA},
				{10, SPECIES_RATTATA},
				{10, SPECIES_RATICATE},
				{6, SPECIES_ZUBAT},
				{5, SPECIES_RATTATA},
				{6, SPECIES_CLEFAIRY},
				{6, SPECIES_CLEFAIRY},
		}
	}
};

const struct WildPokemonInfo gRoute4_LandMonsInfo = {25, gRoute4_LandMons}; //10% encounter rate

const struct WildPokemon gRoute5_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{13, SPECIES_PIDGEY},
				{13, SPECIES_BELLSPROUT},
				{14, SPECIES_PIDGEY},
				{15, SPECIES_PIDGEY},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Day     [0][1][?]
				{13, SPECIES_PIDGEY},
				{13, SPECIES_BELLSPROUT},
				{14, SPECIES_PIDGEY},
				{15, SPECIES_PIDGEY},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Nite    [0][2][?]
				{13, SPECIES_ODDISH},
				{14, SPECIES_ODDISH},
				{13, SPECIES_BELLSPROUT},
				{15, SPECIES_GLOOM},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{13, SPECIES_PIDGEY},
				{13, SPECIES_BELLSPROUT},
				{14, SPECIES_MEOWTH},
				{15, SPECIES_PIDGEY},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Day     [1][1][?]
				{13, SPECIES_PIDGEY},
				{13, SPECIES_BELLSPROUT},
				{14, SPECIES_MEOWTH},
				{15, SPECIES_PIDGEY},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Nite    [1][2][?]
				{13, SPECIES_ODDISH},
				{14, SPECIES_MEOWTH},
				{13, SPECIES_BELLSPROUT},
				{15, SPECIES_GLOOM},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{13, SPECIES_PIDGEY},
				{13, SPECIES_SNUBBULL},
				{15, SPECIES_PIDGEOTTO},
				{12, SPECIES_ABRA},
				{14, SPECIES_JIGGLYPUFF},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Day     [2][1][?]
				{13, SPECIES_PIDGEY},
				{13, SPECIES_SNUBBULL},
				{15, SPECIES_PIDGEOTTO},
				{12, SPECIES_ABRA},
				{14, SPECIES_JIGGLYPUFF},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Nite    [2][2][?]
				{13, SPECIES_HOOTHOOT},
				{13, SPECIES_MEOWTH},
				{15, SPECIES_NOCTOWL},
				{12, SPECIES_ABRA},
				{14, SPECIES_JIGGLYPUFF},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		}
	}
};

const struct WildPokemonInfo gRoute5_LandMonsInfo = {25, gRoute5_LandMons}; //10% encounter rate

const struct WildPokemon gRoute6_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{13, SPECIES_PIDGEY},
				{13, SPECIES_BELLSPROUT},
				{14, SPECIES_PIDGEY},
				{15, SPECIES_MAGNEMITE},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Day     [0][1][?]
				{13, SPECIES_PIDGEY},
				{13, SPECIES_BELLSPROUT},
				{14, SPECIES_PIDGEY},
				{15, SPECIES_MAGNEMITE},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Nite    [0][2][?]
				{13, SPECIES_ODDISH},
				{14, SPECIES_ODDISH},
				{13, SPECIES_BELLSPROUT},
				{15, SPECIES_MAGNEMITE},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{13, SPECIES_PIDGEY},
				{13, SPECIES_BELLSPROUT},
				{14, SPECIES_MEOWTH},
				{15, SPECIES_MAGNEMITE},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Day     [1][1][?]
				{13, SPECIES_PIDGEY},
				{13, SPECIES_BELLSPROUT},
				{14, SPECIES_MEOWTH},
				{15, SPECIES_MAGNEMITE},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		},
		{			//Nite    [1][2][?]
				{13, SPECIES_ODDISH},
				{14, SPECIES_MEOWTH},
				{13, SPECIES_BELLSPROUT},
				{15, SPECIES_MAGNEMITE},
				{12, SPECIES_ABRA},
				{14, SPECIES_ABRA},
				{14, SPECIES_ABRA},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{13, SPECIES_RATTATA},
				{13, SPECIES_SNUBBULL},
				{14, SPECIES_MAGNEMITE},
				{15, SPECIES_RATICATE},
				{12, SPECIES_JIGGLYPUFF},
				{15, SPECIES_GRANBULL},
				{15, SPECIES_GRANBULL},
		},
		{			//Day     [2][1][?]
				{13, SPECIES_RATTATA},
				{13, SPECIES_SNUBBULL},
				{14, SPECIES_MAGNEMITE},
				{15, SPECIES_RATICATE},
				{12, SPECIES_JIGGLYPUFF},
				{15, SPECIES_GRANBULL},
				{15, SPECIES_GRANBULL},
		},
		{			//Nite    [2][2][?]
				{13, SPECIES_MEOWTH},
				{13, SPECIES_DROWZEE},
				{14, SPECIES_MAGNEMITE},
				{15, SPECIES_PSYDUCK},
				{12, SPECIES_JIGGLYPUFF},
				{15, SPECIES_RATICATE},
				{15, SPECIES_RATICATE},
		}
	}
};

const struct WildPokemonInfo gRoute6_LandMonsInfo = {25, gRoute6_LandMons}; //10% encounter rate

const struct WildPokemon gRoute7_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{17, SPECIES_RATTATA},
				{17, SPECIES_SPEAROW},
				{18, SPECIES_GROWLITHE},
				{19, SPECIES_RATICATE},
				{19, SPECIES_RATTATA},
				{15, SPECIES_RATTATA},
				{15, SPECIES_RATTATA},
		},
		{			//Day     [0][1][?]
				{17, SPECIES_RATTATA},
				{17, SPECIES_SPEAROW},
				{18, SPECIES_GROWLITHE},
				{19, SPECIES_RATICATE},
				{19, SPECIES_RATTATA},
				{15, SPECIES_GROWLITHE},
				{15, SPECIES_GROWLITHE},
		},
		{			//Nite    [0][2][?]
				{17, SPECIES_RATTATA},
				{17, SPECIES_MURKROW},
				{18, SPECIES_GROWLITHE},
				{19, SPECIES_RATICATE},
				{19, SPECIES_MURKROW},
				{15, SPECIES_HOUNDOUR},
				{15, SPECIES_HOUNDOUR},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{17, SPECIES_MEOWTH},
				{17, SPECIES_SPEAROW},
				{18, SPECIES_VULPIX},
				{19, SPECIES_RATICATE},
				{19, SPECIES_PERSIAN},
				{15, SPECIES_RATTATA},
				{15, SPECIES_RATTATA},
		},
		{			//Day     [1][1][?]
				{17, SPECIES_MEOWTH},
				{17, SPECIES_SPEAROW},
				{18, SPECIES_VULPIX},
				{19, SPECIES_RATICATE},
				{19, SPECIES_PERSIAN},
				{15, SPECIES_VULPIX},
				{15, SPECIES_VULPIX},
		},
		{			//Nite    [1][2][?]
				{17, SPECIES_MEOWTH},
				{17, SPECIES_MURKROW},
				{18, SPECIES_VULPIX},
				{19, SPECIES_RATICATE},
				{19, SPECIES_PERSIAN},
				{15, SPECIES_HOUNDOUR},
				{15, SPECIES_HOUNDOUR},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{17, SPECIES_RATTATA},
				{17, SPECIES_SPEAROW},
				{18, SPECIES_SNUBBULL},
				{18, SPECIES_RATICATE},
				{18, SPECIES_JIGGLYPUFF},
				{16, SPECIES_ABRA},
				{16, SPECIES_ABRA},
		},
		{			//Day     [2][1][?]
				{17, SPECIES_RATTATA},
				{17, SPECIES_SPEAROW},
				{18, SPECIES_SNUBBULL},
				{18, SPECIES_RATICATE},
				{18, SPECIES_JIGGLYPUFF},
				{16, SPECIES_ABRA},
				{16, SPECIES_ABRA},
		},
		{			//Nite    [2][2][?]
				{17, SPECIES_MEOWTH},
				{17, SPECIES_MURKROW},
				{18, SPECIES_HOUNDOUR},
				{18, SPECIES_PERSIAN},
				{18, SPECIES_JIGGLYPUFF},
				{16, SPECIES_ABRA},
				{16, SPECIES_ABRA},
		}
	}
};

const struct WildPokemonInfo gRoute7_LandMonsInfo = {25, gRoute7_LandMons}; //10% encounter rate

const struct WildPokemon gRoute8_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{17, SPECIES_PIDGEOTTO},
				{19, SPECIES_PIDGEOTTO},
				{15, SPECIES_ABRA},
				{18, SPECIES_GROWLITHE},
				{17, SPECIES_PIDGEOTTO},
				{15, SPECIES_KADABRA},
				{15, SPECIES_KADABRA},
		},
		{			//Day     [0][1][?]
				{17, SPECIES_PIDGEOTTO},
				{19, SPECIES_PIDGEOTTO},
				{15, SPECIES_ABRA},
				{18, SPECIES_GROWLITHE},
				{17, SPECIES_PIDGEOTTO},
				{15, SPECIES_KADABRA},
				{15, SPECIES_KADABRA},
		},
		{			//Nite    [0][2][?]
				{17, SPECIES_NOCTOWL},
				{20, SPECIES_HAUNTER},
				{15, SPECIES_ABRA},
				{19, SPECIES_NOCTOWL},
				{18, SPECIES_GROWLITHE},
				{15, SPECIES_KADABRA},
				{15, SPECIES_KADABRA},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{17, SPECIES_MEOWTH},
				{19, SPECIES_PIDGEOTTO},
				{15, SPECIES_ABRA},
				{18, SPECIES_VULPIX},
				{17, SPECIES_PIDGEOTTO},
				{15, SPECIES_KADABRA},
				{15, SPECIES_KADABRA},
		},
		{			//Day     [1][1][?]
				{17, SPECIES_MEOWTH},
				{19, SPECIES_PIDGEOTTO},
				{15, SPECIES_ABRA},
				{18, SPECIES_VULPIX},
				{17, SPECIES_PIDGEOTTO},
				{15, SPECIES_KADABRA},
				{15, SPECIES_KADABRA},
		},
		{			//Nite    [1][2][?]
				{17, SPECIES_MEOWTH},
				{20, SPECIES_HAUNTER},
				{15, SPECIES_ABRA},
				{19, SPECIES_NOCTOWL},
				{18, SPECIES_VULPIX},
				{15, SPECIES_KADABRA},
				{15, SPECIES_KADABRA},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{17, SPECIES_SNUBBULL},
				{19, SPECIES_PIDGEOTTO},
				{16, SPECIES_ABRA},
				{17, SPECIES_GROWLITHE},
				{16, SPECIES_JIGGLYPUFF},
				{18, SPECIES_KADABRA},
				{18, SPECIES_KADABRA},
		},
		{			//Day     [2][1][?]
				{17, SPECIES_SNUBBULL},
				{19, SPECIES_PIDGEOTTO},
				{16, SPECIES_ABRA},
				{17, SPECIES_GROWLITHE},
				{16, SPECIES_JIGGLYPUFF},
				{18, SPECIES_KADABRA},
				{18, SPECIES_KADABRA},
		},
		{			//Nite    [2][2][?]
				{17, SPECIES_MEOWTH},
				{20, SPECIES_NOCTOWL},
				{16, SPECIES_ABRA},
				{17, SPECIES_HAUNTER},
				{16, SPECIES_JIGGLYPUFF},
				{18, SPECIES_KADABRA},
				{18, SPECIES_KADABRA},
		}
	}
};

const struct WildPokemonInfo gRoute8_LandMonsInfo = {25, gRoute8_LandMons}; //10% encounter rate

const struct WildPokemon gRoute9_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{13, SPECIES_MANKEY},
				{15, SPECIES_RATTATA},
				{13, SPECIES_SPEAROW},
				{15, SPECIES_RATICATE},
				{15, SPECIES_FEAROW},
				{15, SPECIES_PRIMEAPE},
				{15, SPECIES_PRIMEAPE},
		},
		{			//Day     [0][1][?]
				{13, SPECIES_MANKEY},
				{15, SPECIES_RATTATA},
				{13, SPECIES_SPEAROW},
				{15, SPECIES_RATICATE},
				{15, SPECIES_FEAROW},
				{15, SPECIES_PRIMEAPE},
				{15, SPECIES_PRIMEAPE},
		},
		{			//Nite    [0][2][?]
				{13, SPECIES_MANKEY},
				{15, SPECIES_RATTATA},
				{13, SPECIES_RATICATE},
				{15, SPECIES_RATTATA},
				{15, SPECIES_RATICATE},
				{15, SPECIES_PRIMEAPE},
				{15, SPECIES_PRIMEAPE},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{13, SPECIES_RATTATA},
				{15, SPECIES_SPEAROW},
				{13, SPECIES_SPEAROW},
				{15, SPECIES_RATICATE},
				{15, SPECIES_FEAROW},
				{15, SPECIES_RATICATE},
				{15, SPECIES_RATICATE},
		},
		{			//Day     [1][1][?]
				{13, SPECIES_RATTATA},
				{15, SPECIES_SPEAROW},
				{13, SPECIES_SPEAROW},
				{15, SPECIES_RATICATE},
				{15, SPECIES_FEAROW},
				{15, SPECIES_RATICATE},
				{15, SPECIES_RATICATE},
		},
		{			//Nite    [1][2][?]
				{13, SPECIES_RATTATA},
				{15, SPECIES_RATTATA},
				{13, SPECIES_RATICATE},
				{15, SPECIES_RATTATA},
				{15, SPECIES_RATICATE},
				{15, SPECIES_RATICATE},
				{15, SPECIES_RATICATE},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{15, SPECIES_RATTATA},
				{15, SPECIES_SPEAROW},
				{15, SPECIES_RATICATE},
				{15, SPECIES_FEAROW},
				{15, SPECIES_FEAROW},
				{18, SPECIES_MAROWAK},
				{18, SPECIES_MAROWAK},
		},
		{			//Day     [2][1][?]
				{15, SPECIES_RATTATA},
				{15, SPECIES_SPEAROW},
				{15, SPECIES_RATICATE},
				{15, SPECIES_FEAROW},
				{15, SPECIES_FEAROW},
				{18, SPECIES_MAROWAK},
				{18, SPECIES_MAROWAK},
		},
		{			//Nite    [2][2][?]
				{15, SPECIES_RATTATA},
				{15, SPECIES_VENONAT},
				{15, SPECIES_RATICATE},
				{15, SPECIES_VENOMOTH},
				{15, SPECIES_ZUBAT},
				{18, SPECIES_RATICATE},
				{18, SPECIES_RATICATE},
		}
	}
};

const struct WildPokemonInfo gRoute9_LandMonsInfo = {25, gRoute9_LandMons}; //10% encounter rate

const struct WildPokemon gRoute10_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{16, SPECIES_SPEAROW},
				{17, SPECIES_VOLTORB},
				{16, SPECIES_RATICATE},
				{18, SPECIES_FEAROW},
				{16, SPECIES_QUAGSIRE},
				{15, SPECIES_ELECTABUZZ},
				{15, SPECIES_ELECTABUZZ},
		},
		{			//Day     [0][1][?]
				{16, SPECIES_SPEAROW},
				{17, SPECIES_VOLTORB},
				{17, SPECIES_RATICATE},
				{18, SPECIES_FEAROW},
				{15, SPECIES_ELECTABUZZ},
				{17, SPECIES_ELECTABUZZ},
				{17, SPECIES_ELECTABUZZ},
		},
		{			//Nite    [0][2][?]
				{16, SPECIES_QUAGSIRE},
				{17, SPECIES_VOLTORB},
				{16, SPECIES_RATICATE},
				{17, SPECIES_QUAGSIRE},
				{18, SPECIES_RATICATE},
				{15, SPECIES_ELECTABUZZ},
				{15, SPECIES_ELECTABUZZ},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{16, SPECIES_SPEAROW},
				{17, SPECIES_VOLTORB},
				{16, SPECIES_RATICATE},
				{18, SPECIES_FEAROW},
				{16, SPECIES_QUAGSIRE},
				{15, SPECIES_ELECTABUZZ},
				{15, SPECIES_ELECTABUZZ},
		},
		{			//Day     [1][1][?]
				{16, SPECIES_SPEAROW},
				{17, SPECIES_VOLTORB},
				{17, SPECIES_RATICATE},
				{18, SPECIES_FEAROW},
				{15, SPECIES_ELECTABUZZ},
				{17, SPECIES_ELECTABUZZ},
				{17, SPECIES_ELECTABUZZ},
		},
		{			//Nite    [1][2][?]
				{16, SPECIES_QUAGSIRE},
				{17, SPECIES_VOLTORB},
				{16, SPECIES_RATICATE},
				{17, SPECIES_QUAGSIRE},
				{18, SPECIES_RATICATE},
				{15, SPECIES_ELECTABUZZ},
				{15, SPECIES_ELECTABUZZ},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{15, SPECIES_SPEAROW},
				{17, SPECIES_VOLTORB},
				{15, SPECIES_RATICATE},
				{15, SPECIES_FEAROW},
				{15, SPECIES_MAROWAK},
				{16, SPECIES_ELECTABUZZ},
				{16, SPECIES_ELECTABUZZ},
		},
		{			//Day     [2][1][?]
				{15, SPECIES_SPEAROW},
				{17, SPECIES_VOLTORB},
				{15, SPECIES_RATICATE},
				{15, SPECIES_FEAROW},
				{15, SPECIES_MAROWAK},
				{18, SPECIES_ELECTABUZZ},
				{18, SPECIES_ELECTABUZZ},
		},
		{			//Nite    [2][2][?]
				{15, SPECIES_VENONAT},
				{17, SPECIES_VOLTORB},
				{15, SPECIES_RATICATE},
				{15, SPECIES_VENOMOTH},
				{15, SPECIES_ZUBAT},
				{16, SPECIES_ELECTABUZZ},
				{16, SPECIES_ELECTABUZZ},
		}
	}
};

const struct WildPokemonInfo gRoute10_LandMonsInfo = {25, gRoute10_LandMons}; //10% encounter rate

const struct WildPokemon gRoute11_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{14, SPECIES_DROWZEE},
				{15, SPECIES_RATTATA},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_DROWZEE},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
		},
		{			//Day     [0][1][?]
				{14, SPECIES_DROWZEE},
				{15, SPECIES_RATTATA},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_DROWZEE},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
		},
		{			//Nite    [0][2][?]
				{14, SPECIES_DROWZEE},
				{15, SPECIES_RATTATA},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_DROWZEE},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{14, SPECIES_DROWZEE},
				{15, SPECIES_RATTATA},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_DROWZEE},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
		},
		{			//Day     [1][1][?]
				{14, SPECIES_DROWZEE},
				{15, SPECIES_RATTATA},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_DROWZEE},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
		},
		{			//Nite    [1][2][?]
				{14, SPECIES_DROWZEE},
				{15, SPECIES_RATTATA},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_DROWZEE},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{14, SPECIES_HOPPIP},
				{13, SPECIES_RATICATE},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_PIDGEOTTO},
				{16, SPECIES_RATTATA},
				{16, SPECIES_HOPPIP},
				{16, SPECIES_HOPPIP},
		},
		{			//Day     [2][1][?]
				{14, SPECIES_HOPPIP},
				{13, SPECIES_RATICATE},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_PIDGEOTTO},
				{16, SPECIES_RATTATA},
				{16, SPECIES_HOPPIP},
				{16, SPECIES_HOPPIP},
		},
		{			//Nite    [2][2][?]
				{14, SPECIES_DROWZEE},
				{13, SPECIES_MEOWTH},
				{15, SPECIES_MAGNEMITE},
				{16, SPECIES_NOCTOWL},
				{16, SPECIES_RATICATE},
				{16, SPECIES_HYPNO},
				{16, SPECIES_HYPNO},
		}
	}
};

const struct WildPokemonInfo gRoute11_LandMonsInfo = {25, gRoute11_LandMons}; //10% encounter rate

//Routes 13 and 15 share tables, so they have been condensed into one.
const struct WildPokemon gRoute13_15_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{23, SPECIES_NIDORINA},
				{23, SPECIES_NIDORINO},
				{25, SPECIES_PIDGEOTTO},
				{22, SPECIES_HOPPIP},
				{24, SPECIES_HOPPIP},
				{22, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		},
		{			//Day     [0][1][?]
				{23, SPECIES_NIDORINA},
				{23, SPECIES_NIDORINO},
				{25, SPECIES_PIDGEOTTO},
				{22, SPECIES_HOPPIP},
				{24, SPECIES_HOPPIP},
				{24, SPECIES_HOPPIP},
				{25, SPECIES_CHANSEY},
		},
		{			//Nite    [0][2][?]
				{23, SPECIES_NIDORINA},
				{23, SPECIES_NIDORINO},
				{25, SPECIES_NOCTOWL},
				{22, SPECIES_QUAGSIRE},
				{24, SPECIES_QUAGSIRE},
				{24, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{23, SPECIES_NIDORINO},
				{23, SPECIES_NIDORINA},
				{25, SPECIES_PIDGEOTTO},
				{22, SPECIES_HOPPIP},
				{24, SPECIES_HOPPIP},
				{22, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		},
		{			//Day     [1][1][?]
				{23, SPECIES_NIDORINO},
				{23, SPECIES_NIDORINA},
				{25, SPECIES_PIDGEOTTO},
				{22, SPECIES_HOPPIP},
				{24, SPECIES_HOPPIP},
				{24, SPECIES_HOPPIP},
				{25, SPECIES_CHANSEY},
		},
		{			//Nite    [1][2][?]
				{23, SPECIES_NIDORINO},
				{23, SPECIES_NIDORINA},
				{25, SPECIES_NOCTOWL},
				{22, SPECIES_QUAGSIRE},
				{24, SPECIES_QUAGSIRE},
				{24, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{23, SPECIES_NIDORINO},
				{23, SPECIES_NIDORINA},
				{25, SPECIES_PIDGEOTTO},
				{25, SPECIES_HOPPIP},
				{27, SPECIES_HOPPIP},
				{27, SPECIES_HOPPIP},
				{25, SPECIES_CHANSEY},
		},
		{			//Day     [2][1][?]
				{23, SPECIES_NIDORINO},
				{23, SPECIES_NIDORINA},
				{25, SPECIES_PIDGEOTTO},
				{25, SPECIES_HOPPIP},
				{27, SPECIES_HOPPIP},
				{27, SPECIES_HOPPIP},
				{25, SPECIES_CHANSEY},
		},
		{			//Nite    [2][2][?]
				{23, SPECIES_VENONAT},
				{23, SPECIES_QUAGSIRE},
				{25, SPECIES_NOCTOWL},
				{25, SPECIES_VENOMOTH},
				{25, SPECIES_QUAGSIRE},
				{25, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		}
	}
};

const struct WildPokemonInfo gRoute13_15_LandMonsInfo = {25, gRoute13_15_LandMons}; //10% encounter rate

const struct WildPokemon gRoute14_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{23, SPECIES_NIDORINA},
				{23, SPECIES_NIDORINO},
				{25, SPECIES_PIDGEOTTO},
				{24, SPECIES_HOPPIP},
				{26, SPECIES_SKIPLOOM},
				{22, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		},
		{			//Day     [0][1][?]
				{23, SPECIES_NIDORINA},
				{23, SPECIES_NIDORINO},
				{25, SPECIES_PIDGEOTTO},
				{24, SPECIES_HOPPIP},
				{26, SPECIES_SKIPLOOM},
				{26, SPECIES_SKIPLOOM},
				{25, SPECIES_CHANSEY},
		},
		{			//Nite    [0][2][?]
				{23, SPECIES_NIDORINA},
				{23, SPECIES_NIDORINO},
				{25, SPECIES_NOCTOWL},
				{22, SPECIES_QUAGSIRE},
				{24, SPECIES_QUAGSIRE},
				{24, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{23, SPECIES_NIDORINO},
				{23, SPECIES_NIDORINA},
				{25, SPECIES_PIDGEOTTO},
				{24, SPECIES_HOPPIP},
				{26, SPECIES_SKIPLOOM},
				{22, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		},
		{			//Day     [1][1][?]
				{23, SPECIES_NIDORINO},
				{23, SPECIES_NIDORINA},
				{25, SPECIES_PIDGEOTTO},
				{24, SPECIES_HOPPIP},
				{26, SPECIES_SKIPLOOM},
				{26, SPECIES_SKIPLOOM},
				{25, SPECIES_CHANSEY},
		},
		{			//Nite    [1][2][?]
				{23, SPECIES_NIDORINO},
				{23, SPECIES_NIDORINA},
				{25, SPECIES_NOCTOWL},
				{22, SPECIES_QUAGSIRE},
				{24, SPECIES_QUAGSIRE},
				{24, SPECIES_QUAGSIRE},
				{25, SPECIES_CHANSEY},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{26, SPECIES_NIDORINO},
				{26, SPECIES_NIDORINA},
				{28, SPECIES_PIDGEOTTO},
				{28, SPECIES_HOPPIP},
				{30, SPECIES_SKIPLOOM},
				{30, SPECIES_SKIPLOOM},
				{28, SPECIES_CHANSEY},
		},
		{			//Day     [2][1][?]
				{26, SPECIES_NIDORINO},
				{26, SPECIES_NIDORINA},
				{28, SPECIES_PIDGEOTTO},
				{28, SPECIES_HOPPIP},
				{30, SPECIES_SKIPLOOM},
				{30, SPECIES_SKIPLOOM},
				{28, SPECIES_CHANSEY},
		},
		{			//Nite    [2][2][?]
				{26, SPECIES_VENONAT},
				{26, SPECIES_QUAGSIRE},
				{28, SPECIES_NOCTOWL},
				{28, SPECIES_VENOMOTH},
				{28, SPECIES_QUAGSIRE},
				{28, SPECIES_QUAGSIRE},
				{28, SPECIES_CHANSEY},
		}
	}
};

const struct WildPokemonInfo gRoute14_LandMonsInfo = {25, gRoute14_LandMons}; //10% encounter rate

const struct WildPokemon gRoute16_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Day     [0][1][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Nite    [0][2][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_GRIMER},
				{28, SPECIES_GRIMER},
				{28, SPECIES_MURKROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Day     [1][1][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Nite    [1][2][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_GRIMER},
				{28, SPECIES_GRIMER},
				{28, SPECIES_MURKROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{29, SPECIES_FEAROW},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Day     [2][1][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{29, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Nite    [2][2][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_GRIMER},
				{28, SPECIES_GRIMER},
				{29, SPECIES_MURKROW},
				{29, SPECIES_MURKROW},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		}
	}
};

const struct WildPokemonInfo gRoute16_LandMonsInfo = {25, gRoute16_LandMons}; //10% encounter rate

const struct WildPokemon gRoute17_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{28, SPECIES_FEAROW},
				{27, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{30, SPECIES_FEAROW},
				{29, SPECIES_SLUGMA},
				{32, SPECIES_MUK},
				{32, SPECIES_MUK},
		},
		{			//Day     [0][1][?]
				{28, SPECIES_SLUGMA},
				{27, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{30, SPECIES_FEAROW},
				{25, SPECIES_SLUGMA},
				{32, SPECIES_MUK},
				{32, SPECIES_MUK},
		},
		{			//Nite    [0][2][?]
				{28, SPECIES_GRIMER},
				{27, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{30, SPECIES_MUK},
				{29, SPECIES_SLUGMA},
				{32, SPECIES_MUK},
				{32, SPECIES_MUK},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{28, SPECIES_FEAROW},
				{27, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{30, SPECIES_FEAROW},
				{29, SPECIES_SLUGMA},
				{32, SPECIES_MUK},
				{32, SPECIES_MUK},
		},
		{			//Day     [1][1][?]
				{28, SPECIES_SLUGMA},
				{27, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{30, SPECIES_FEAROW},
				{25, SPECIES_SLUGMA},
				{32, SPECIES_MUK},
				{32, SPECIES_MUK},
		},
		{			//Nite    [1][2][?]
				{28, SPECIES_GRIMER},
				{27, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{30, SPECIES_MUK},
				{29, SPECIES_SLUGMA},
				{32, SPECIES_MUK},
				{32, SPECIES_MUK},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{30, SPECIES_FEAROW},
				{29, SPECIES_GRIMER},
				{31, SPECIES_GRIMER},
				{32, SPECIES_FEAROW},
				{33, SPECIES_GRIMER},
				{33, SPECIES_MUK},
				{33, SPECIES_MUK},
		},
		{			//Day     [2][1][?]
				{30, SPECIES_FEAROW},
				{29, SPECIES_SLUGMA},
				{29, SPECIES_GRIMER},
				{32, SPECIES_FEAROW},
				{32, SPECIES_SLUGMA},
				{33, SPECIES_MUK},
				{33, SPECIES_MUK},
		},
		{			//Nite    [2][2][?]
				{30, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{31, SPECIES_GRIMER},
				{32, SPECIES_GRIMER},
				{33, SPECIES_GRIMER},
				{33, SPECIES_MUK},
				{33, SPECIES_MUK},
		}
	}
};

const struct WildPokemonInfo gRoute17_LandMonsInfo = {25, gRoute17_LandMons}; //10% encounter rate

const struct WildPokemon gRoute18_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Day     [0][1][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Nite    [0][2][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_GRIMER},
				{28, SPECIES_GRIMER},
				{28, SPECIES_MUK},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Day     [1][1][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Nite    [1][2][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_GRIMER},
				{28, SPECIES_GRIMER},
				{28, SPECIES_MUK},
				{27, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{29, SPECIES_FEAROW},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Day     [2][1][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_FEAROW},
				{28, SPECIES_GRIMER},
				{29, SPECIES_FEAROW},
				{29, SPECIES_SLUGMA},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		},
		{			//Nite    [2][2][?]
				{26, SPECIES_GRIMER},
				{27, SPECIES_GRIMER},
				{28, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{29, SPECIES_GRIMER},
				{30, SPECIES_MUK},
				{30, SPECIES_MUK},
		}
	}
};

const struct WildPokemonInfo gRoute18_LandMonsInfo = {25, gRoute18_LandMons}; //10% encounter rate

const struct WildPokemon gRoute21_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{30, SPECIES_TANGELA},
				{25, SPECIES_TANGELA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{28, SPECIES_MR_MIME},
				{28, SPECIES_MR_MIME},
		},
		{			//Day     [0][1][?]
				{30, SPECIES_TANGELA},
				{25, SPECIES_TANGELA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{28, SPECIES_MR_MIME},
				{30, SPECIES_MR_MIME},
				{30, SPECIES_MR_MIME},
		},
		{			//Nite    [0][2][?]
				{30, SPECIES_TANGELA},
				{25, SPECIES_TANGELA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{28, SPECIES_MR_MIME},
				{28, SPECIES_MR_MIME},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{30, SPECIES_TANGELA},
				{25, SPECIES_TANGELA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{28, SPECIES_MR_MIME},
				{28, SPECIES_MR_MIME},
		},
		{			//Day     [1][1][?]
				{30, SPECIES_TANGELA},
				{25, SPECIES_TANGELA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{28, SPECIES_MR_MIME},
				{30, SPECIES_MR_MIME},
				{30, SPECIES_MR_MIME},
		},
		{			//Nite    [1][2][?]
				{30, SPECIES_TANGELA},
				{25, SPECIES_TANGELA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{20, SPECIES_TANGELA},
				{28, SPECIES_MR_MIME},
				{28, SPECIES_MR_MIME},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{30, SPECIES_TANGELA},
				{25, SPECIES_RATTATA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_RATICATE},
				{30, SPECIES_MR_MIME},
				{28, SPECIES_MR_MIME},
				{28, SPECIES_MR_MIME},
		},
		{			//Day     [2][1][?]
				{30, SPECIES_TANGELA},
				{25, SPECIES_RATTATA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_RATICATE},
				{28, SPECIES_MR_MIME},
				{30, SPECIES_MR_MIME},
				{30, SPECIES_MR_MIME},
		},
		{			//Nite    [2][2][?]
				{30, SPECIES_TANGELA},
				{25, SPECIES_RATTATA},
				{35, SPECIES_TANGELA},
				{20, SPECIES_RATICATE},
				{30, SPECIES_TANGELA},
				{28, SPECIES_TANGELA},
				{28, SPECIES_TANGELA},
		}
	}
};

const struct WildPokemonInfo gRoute21_LandMonsInfo = {15, gRoute21_LandMons}; //6% encounter rate

const struct WildPokemon gRoute22_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{3, SPECIES_RATTATA},
				{3, SPECIES_SPEAROW},
				{5, SPECIES_SPEAROW},
				{4, SPECIES_DODUO},
				{6, SPECIES_PONYTA},
				{7, SPECIES_FEAROW},
				{7, SPECIES_FEAROW},
		},
		{			//Day     [0][1][?]
				{3, SPECIES_RATTATA},
				{3, SPECIES_SPEAROW},
				{5, SPECIES_SPEAROW},
				{4, SPECIES_DODUO},
				{6, SPECIES_PONYTA},
				{7, SPECIES_FEAROW},
				{7, SPECIES_FEAROW},
		},
		{			//Nite    [0][2][?]
				{3, SPECIES_RATTATA},
				{3, SPECIES_RATTATA},
				{5, SPECIES_RATTATA},
				{4, SPECIES_RATTATA},
				{6, SPECIES_PONYTA},
				{7, SPECIES_RATTATA},
				{7, SPECIES_RATTATA},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{3, SPECIES_RATTATA},
				{3, SPECIES_SPEAROW},
				{5, SPECIES_SPEAROW},
				{4, SPECIES_DODUO},
				{6, SPECIES_PONYTA},
				{7, SPECIES_FEAROW},
				{7, SPECIES_FEAROW},
		},
		{			//Day     [1][1][?]
				{3, SPECIES_RATTATA},
				{3, SPECIES_SPEAROW},
				{5, SPECIES_SPEAROW},
				{4, SPECIES_DODUO},
				{6, SPECIES_PONYTA},
				{7, SPECIES_FEAROW},
				{7, SPECIES_FEAROW},
		},
		{			//Nite    [1][2][?]
				{3, SPECIES_RATTATA},
				{3, SPECIES_RATTATA},
				{5, SPECIES_RATTATA},
				{4, SPECIES_RATTATA},
				{6, SPECIES_PONYTA},
				{7, SPECIES_RATTATA},
				{7, SPECIES_RATTATA},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{3, SPECIES_RATTATA},
				{3, SPECIES_SPEAROW},
				{5, SPECIES_SPEAROW},
				{4, SPECIES_DODUO},
				{6, SPECIES_PONYTA},
				{7, SPECIES_FEAROW},
				{7, SPECIES_FEAROW},
		},
		{			//Day     [2][1][?]
				{3, SPECIES_RATTATA},
				{3, SPECIES_SPEAROW},
				{5, SPECIES_SPEAROW},
				{4, SPECIES_DODUO},
				{6, SPECIES_PONYTA},
				{7, SPECIES_FEAROW},
				{7, SPECIES_FEAROW},
		},
		{			//Nite    [2][2][?]
				{3, SPECIES_RATTATA},
				{3, SPECIES_POLIWAG},
				{5, SPECIES_RATTATA},
				{4, SPECIES_POLIWAG},
				{6, SPECIES_RATTATA},
				{7, SPECIES_RATTATA},
				{7, SPECIES_RATTATA},
		}
	}
};

const struct WildPokemonInfo gRoute22_LandMonsInfo = {25, gRoute22_LandMons}; //10% encounter rate

const struct WildPokemon gRoute24_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{8, SPECIES_BELLSPROUT},
				{10, SPECIES_BELLSPROUT},
				{9, SPECIES_ABRA},
				{12, SPECIES_WEEPINBELL},
				{8, SPECIES_VENONAT},
				{14, SPECIES_WEEPINBELL},
				{14, SPECIES_WEEPINBELL},
		},
		{			//Day     [0][1][?]
				{8, SPECIES_BELLSPROUT},
				{10, SPECIES_SUNKERN},
				{9, SPECIES_ABRA},
				{12, SPECIES_WEEPINBELL},
				{10, SPECIES_BELLSPROUT},
				{14, SPECIES_WEEPINBELL},
				{14, SPECIES_WEEPINBELL},
		},
		{			//Nite    [0][2][?]
				{8, SPECIES_VENONAT},
				{10, SPECIES_ODDISH},
				{9, SPECIES_ABRA},
				{13, SPECIES_WEEPINBELL},
				{10, SPECIES_BELLSPROUT},
				{10, SPECIES_VENOMOTH},
				{10, SPECIES_VENOMOTH},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{8, SPECIES_BELLSPROUT},
				{10, SPECIES_BELLSPROUT},
				{9, SPECIES_ABRA},
				{12, SPECIES_WEEPINBELL},
				{8, SPECIES_VENONAT},
				{14, SPECIES_WEEPINBELL},
				{14, SPECIES_WEEPINBELL},
		},
		{			//Day     [1][1][?]
				{8, SPECIES_BELLSPROUT},
				{10, SPECIES_SUNKERN},
				{9, SPECIES_ABRA},
				{12, SPECIES_WEEPINBELL},
				{10, SPECIES_BELLSPROUT},
				{14, SPECIES_WEEPINBELL},
				{14, SPECIES_WEEPINBELL},
		},
		{			//Nite    [1][2][?]
				{8, SPECIES_VENONAT},
				{10, SPECIES_ODDISH},
				{9, SPECIES_ABRA},
				{13, SPECIES_WEEPINBELL},
				{10, SPECIES_BELLSPROUT},
				{10, SPECIES_VENOMOTH},
				{10, SPECIES_VENOMOTH},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{8, SPECIES_CATERPIE},
				{10, SPECIES_CATERPIE},
				{12, SPECIES_METAPOD},
				{12, SPECIES_ABRA},
				{10, SPECIES_BELLSPROUT},
				{14, SPECIES_BUTTERFREE},
				{14, SPECIES_BUTTERFREE},
		},
		{			//Day     [2][1][?]
				{8, SPECIES_CATERPIE},
				{12, SPECIES_SUNKERN},
				{10, SPECIES_CATERPIE},
				{12, SPECIES_ABRA},
				{10, SPECIES_BELLSPROUT},
				{14, SPECIES_BUTTERFREE},
				{14, SPECIES_BUTTERFREE},
		},
		{			//Nite    [2][2][?]
				{10, SPECIES_VENONAT},
				{10, SPECIES_ODDISH},
				{12, SPECIES_ODDISH},
				{12, SPECIES_ABRA},
				{10, SPECIES_BELLSPROUT},
				{14, SPECIES_GLOOM},
				{14, SPECIES_GLOOM},
		}
	}
};

const struct WildPokemonInfo gRoute24_LandMonsInfo = {25, gRoute24_LandMons}; //10% encounter rate

const struct WildPokemon gRoute25_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{8, SPECIES_PIDGEY},
				{10, SPECIES_BELLSPROUT},
				{8, SPECIES_VENONAT},
				{9, SPECIES_ABRA},
				{10, SPECIES_PIDGEOTTO},
				{14, SPECIES_WEEPINBELL},
				{14, SPECIES_WEEPINBELL},
		},
		{			//Day     [0][1][?]
				{8, SPECIES_PIDGEY},
				{10, SPECIES_BELLSPROUT},
				{10, SPECIES_PIDGEY},
				{9, SPECIES_ABRA},
				{12, SPECIES_PIDGEOTTO},
				{14, SPECIES_WEEPINBELL},
				{14, SPECIES_WEEPINBELL},
		},
		{			//Nite    [0][2][?]
				{8, SPECIES_VENONAT},
				{10, SPECIES_ODDISH},
				{10, SPECIES_VENOMOTH},
				{9, SPECIES_ABRA},
				{14, SPECIES_WEEPINBELL},
				{10, SPECIES_BELLSPROUT},
				{10, SPECIES_BELLSPROUT},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{8, SPECIES_PIDGEY},
				{10, SPECIES_BELLSPROUT},
				{8, SPECIES_VENONAT},
				{9, SPECIES_ABRA},
				{10, SPECIES_PIDGEOTTO},
				{14, SPECIES_WEEPINBELL},
				{14, SPECIES_WEEPINBELL},
		},
		{			//Day     [1][1][?]
				{8, SPECIES_PIDGEY},
				{10, SPECIES_BELLSPROUT},
				{10, SPECIES_PIDGEY},
				{9, SPECIES_ABRA},
				{12, SPECIES_PIDGEOTTO},
				{14, SPECIES_WEEPINBELL},
				{14, SPECIES_WEEPINBELL},
		},
		{			//Nite    [1][2][?]
				{8, SPECIES_VENONAT},
				{10, SPECIES_ODDISH},
				{10, SPECIES_VENOMOTH},
				{9, SPECIES_ABRA},
				{14, SPECIES_WEEPINBELL},
				{10, SPECIES_BELLSPROUT},
				{10, SPECIES_BELLSPROUT},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{10, SPECIES_CATERPIE},
				{10, SPECIES_PIDGEY},
				{12, SPECIES_PIDGEOTTO},
				{12, SPECIES_METAPOD},
				{10, SPECIES_BELLSPROUT},
				{14, SPECIES_BUTTERFREE},
				{14, SPECIES_BUTTERFREE},
		},
		{			//Day     [2][1][?]
				{10, SPECIES_CATERPIE},
				{10, SPECIES_PIDGEY},
				{12, SPECIES_PIDGEOTTO},
				{12, SPECIES_METAPOD},
				{10, SPECIES_BELLSPROUT},
				{14, SPECIES_BUTTERFREE},
				{14, SPECIES_BUTTERFREE},
		},
		{			//Nite    [2][2][?]
				{10, SPECIES_ODDISH},
				{10, SPECIES_HOOTHOOT},
				{10, SPECIES_VENONAT},
				{12, SPECIES_NOCTOWL},
				{10, SPECIES_BELLSPROUT},
				{14, SPECIES_NOCTOWL},
				{14, SPECIES_NOCTOWL},
		}
	}
};

const struct WildPokemonInfo gRoute25_LandMonsInfo = {25, gRoute25_LandMons}; //10% encounter rate

const struct WildPokemon gRoute26_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_SANDSLASH},
				{32, SPECIES_PONYTA},
				{30, SPECIES_DODUO},
				{30, SPECIES_DODRIO},
				{30, SPECIES_RATICATE},
				{30, SPECIES_QUAGSIRE},
		},
		{			//Day     [0][1][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_SANDSLASH},
				{32, SPECIES_PONYTA},
				{30, SPECIES_DODUO},
				{30, SPECIES_RATICATE},
				{30, SPECIES_DODRIO},
				{30, SPECIES_DODRIO},
		},
		{			//Nite    [0][2][?]
				{28, SPECIES_RATICATE},
				{28, SPECIES_SANDSLASH},
				{32, SPECIES_PONYTA},
				{30, SPECIES_RATICATE},
				{30, SPECIES_QUAGSIRE},
				{32, SPECIES_QUAGSIRE},
				{32, SPECIES_QUAGSIRE},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{28, SPECIES_DODUO},
				{28, SPECIES_RATICATE},
				{32, SPECIES_PONYTA},
				{30, SPECIES_DODUO},
				{30, SPECIES_ARBOK},
				{30, SPECIES_RATICATE},
				{30, SPECIES_QUAGSIRE},
		},
		{			//Day     [1][1][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_RATICATE},
				{32, SPECIES_PONYTA},
				{30, SPECIES_DODUO},
				{30, SPECIES_RATICATE},
				{30, SPECIES_ARBOK},
				{30, SPECIES_ARBOK},
		},
		{			//Nite    [1][2][?]
				{28, SPECIES_RATICATE},
				{28, SPECIES_RATICATE},
				{32, SPECIES_PONYTA},
				{30, SPECIES_RATICATE},
				{30, SPECIES_QUAGSIRE},
				{30, SPECIES_ARBOK},
				{30, SPECIES_ARBOK},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_SANDSLASH},
				{32, SPECIES_PONYTA},
				{30, SPECIES_RATICATE},
				{30, SPECIES_DODUO},
				{30, SPECIES_ARBOK},
				{30, SPECIES_ARBOK},
		},
		{			//Day     [2][1][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_SANDSLASH},
				{32, SPECIES_PONYTA},
				{30, SPECIES_RATICATE},
				{30, SPECIES_DODUO},
				{30, SPECIES_ARBOK},
				{30, SPECIES_ARBOK},
		},
		{			//Nite    [2][2][?]
				{28, SPECIES_NOCTOWL},
				{28, SPECIES_RATICATE},
				{32, SPECIES_NOCTOWL},
				{30, SPECIES_RATICATE},
				{30, SPECIES_QUAGSIRE},
				{30, SPECIES_QUAGSIRE},
				{30, SPECIES_QUAGSIRE},
		}
	}
};

const struct WildPokemonInfo gRoute26_LandMonsInfo = {25, gRoute26_LandMons}; //10% encounter rate

const struct WildPokemon gRoute27_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_RATICATE},
				{30, SPECIES_DODUO},
				{28, SPECIES_QUAGSIRE},
				{32, SPECIES_PONYTA},
				{30, SPECIES_SANDSLASH},
				{30, SPECIES_SANDSLASH},
		},
		{			//Day     [0][1][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_RATICATE},
				{30, SPECIES_DODUO},
				{30, SPECIES_RATICATE},
				{32, SPECIES_PONYTA},
				{30, SPECIES_SANDSLASH},
				{30, SPECIES_SANDSLASH},
		},
		{			//Nite    [0][2][?]
				{28, SPECIES_QUAGSIRE},
				{28, SPECIES_RATICATE},
				{30, SPECIES_QUAGSIRE},
				{30, SPECIES_RATICATE},
				{32, SPECIES_PONYTA},
				{30, SPECIES_SANDSLASH},
				{30, SPECIES_SANDSLASH},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{28, SPECIES_DODUO},
				{28, SPECIES_ARBOK},
				{30, SPECIES_DODUO},
				{28, SPECIES_QUAGSIRE},
				{32, SPECIES_PONYTA},
				{30, SPECIES_DODRIO},
				{30, SPECIES_DODRIO},
		},
		{			//Day     [1][1][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_ARBOK},
				{30, SPECIES_DODUO},
				{30, SPECIES_RATICATE},
				{32, SPECIES_PONYTA},
				{30, SPECIES_DODRIO},
				{30, SPECIES_DODRIO},
		},
		{			//Nite    [1][2][?]
				{28, SPECIES_QUAGSIRE},
				{28, SPECIES_ARBOK},
				{30, SPECIES_QUAGSIRE},
				{30, SPECIES_RATICATE},
				{32, SPECIES_PONYTA},
				{32, SPECIES_QUAGSIRE},
				{32, SPECIES_QUAGSIRE},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_ARBOK},
				{30, SPECIES_RATICATE},
				{30, SPECIES_DODUO},
				{32, SPECIES_PONYTA},
				{30, SPECIES_DODRIO},
				{30, SPECIES_DODRIO},
		},
		{			//Day     [2][1][?]
				{28, SPECIES_DODUO},
				{28, SPECIES_ARBOK},
				{30, SPECIES_RATICATE},
				{30, SPECIES_DODUO},
				{32, SPECIES_PONYTA},
				{30, SPECIES_DODRIO},
				{30, SPECIES_DODRIO},
		},
		{			//Nite    [2][2][?]
				{28, SPECIES_QUAGSIRE},
				{28, SPECIES_NOCTOWL},
				{30, SPECIES_RATICATE},
				{30, SPECIES_QUAGSIRE},
				{32, SPECIES_NOCTOWL},
				{32, SPECIES_NOCTOWL},
				{32, SPECIES_NOCTOWL},
		}
	}
};

const struct WildPokemonInfo gRoute27_LandMonsInfo = {25, gRoute27_LandMons}; //10% encounter rate

const struct WildPokemon gRoute_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{39, SPECIES_TANGELA},
				{40, SPECIES_PONYTA},
				{40, SPECIES_URSARING},
				{42, SPECIES_RAPIDASH},
				{41, SPECIES_DODUO},
				{43, SPECIES_DODRIO},
				{43, SPECIES_DODRIO},
		},
		{			//Day     [0][1][?]
				{39, SPECIES_TANGELA},
				{40, SPECIES_PONYTA},
				{40, SPECIES_URSARING},
				{42, SPECIES_RAPIDASH},
				{41, SPECIES_DODUO},
				{43, SPECIES_DODRIO},
				{43, SPECIES_DODRIO},
		},
		{			//Nite    [0][2][?]
				{39, SPECIES_TANGELA},
				{40, SPECIES_PONYTA},
				{40, SPECIES_URSARING},
				{40, SPECIES_SNEASEL},
				{42, SPECIES_RAPIDASH},
				{42, SPECIES_RAPIDASH},
				{42, SPECIES_RAPIDASH},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{39, SPECIES_TANGELA},
				{40, SPECIES_PONYTA},
				{40, SPECIES_DONPHAN},
				{42, SPECIES_RAPIDASH},
				{41, SPECIES_DODUO},
				{43, SPECIES_DODRIO},
				{43, SPECIES_DODRIO},
		},
		{			//Day     [1][1][?]
				{39, SPECIES_TANGELA},
				{40, SPECIES_PONYTA},
				{40, SPECIES_DONPHAN},
				{42, SPECIES_RAPIDASH},
				{41, SPECIES_DODUO},
				{43, SPECIES_DODRIO},
				{43, SPECIES_DODRIO},
		},
		{			//Nite    [1][2][?]
				{39, SPECIES_TANGELA},
				{40, SPECIES_PONYTA},
				{40, SPECIES_DONPHAN},
				{40, SPECIES_SNEASEL},
				{42, SPECIES_RAPIDASH},
				{42, SPECIES_RAPIDASH},
				{42, SPECIES_RAPIDASH},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{39, SPECIES_TANGELA},
				{40, SPECIES_PONYTA},
				{40, SPECIES_RAPIDASH},
				{42, SPECIES_ARBOK},
				{41, SPECIES_DODUO},
				{43, SPECIES_DODRIO},
				{43, SPECIES_DODRIO},
		},
		{			//Day     [2][1][?]
				{39, SPECIES_TANGELA},
				{40, SPECIES_PONYTA},
				{40, SPECIES_RAPIDASH},
				{42, SPECIES_ARBOK},
				{41, SPECIES_DODUO},
				{43, SPECIES_DODRIO},
				{43, SPECIES_DODRIO},
		},
		{			//Nite    [2][2][?]
				{39, SPECIES_TANGELA},
				{40, SPECIES_POLIWHIRL},
				{40, SPECIES_GOLBAT},
				{40, SPECIES_POLIWHIRL},
				{42, SPECIES_GOLBAT},
				{42, SPECIES_GOLBAT},
				{42, SPECIES_GOLBAT},
		}
	}
};

const struct WildPokemonInfo gRoute_LandMonsInfo = {25, gRoute_LandMons}; //10% encounter rate

/* BLANK TEMPLATE

const struct WildPokemon gRoute_LandMons[3][3][7] = 
{
	{ 				//Gold    [0][?][?]
		{			//Morn    [0][0][?]
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		},
		{			//Day     [0][1][?]
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		},
		{			//Nite    [0][2][?]
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		}
	},
    { 				//Silver  [1][?][?]
		{			//Morn    [1][0][?] 
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		},
		{			//Day     [1][1][?]
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		},
		{			//Nite    [1][2][?]
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		}
	},
	{ 				//Crystal [2][?][?]
		{			//Morn    [2][0][?]
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		},
		{			//Day     [2][1][?]
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		},
		{			//Nite    [2][2][?]
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
				{, SPECIES_},
		}
	}
};

const struct WildPokemonInfo gRoute_LandMonsInfo = {25, gRoute_LandMons}; //10% encounter rate

*/