#define WEPFLAGS_GOTWEAPON  1
#define WEPFLAGS_WEAPONSTAY 2

#define CHOICECOUNT         5
#define CHOICECOUNT_U       (UNIQUECOUNT*2)

#define S_WEP               0
#define S_AMMO1             1
#define S_AMMO2             2
#define S_CHECKITEM         3
#define S_CHECKFAILITEM     4

#define U_UNIQUE1           0
#define U_AMMO1             1
#define U_UNIQUE2           2
#define U_AMMO2             3
#define U_UNIQUE3           4
#define U_AMMO3             5

#define SLOT_UNIQUE        -1
#define SLOT_FIST           0
#define SLOT_CHAINSAW       1
#define SLOT_PISTOL         2
#define SLOT_SHOTGUN        3
#define SLOT_SUPERSHOTGUN   4
#define SLOT_SSG            4
#define SLOT_CHAINGUN       5
#define SLOT_ROCKETLAUNCHER 6
#define SLOT_PLASMARIFLE    7
#define SLOT_BFG9000        8
#define SLOT_BFG            8
#define SLOT_PUNCHDRUNKSAW  9

int ClassUniques[CLASSCOUNT][CHOICECOUNT_U] = 
{
	{"DoomguyBerserker",    "",                 "", "","",""},
    {"ChexSoulsphere",      "",                 "", "","",""},
    {"PortTomeCoop",            "",                 "", "","",""},
    {"WolfExtraLife",       "",                 "", "","",""},
    {"PortMysticAmbit",     "",                 "", "","",""},
    {"DukePortJetpack",     "DukeJetpackFuel",  "Shrinker", "ShrinkerAmmo","Expander","ExpanderAmmo"},
    {"Alien Weapon",        "UnknownAmmo",      " Alien Weapon ", "UnknownAmmo2","",""},
    {"Laser Cannon",        "Cell",             "", "","",""},
    {"Excalibat",  			"BMissiles", 		"Split Missile", "SMissiles","Dark Staff","DSEnergy"}, // Added this
	{"BlakeShield",			"",					"", "","",""}, // Added this
	{"VoodooDoll",			"Voodoo",			"Guns Akimbo",    "","Spraycan","SprayCanAmmo"}, // Added this
    {"Upgrades",    "",                 		"", "","",""}, // Added this.
    {"Doom64GuyBerserk",    "",                 "", "","",""},
    {" Eradicator Enhancement Chip ",    "",                 "", "","",""},
    {"C7ProxyMinePickup",   "C7ProxyMineAmmo",     "", "","",""}, // Added this.	
    {"RMROxygenRecycler",   "", "RMRJetPack", "","",""}, // Added this.		
    {"KatarnSupercharge", 	"", "", "","",""},	
	{"IPOGRandomItemGenerator",	"",	"", "","",""}, //+Added	
	{"DisruptorEnergyBall",	"DisruptorPSIEnergy",	"", "","",""}, //+Added	
	{"WTShieldTrigger",	"",	"", "","",""}, //+Added
	{"HL Squeaks", "HLSqueakAmmo", "HL Crossbow", "Shell","",""}, //+Added	
    {"SWRipperHeart", "HeartAmmo", "HeatSeekingCard", "","",""},	
    {"RandomMagicItem", "", "", "","",""},
    {"Ring of RA", "", "", "","",""},	
    {" Hunting Rifle With Scope ", "", " Dyn 'O' Mites ", "","",""},	
	{"Q2GrenadeLauncher", "RocketAmmo", "Q2ETFRifle", "Q2Flechettes","Q2IonRipper","Cell"},	
	{"Hexen2TomeOfPower","","Hexen2ForceCube","","",""},
	{"Goldeneye_SniperRifle","Goldeneye_SniperMagazine","Goldeneye_SilencedD5K","Goldeneye_D5KMagazine","Goldeneye_GadgetGranter",""},
	{"Totenkopf_FlameThrower","Totenkopf_FlameThrowerFuel","Totenkopf_MG42","Cell","Totenkopf_Sniper","Shell"},	
};

int UniqueMaxes[CLASSCOUNT][CHOICECOUNT_U] = 
{
    {0,     0,      0,  0,		0,	0},
    {0,     0,      0,  0,		0,	0},
    {16,    0,      0,  0,		0,	0},
    {9,     0,      0,  0,		0,	0},
    {16,    0,      0,  0,		0,	0},
    {1,     100,    0,  0,		0,	0},
    {1,     50,     1,  50,		0,	0},
    {1,     0,      0,  0,		0,	0},
	{1,		10,		1,	10,		1,	5}, // added these -- ipfreeley
	{2,     0,      0,  0,		0,	0}, // added this -- blake
	{1,     100,    0,  0,		0,	0},  // added this -- caleb
    {0,     0,      0,  0,		0,	0}, // Added this -- strife	
    {0,     0,      0,  0,		0,	0}, // added this -- d64guy
    {2,     0,      0,  0,		0,	0}, // added this -- erad	
    {1,     30,     0,  0,		0,	0}, // added this -- C7		
    {3,     0,      3,  0,		0,	0}, // Added this -- RMR	
    {0,     0,      0,  0,		0,	0},	
	{5,		0,		0,	0,		0,	0}, //+Added	
	{20,	0,		0,	0,		0,	0}, //+Added
	{2,		0,		0,	0,		0,	0}, //+Added
	{9,		0,		0,	0,		0,	0}, //+Added	
	{1,     5,      2,  0,		0,	0}, // added this -- Lo Wang
    {0,     0,      0,  0,		0,	0},
    {0,     0,      0,  0,		0,	0},
    {0,     0,      0,  0,		0,	0},
	{0,     0,      0,  0,		0,	0},
	{20,    0,     20,  0,		0,	0},
	{0,     0,      0,  0,		0,	0},
	{0,     0,      0,  0,		0,	0},	
};

int UniqueCounts[CLASSCOUNT][CHOICECOUNT_U] =
{
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,     0,     -1, -1,     -1, -1},
	{-1,	-1,		-1, -1,     -1, -1}, // added these -- ip freeley
	{-1,    -1,     -1, -1,     -1, -1}, // added these -- blake
	{-1,    -1,     -1, -1,     -1, -1}, // added these -- caleb
    {-1,    -1,     -1, -1,     -1, -1}, // Added this -- strife	
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},	
    {-1,    -1,     -1, -1,     -1, -1},	
	{-1,    -1,     -1, -1,     -1, -1}, //+Added	
	{-1,    -1,     -1, -1,     -1, -1}, //+Added	
	{-1,    -1,     -1, -1,     -1, -1}, //+Added
	{-1,    -1,     -1, -1,     -1, -1}, //+Added	
	{-1,    -1,     -1, -1,     -1, -1}, // Added this -- lwang		
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},
    {-1,    -1,     -1, -1,     -1, -1},	
	{-1,    -1,     -1, -1,     -1, -1},
	{-1,    -1,     -1, -1,     -1, -1},
	{-1,    -1,     -1, -1,     -1, -1},
	{-1,    -1,     -1, -1,     -1, -1},	
};

int UniqueScripts[CLASSCOUNT] = {0, 0, 0, 0, 0, 0, SAMSARA_MARATHON, 0, 0, 0};

int ClassWeapons[CLASSCOUNT][SLOTCOUNT][CHOICECOUNT] = 
{
    {   // Doomguy
        {" Fist ",                          "",             "",             "", ""},
        {" Chainsaw ",                      "",             "",             "", ""},
        {" Pistol ",                        "",             "",             "", ""},
        {" Shotgun ",                       "Shell",        "",             "", ""},
        {"Super Shotgun",                   "Shell",        "",             "", ""},
        {" Chaingun ",                      "Clip",         "",             "", ""},
        {"Rocket Launcher",                 "RocketAmmo",   "",             "", ""},
        {"Plasma Rifle",                    "Cell",         "",             "", ""},
        {"B.F.G. 9000",                     "Cell",         "",             "", ""},
        {" Chainsaw ",                      "",             "",             "", ""},
    },

    {   // Chexguy
        {" Bootspoon ",                     "",             "",             "", ""},
        {"Super Bootspork",                 "",             "",             "", ""},
        {"Mini-Zorcher",                    "",             "",             "", ""},
        {"Large Zorcher",                   "Shell",        "",             "", ""},
        {"Super Large Zorcher",             "Shell",        "",             "", ""},
        {"Rapid Zorcher",                   "Clip",         "",             "", ""},
        {"Zorch Propulsor",                 "RocketAmmo",   "",             "", ""},
        {"Phasing Zorcher",                 "Cell",         "",             "", ""},
        {"LAZ Device",                      "Cell",         "",             "", ""},
        {"Super Bootspork",                 "",             "",             "", ""},
    },

    {   // Corvus
        {" Staff ",                         "",             "",             "", ""},
        {"Gauntlets of the Necromancer",    "",             "",             "", ""},
        {"Elven Wand",                      "",             "",             "", ""},
        {" Firemace ",                      "Shell",        "",             "", ""},
        {"Ethereal Crossbow",               "Shell",        "",             "", ""},
        {"Dragon Claw",                     "Clip",         "",             "", ""},
        {"Phoenix Rod",                     "RocketAmmo",   "",             "", ""},
        {"Hellstaff",                       "Cell",         "",             "", ""},
        {"DSparilStaff",                    "",             "",             "", ""},
        {"Gauntlets of the Necromancer",    "",             "",             "", ""},
    },

    {   // B.J.
        {"Knife",                           "",             "",             "", ""},
        {"BJSuperKnife",                    "",             "",             "", ""},
        {"Luger",                           "",             "",             "", ""},
        {"Machine Gun",                     "Clip",         "",             "", ""},
        {"Machine Gun",                     "Clip",         "",             "", ""},
        {"  Chaingun  ",                    "Clip",         "",             "", ""},
        {" Rocket Launcher ",               "RocketAmmo",   "",             "", ""},
        {" Flamethrower ",                  "Cell",         "",             "", ""},
        {"Spear of Destiny",                "Cell",         "",             "", ""},
        {"BJUberKnife",                     "",             "",             "", ""},
    },

    {   // Parias
        {"Mace of Contrition",              "",             "",             "", ""},
        {"PortFlechette",                   "",             "",             "", ""},
        {"Sapphire Wand",                   "",             "",             "", ""},
        {"Frost Shards",                    "Clip",         "",             "", ""},
        {"Timon's Axe",                     "Clip",         "",             "", ""},
        {"Serpent Staff",                   "Clip",         "",             "", ""},
        {"Hammer of Retribution",           "Cell",         "",             "", ""},
        {"Firestorm",                       "Cell",         "",             "", ""},
        {"Wraithverge",                     "Cell",         "",             "", ""},
        {"PortFlechette",                   "",             "",             "", ""},
    },

    {   // Duke
        {"Mighty Boot",                     "",             "",             "", ""},
        {"Pipebombs",                       "RocketAmmo",   "",             "", ""},
        {"Glock 17",                        "",             "",             "", ""},
        {"  Shotgun  ",                     "Shell",        "",             "", ""},
        {"Explosive Shotgun",               "Shell",   "",             "", ""},
        {"Chaingun Cannon",                 "Clip",         "",             "", ""},
        {"RPG",                             "RocketAmmo",   "",             "", ""},
        {"Freezethrower",                   "Cell",         "",             "", ""},
        {"Devastator",                      "Cell",         "",             "", ""},
        {"CalmYoLegsDuke",                  "",             "",             "", ""},
    },

    {   // Security Officer
        {"Steel Knuckles",                  "",             "",             "",                 ""},
        {"KKV-7 SMG Flechette",             "Clip",         "",             "CanDualPistols",   ""},
        {".44 Magnum Mega Class A1",        "",             "",             "",                 ""},
        {"WSTE-M5 Combat Shotgun",          "Shell",        "",             "CanDualShotties",  "LevelLimiter"},
        {"Fusion Pistol",                   "FusionBullet", "Cell",         "",                 ""},
        {"MA-75B Assault Rifle",            "RifleBullet",  "Clip",         "",                 ""},
        {"SPNKR-XP SSM Launcher",           "SpankerAmmo",  "RocketAmmo",   "",                 ""},
        {"TOZT-7 Napalm Unit",              "NapalmInTank", "Cell",         "",                 ""},
        {"ONI-71 Wave Motion Cannon",       "Cell",         "RocketAmmo",   "",                 ""},
        {"Tech.50 Pacifier",                "",             "",             "",                 ""},
    },
	
    {   // Ranger
        {"Axe",                             "",             "",             "",		      ""},
        {"Mjolnir",                         "",             "",             "", 		  ""},
        {"Single Shotgun",                  "",             "",             "",  		  ""},
        {"Double Shotgun",                  "Shell",        "",             "", 		  ""},
        {"Grenade Launcher",                "RocketAmmo",   "",             "",  		  ""},
        {"Nailgun",                         "Clip",         "",             "", 		  ""},
        {"  Rocket Launcher  ",             "RocketAmmo",   "",             "",			  ""},
        {"Super Nailgun",                   "Clip",         "",             "", 		  ""},
        {"Thunderbolt",                     "Cell",         "",             "ForceCheck", ""},
        {"Gauntlet",                        "",             "",             "", 		  ""},
    },
    {   // I.P. Freely
        {"RottKnife",                       "",             "",             "", ""},
        {"Heatseeker",                      "HSMissiles",   "Clip",        "", ""},
        {"RPistol",                  		"",             "",             "", ""},
        {"Double Pistols",                  "",    			"",             "", ""},
        {"Bazooka",                         "RottMissiles",	"Shell",        "", ""},
        {"MP40",                   			"", 			"",        		"", ""},
        {" FireBomb ",                      "FBMissiles",   "RocketAmmo",   "", ""},
        {"DrunkMissiles",                   "DMissiles",    "Cell",         "", ""},
        {"Flamewall",                       "FWMissiles",   "Cell",         "", ""},
    },
	{	// Blake Stone
        {"",                                "",             "",             "", ""},
        {"BlakeSuperAutoCharge",            "",             "",             "", ""},
        {"Auto Charge Pistol",              "",             "",             "", ""},
        {"Slow Fire Protector",             "Shell",    	"",             "", ""},
        {"Heavy Assault Weapon",             "Shell",    		"",             "", ""},
        {"Rapid Assault Weapon",          "Clip",    		"",             "", ""},
        {"Plasma Discharge Unit",           "RocketAmmo",   "",             "", ""},
        {"Dual Neutron Disruptor",       "Cell",    		"",             "", ""},
        {"Anti-Plasma Cannon",              "Cell",   		"",             "", ""},
	},
	{	// Caleb
        {"Pitchfork",                       "",             "",             "", ""},
        {"Dynamite",                        "RocketAmmo",   "",             "", ""},
        {"   Revolver   ",                  "",             "",             "", ""},
        {"Flaregun",             			"Shell",    	"",             "", ""},
        {"SawedOff",             			"Shell",    	"",             "", ""},
        {"Tommygun",             			"Clip",    		"",             "", ""},
        {"NapalmLauncher",           		"RocketAmmo",   "",             "", ""},
        {"TeslaCannon",          			"Cell",    		"",             "", ""},
        {"LifeLeech",              			"Cell",   		"",             "", ""},	
	},
    {   // Strifeguy
        {"Punch Dagger",                    "",             "",             "", ""}, // Fist
        {"StrifeBeaconItem5",               "",             "",             "", ""}, // Chainsaw
        {"   Pistol   ",                    "",             "",             "", ""}, // Pistol
        {"  Crossbow  ",       				"Shell",        "",             "", ""}, // Shotgun
        {"Mini Missile Launcher",           "RocketAmmo",   "",             "", ""}, // Super Shotgun
        {"Assault Gun",                     "Clip",         "",             "", ""}, // Chaingun
        {" Grenade Launcher ", 				"RocketAmmo",   "",             "", ""}, // Rocket Launcher
        {"Flame Thrower",                   "Cell",         "",             "", ""}, // Plasma Rifle
        {" Mauler ",        				"Cell",         "",             "", ""}, // BFG9000
        {"Upgrades",                        "",             "",             "", ""}, // Punchdrunk Chainsaw
    },
    {   // Doom 64 Guy
        {"  Fist  ",                        "",             "",             "", ""},
        {"  Chainsaw  ",                    "",             "",             "", ""},
        {"  Pistol  ",                      "",             "",             "", ""},
        {"   Shotgun   ",                   "Shell",        "",             "", ""},
        {" Super Shotgun ",                 "Shell",        "",             "", ""},
        {"   Chaingun   ",                  "Clip",         "",             "", ""},
        {"   Rocket Launcher   ",           "RocketAmmo",   "",             "", ""},
        {" Plasma Rifle ",                  "Cell",         "",             "", ""},
        {" B.F.G. 9000 ",                   "Cell",         "",             "", ""},
        {"  Chainsaw  ",                    "",             "",             "", ""},
    },
    {   // Eleena
        {"  Claw  ",                        "",             "",             "", ""},
        {" Arachnicator ",                  "RocketAmmo",   "",             "", ""},
        {"  Ripper Disc  ",                 "",             "",             "", ""},
        {"  Sonic Shock  ",                 "Shell",        "",             "", ""},
        {"Pellet Bomb",                 	"Shell",        "",             "", ""},
        {"  Dart Cannon  ",                 "Clip",         "",             "", ""},
        {"    Missile Launcher    ",        "RocketAmmo",   "",             "", ""},
        {"Napalm Charge",                   "Cell",         "",             "", ""},
        {" Plasma Ball ",                   "Cell",         "",             "", ""},
    },
    {   // C7
        {"",                   "",             				"",             "", ""}, // Fist
        {"M24CAW",             "Clip",         				"",             "", ""}, // Chainsaw
        {"Taser",              "",             				"",             "", ""}, // Pistol
        {"M343Vulcan",         "Shell",        				"",             "", ""}, // Shotgun
        {"AssaultShotgun",     "Shell",        				"",             "", ""}, // Super Shotgun
        {"AlienDualBlaster",   "Clip",         				"",             "", ""}, // Chaingun
        {"AlienPlasmaRifle",   "RocketAmmo",   				"",             "", ""}, // Rocket Launcher
        {"AlienAssaultCannon", "Cell",         				"",             "", ""}, // Plasma Rifle
        {"AlienDisintegrator", "Cell",         				"",             "", ""}, // BFG9000
        {"",                   "",             				"",             "", ""}, // Punchdrunk Chainsaw
	},
    {   // RMR
        {"",                			    "",             "",             "", ""}, // Fist
        {"DirtShark",      				    "",         	"",             "", ""}, // Chainsaw
        {" Laser Pistol ",     				"",             "",             "", ""}, // Pistol
        {"ACR Laser Rifle",    				"Shell",        "",             "", ""}, // Shotgun
        {"ACR ADD-ON",     	   				"Shell",        "",             "", ""}, // Super Shotgun
        {"Cyclops Particle Accelerator", 	"Clip", 		"",     		"",	""}, // Chaingun
        {"RMR Grenade Launcher", 			"RocketAmmo", 	"", 			"", ""}, // Rocket Launcher
        {"RMR Railgun", 		 			"Cell",  	   	"",             "", ""}, // Plasma Rifle
        {" RMR Plasma Cannon ",  			"Cell",      	"",             "", ""}, // BFG9000
        {"",                     			"",          	"",             "", ""}, // Punchdrunk Chainsaw
	},	
    {   // Kyle Katarn
        {"  Fist_2x5  ",                    "",             "",             "", ""},
        {"Thermal Detonator",               "RocketAmmo",  	"",             "", ""},
        {"Bryar Pistol",           			"",             "",             "", ""},
        {"Stormtrooper Rifle",              "Shell",        "",             "", ""},
        {"Fusion Cutter",             		"Shell",        "Shell",        "", ""},
        {"Imperial Repeater",         		"Clip",        	"Clip",  	    "", ""},
        {"Mortar Gun",           			"RocketAmmo",   "",             "", ""},
        {"Concussion Rifle",        		"Cell",         "",             "", ""},
        {"Assault Cannon",                  "Cell",         "RocketAmmo",   "", ""},
        {"Stun Gauntlets",               	"",   			"",             "", ""},
    },	
	{	//Mooman
		{" Tazer ",							"",				"",				"",	""},
		{" Toxic Mutant Gun ",				"Cell",			"",				"",	""},
		{" Aldus Pistol ",					"Clip",			"",				"",	""},
		{" Plasma Shotgun ",				"Shell",		"",				"",	""},
		{" Aldus Flamethrower ",			"Shell",		"",				"",	""},
		{" Fast Chaingun ",					"Clip",			"",				"",	""},
		{" Fast Rocket Launcher ",			"RocketAmmo",	"",				"",	""},
		{" Laser Cannon ",					"Cell",			"",				"",	""},
		{" Super Plasma Annihilator ",		"Cell",			"",				"",	""},
	},	
	{	//Jack
		{"Disruptor Fist",					"",				"",				"",	""},
		{" 18mm Auto ",						"Clip",			"",				"",	""},
		{" 18mm Semi ",						"",				"",				"",	""},
		{" Phase Rifle ",					"Clip",			"",				"",	""},
		{" AM Blaster ",					"Shell",		"",				"",	""},
		{"Phase Repeater",					"Clip",			"",				"",	""},
		{" Lock-on Cannon ",				"RocketAmmo",	"",				"",	""},
		{" AM Cyclone ",					"Shell",		"",				"",	""},
		{" Disruptor Zodiac ",  			"Cell",			"",				"",	""},
	},
	//+Added
	{	// Grondoval
		{"Shortsword",						"",				"",				"",	""},
		{"OnyxRing",						"",				"",				"",	""},
		{"Bow and Arrows",					"",				"",				"",	""},
		{"Battle Axe",						"Shell",		"",				"",	""},
		{"Pike Axe",						"Shell",		"",				"",	""},
		{"Ice Halberd",						"Clip",			"",				"",	""},
		{"Fire Mace",						"RocketAmmo",	"",				"",	""},
		{"Frozen two-hand sword",			"Cell",			"",				"",	""},
		{"Spellbook",						"",				"",				"",	""},
	},
	{	//Freebutt
		{"Crowbar",							"",					"",				"",	""},
		{"Hornetgun",						"Cell",				"",				"",	""},
		{"9mm Pistol",						"HL9mmCounter",		"Clip",			"",	""},
		{".357 Python",						"HLPythonCounter",	"Clip",			"",	""},
		{"Assault Shotgun",					"HLShotgunCounter",	"Shell",		"",	""},
		{"MP5",								"HLMP5Counter",		"Clip",			"",	""},
		{" RPG ",							"HLRPGCounter",		"RocketAmmo",	"",	""},
		{"Gauss Cannon",					"Cell",				"",				"",	""},
		{"E.G.O.N.",						"Cell",				"",				"",	""},
	},	
    {   // Lo Wang
	    {"SWFists",                    "",             "",            "", ""},
        {"SWSticky",                   "RocketAmmo",   "",            "", ""},
        {"SWShuriken",                 "",             "",            "", ""},
        {"SWGrenade",                  "Shell",   "",            "", ""},
        {"SWRiotgun",                  "Shell",        "",            "", ""},
        {"SWUzi",                      "Clip",         "",            "", ""},
        {"SWMissileLauncher",          "RocketAmmo",   "",            "", ""},
        {" SWRailgun ",                "Cell",         "",            "", ""},
        {"SWGuardianHead",             "Cell",         "",            "", ""},
	},	
    {   // Cybermage
	    {"MagicFist",                    "",      		 "",            "", ""},
        {"CMDarklightFoil",              "",      		 "",            "", ""},
        {"CMLaserPistol",                "",             "",            "", ""},
        {"CMFusionGun",                  "Shell",   	 "",            "", ""},
        {"CMBlastRifle",                 "Shell",        "",            "", ""},
        {"CMSMG",                      	 "Clip",         "",            "", ""},
        {"CMRocketGun",          		 "RocketAmmo",   "",            "", ""},
        {"CMHVBMG",                		 "Cell",         "",            "", ""},
        {"CMPlasmaGun",             	 "Cell",         "",            "", ""},
	},	
    {   // Jon
	    {"PSMachete",                    "",      		 "",            "", ""},
        {" Anubis Mine ",                "RocketAmmo",	 "",            "", ""},
        {"PSMagnum",                	 "",             "",            "", ""},
        {"ExShotgun",                    "Shell",   	 "",            "", ""},
        {"PSFlamethrower",               "Shell",        "",            "", ""},
        {"PSM60",                      	 "Clip",         "",            "", ""},
        {"PSCobraStaff",          		 "RocketAmmo",   "",            "", ""},
        {"Sacred Manacle",               "Cell",         "",            "", ""},
        {" Mummy Staff ",             	 "Cell",         "",            "", ""},
	},	
    {   // Leonard
	    {" RR Crowbar ",                    "",      		"",            "", ""},
        {" RR Rip Saw ",              		"Shell",      	"",            "", ""},
        {" .454 Casull Pistol ",            "",             "",            "", ""},
        {" RR Hunting Crossbow ",           "Shell",   	 	"",            "", ""},
        {" Scattered Gun ",                 "Shell",        "",            "", ""},
        {" Ranch Rifle ",                   "Clip",         "",            "", ""},
        {" Chicken Crossbow ",          	"RocketAmmo",   "",            "", ""},
        {" Alien Bra Gun ",                	"Cell",         "",            "", ""},
        {" Alien Arm Cannon ",             	"Cell",         "",            "", ""},
	},	
	{   // Bitterman
        {"",                   			    "",             "",             "", ""},
        {"Q2MachineGun",                  	"Clip",         "",             "", ""},
        {"Q2Blaster",           			"",             "",             "", ""},
        {"Q2Shotgun",                       "Shell",        "",             "", ""},
        {"Q2SuperShotgun",             	    "Shell",        "",             "", ""},
        {"Q2Chaingun",         		        "Clip",         "",             "", ""},
        {"Q2RocketLauncher",           		"RocketAmmo",   "",             "", ""},
        {"Q2HyperBlaster",        		    "Cell",         "",             "", ""},
        {"Q2BFG10K",                  		"Cell",         "",             "", ""},
    },
	{   // Demoness
		{"Hexen2Sickle",                   	"",             "",             "", ""},
        {"Hexen2IceMace",                  	"Clip",         "",             "", ""},
        {"Hexen2BloodFire",           		"",             "",             "", ""},
        {"Hexen2SpellBookMagicMissile",     "Clip",         "",             "", ""},
        {"Hexen2AcidRune",             	    "Clip",         "",             "", ""},
        {"Hexen2SpellBookBoneShard",        "Cell",         "",             "", ""},
        {"Hexen2FireRune",           		"Cell",   		"",             "", ""},
        {"Hexen2RavenStaff",        		"Clip",   		"Cell",   		"", ""},
        {"Hexen2TempestStaff",              "Clip",   		"Cell",   		"", ""},
    },
	{   // Bond
		{"Goldeneye_Slapper",               "",             "",             "", ""},
        {"Goldeneye_ThrowingKnives",        "Goldeneye_ThrowingKnivesMagazine",		"Goldeneye_ThrowingKnivesAmmo",             "", ""},
        {"Goldeneye_PP7Silenced",           "Goldeneye_PP7Magazine",            "Clip",             "", ""},
        {"Goldeneye_KF7Soviet",     		"Goldeneye_KF7Magazine",         	"Clip",             "", ""},
        {"Goldeneye_AutoShotgun",           "Goldeneye_AutoShotgunMagazine",	"Shell",             "", ""},
        {"Goldeneye_AR33",        			"Goldeneye_AR33Magazine",         	"Clip",             "", ""},
        {"Goldeneye_RocketLauncher",        "Goldeneye_RocketLauncherMagazine", "RocketAmmo",       "", ""},
        {"Goldeneye_RCP90",        			"Goldeneye_RCP90Magazine",   		"Cell",   		"", ""},
        {"Goldeneye_Moonraker",             "Cell",   		"",   		"", ""},
    },
	{   // Totenkopf
		{"Totenkopf_Knife",               	"",             "",         "", ""},
        {"Totenkopf_Mauser",        		"Clip",		"",         "", ""},
        {"Totenkopf_Pistol",           		"Clip",         "",         "", ""},
        {"Totenkopf_Kar98K",     				"Shell",         "",         "", ""},
        {"Totenkopf_STG44",           		"Shell",		"",         "", ""},
        {"Totenkopf_MP40",        				"Clip",         "",         "", ""},
        {"Totenkopf_Panzerschreck",        	"RocketAmmo", 	"",       	"", ""},
        {"Totenkopf_Chaingun",        		"Cell",   		"",   		"", ""},
        {"Totenkopf_Flakgun",             	"Cell",   		"",   		"", ""},
    },	
};

int ClassScripts[CLASSCOUNT][SLOTCOUNT] = 
{
    {0,0,                   0,  0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0,0},
    {0,SAMSARA_MARATHON,    0,  SAMSARA_MARATHON,SAMSARA_MARATHON,SAMSARA_MARATHON,SAMSARA_MARATHON,SAMSARA_MARATHON,SAMSARA_MARATHON,0},
    {0,0,                   0,  0,0,0,0,0,SAMSARA_QUAKE,0},
	{0,0,					0,	0,0,0,0,0,0,0},
	{0,0,					0,	0,0,0,0,0,0,0},
	{0,0,					0,	0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,SAMSARA_STRIFESIGIL,0},
    {0,0,                   0,  0,0,0,0,0,SAMSARA_DOOM64,0},
	{0,0,					0,	0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0,0},		
    {0,0,                   0,  0,0,0,0,0,SAMSARA_REBELMOON,0},			
    {0,0,                   0,  0,0,0,0,0,0,0},	
	{0,0,					0,	0,0,0,0,0,0,0}, //+Added	
    {0,0,                   0,  0,0,0,0,0,0,0},		
	{0,0,					0,	0,0,0,0,0,0,0}, //+Added
	{0,0,					0,	0,0,0,0,0,0,0}, //+Added	
	{0,0,					0,  0,0,0,0,0,SAMSARA_WANGHEAD,0},	
    {0,0,                   0,  0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0,0},
	{0,0,                   0,  0,0,0,0,0,0,0},
	{0,0,                   0,  0,0,0,0,0,0,0},	
	{0,0,                   0,  0,0,0,0,0,0,0},	
	{0,0,                   0,  0,0,0,0,0,0,0},		
};

//+Added
//Witchaven**********************************************************
#define SPELLAMOUNT 6
#define AMMOAMOUNT 4
int WitchavenSpellCost[SPELLAMOUNT+1][AMMOAMOUNT] =
{
	{0,		0,		0,		0}, 	//nl
	{20,	1,		0,		0}, 	//sc
	{0,		0,		0,		20}, 	//vn
	{0,		0,		3,		40}, 	//fz
	{10,	3,		0,		5}, 	//ar
	{20,	0,		1,		0}, 	//fr
	{25,	10,		5,		150}, 	//nk
};
//scroll graphics:
int WitchavenSpellScroll[SPELLAMOUNT+1][2] =
{
	{"null spell",			"HEADA0"},
	{"scare spell", 		"WSP6A0"},
	{"night vision spell", 	"WSP6B0"},
	{"freeze spell", 		"WSP6C0"}, 
	{"magic arrow spell",   "WSP6D0"},
	{"Fireball spell",		"WSP6E0"}, 
	{"Nuke spell",			"WSP6F0"}, 
};
//spell description
int WitchavenSpellInfo[SPELLAMOUNT+1] =
{
	"???", //null
	"Scare your enemies for 45 seconds!", //scare
	"Be able to see in the dark for 120 seconds!", //vision
	"Try to freeze everyone around you!\nHint: Small radius", //freeze
	"Shoot 10 magical arrows!\nHint: Arrows pierce armor", //arrow
	"Shoot a fire ball to burn your enemies!\nHint: Splash damage", //fire
	"Try to instakill everyone around you!\nHint: Large radius", //nuke
};

#define STRINGAMOUNT 13
#define WT_X 180
#define WT_Y 185
int WitchavenStrings[STRINGAMOUNT][3] =
{
	{"Short Sword",		WT_X,WT_Y},
	{"Bow and arrows",	WT_X,WT_Y},
	{"Onyx Ring",		WT_X,WT_Y},
	{"Battle Axe",		WT_X,WT_Y},
	{"Pike axe",		WT_X,WT_Y},
	{"Ice Halberd",		WT_X,WT_Y},
	{"Mace",			WT_X,WT_Y},
	{"Spellbook",		WT_X,WT_Y},
	{"Two-Hand Sword",	WT_X,WT_Y},
	{"Health potion",	WT_X,WT_Y},
	{"Shield",			WT_X,WT_Y},
	{"Shield useless",	WT_X,WT_Y},
	{"Health critical",	WT_X,WT_Y},
};

#define CLIPAMOUNT 7
int WitchavenClips[CLIPAMOUNT] =
{
	"WTSlotIClip",
	"WTSlotIIClip",
	"WTSlotIIIClip",
	"WTSlotIVClip",
	"WTSlotVClip",
	"WTSlotVIClip",
	"WTSlotVIIClip",
};

#define SAMSARA_RGP_PAGES	2
str SamsaraRGP[CLASSCOUNT][SAMSARA_RGP_PAGES] =
{
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"SpnkrBeam",		"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},	
	{"PGArrowTrail",	"PGSuperPlasmaTrail"},
	{"",				"",},	
	{"WTGrenadeTrail",	"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},
	{"",				"",},	
	{"",				"",},	
	{"",				"",},	
};

#define SAMSARA_RGP_PROPERTIES	2
#define SAMSARA_RGP_HASDELAY 0
#define SAMSARA_RGP_DISTANCE 1
int SamsaraRGPProperties[CLASSCOUNT][SAMSARA_RGP_PAGES][SAMSARA_RGP_PROPERTIES] =
{
	{{0,	0},			{0,		0},},
	{{0,	0},			{0,		0},},
	{{0,	0},			{0,		0},},
	{{0,	0},			{0,		0},},
	{{0,	0},			{0,		0},},
	{{0,	0},			{0,		0},},
	{{1,	8},			{0,		0},},
	{{0,	0},			{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},	
	{{1,	32},		{0,		16},},
	{{0,	0}, 		{0,		0},},
	{{1,	10},		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},
	{{0,	0}, 		{0,		0},},	
	{{0,	0}, 		{0,		0},},	
	{{0,	0}, 		{0,		0},},	
};
