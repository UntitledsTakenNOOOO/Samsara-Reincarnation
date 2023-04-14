// WANG

//Gibs *************************************************************************
sw/gib_start SWGIBSTR
sw/gib_land1 SWGIBLN1
sw/gib_land2 SWGIBLN2
$random sw/gib_land { sw/gib_land1 sw/gib_land2 }

//Weapons **********************************************************************
sw/pickup SWPICKUP
// * Basic yell:
SPHOYA00 SPHOYA00
SPHOYA01 SPHOYA01
SPHOYA02 SPHOYA02
SPHOYA03 SPHOYA03 //this sounds painish 
SPHOYA04 SPHOYA04
SPHOYA05 SPHOYA05
SPHOYA06 SPHOYA06
$random sw/yell { SPHOYA00 SPHOYA01 SPHOYA02 /*SPHOYA03*/ SPHOYA04 SPHOYA05 SPHOYA06 }
$random sw/yell2 { SPHOYA04 SPHOYA05 SPHOYA06 }

TSTICK1 TSTICK1
TSTICK2 TSTICK2
TSTICK3 TSTICK3
TSTICK4 TSTICK4
$random  LoWang/StickyTaunt { TSTICK1 TSTICK2 TSTICK3 TSTICK4 }

// * Fist
sw/fists_wall 	SWF0WALL
sw/fists_flesh 	SWF0FLSH
sw/swing 		SWF0SWNG

// * Katana
sw/katana_draw 	SWF1DRAW
sw/katana_swing	SWF1SWNG
sw/katana_wall	SWF1WALL
sw/katana_flesh	SWF1FLSH
sw/katana_slash SW_KSLSH

LoWang/Haha				SPTNT50
LoWang/LikeShuriken 	SPWEAP00
LoWang/LikeSword		SPWEAP01
NULL NULL
$Random LoWang/Fist { SPHOYA05  SPHOYA06 }
$Random LoWang/Sword { LoWang/Haha LoWang/LikeSword }
$Random LoWang/Shuriken { LoWang/LikeShuriken }

// * Shuriken
sw/shuriken_clank	SWP0CLNK

// * Mines
sw/sticky_boom	 SW10BOOM
sw/sticky_scan	 SW10BEEP
sw/sticky_stick	 SW10STCK
sw/sticky_click	 SW10CLIK
sw/sticky_needle SWSTCKYC

// * Grenade launcher
sw/grenade_launch	SW20SHOT
sw/grenade_bounce	SW20BNCE
sw/grenade_boom		SW20BOOM
sw/grenade_ballboom	SW20BOO2
sw/grenade_ballfire	SW20FIRE

// * Riotgun
Weapons/RiotgunFire		SW30SHOT
Weapons/RiotgunLoad		SW30LOAD
Weapons/ShellCasing		SW30SHLL
Weapons/RiotgunUp		SW30RTUP
$limit Weapons/RiotgunFire 0
$rolloff Weapons/RiotgunFire 224 768

// * Uzi
uzi/fire 	SW40FIRE
uzi/click   SW40CLIK	
uzi/reload 	SW40CLIP
uzi/ready 	SW40RELD
Bullet/Ricochet1			SWWRICO1
Bullet/Ricochet2			SWWRICO2
$Random SWBullet/Ricochet { Bullet/Ricochet1 Bullet/Ricochet2 DSNONE DSNONE DSNONE DSNONE }
Weapons/BulletCasing SWBULCS
$limit uzi/fire 0
$rolloff uzi/fire 224 768

// * Missile Launcher
Weapons/MissileLaunch		SW50FIRE
Weapons/MissileHitX			SW50BOOM
$limit Weapons/MissileHitX 6
Weapons/MissileBeep			SW50BEEP
Weapons/NukeCount			SW50CDWN
Weapons/NukeStandBy			SW50STBY
Weapons/NukeWarning			SW50WRNG
Weapons/NukeBlowz			SW50BOO2
Weapons/NukeReady			SW50SYSR
$rolloff Weapons/NukeBlow 4096 7680

// * Railgun
Weapons/RailgunIdle			SW60IDLE
Weapons/RailgunCharge		SW60RCHG
Weapons/RailgunFire			SW60FIRE
$limit Weapons/RailgunFire 0
$rolloff Weapons/RailgunFire 384 1280

// * Guardian Head
Weapons/GuardianUp			SWGRDSEE
Weapons/FireCircle			SW70FIRC
$limit Weapons/FireCircle 0

Weapons/FlamePillar			SW70PLAR
Weapons/FireHits			SW70BOO2
$limit Weapons/FlamePillar 0
Guardian/Fire				SW70FIRE
Squishy3					SWGIBLN2

// * Heart
Weapons/Heartbeat			SWHEARTB
Weapons/HeartSqueeze		SWHEARTS
wang/twowangs	  			SWHEARTW

// * Nades
SW/DarkNinja/FlashBomb		Sounds/SW/SWGASPOP.WAV
GasBomb/Loop				SW_HISS1

SPKILL0		SPKILL0
SW/Drown1	SPKILL1
SW/Drown2	SPKILL2

$Random SW/Drown { SW/Drown1 SW/Drown2 }

SW/Land		SPLAND0

GRUNT06 GRUNT06
GRUNT07 GRUNT07
$random  SW/PUSH { GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT06 GRUNT07 }

SW/Taunt1	SPTNT04
SW/Taunt2	SPTNT02
SW/Taunt3	SPTNT12
SW/Taunt4	SPTNT14
SW/Taunt5	SPTNT16
SW/Taunt6	SPTNT19
SW/Taunt7	SPTNT30
SW/Taunt8	SPTNT32
SW/Taunt9	SPTNT13
SW/Taunt10	SPTNT34
SW/Taunt11	SPTNT52
SW/Taunt12	SPTNT53
SW/Taunt13	SPWAIT10
SW/Taunt14	SPWAIT06
SW/Taunt15 	SPWAIT08
SW/Taunt16	SPWAIT14
SW/Taunt17  SPWAIT11
SW/Taunt18	JG2078
SW/Taunt19	JG3059
SW/Taunt20	JG3047
SW/Taunt21	JG6053
SW/Taunt22	JG6051
SW/Taunt23	JGB023
SW/Taunt24	JG2045
SW/Taunt25	JG3070
SW/Taunt26	JG3017
SW/Taunt27	JG2087
SW/Taunt28	JG44025
SW/Taunt29	JG44032
SW/Taunt30	JG44027
SW/Taunt31	JG42004
SW/Taunt32	SPEED04
SW/Taunt33  SPTNT08
SW/Taunt44	JG44052
$Random LoWang/Taunt { LoWang/BossW SW/KillTauntF OlWang/BossB LoWang/BossV SW/Taunt17 SW/GibTauntF SW/Taunt19 SW/Taunt26 SW/Taunt27 SW/Taunt29 SW/Taunt30 
					   SW/Taunt16 SW/Taunt15 SW/Taunt14 SW/Taunt13 SW/Taunt1 SW/Taunt2 SW/Taunt3 SW/Taunt4 SW/Taunt25 SW/Taunt28 SW/Taunt31	SW/Taunt33
					   SW/Taunt5 SW/Taunt6 SW/Taunt7 SW/Taunt8 SW/Taunt9 SW/Taunt11 SW/Taunt12 SW/Taunt18 SW/Taunt21 SW/Taunt22 SW/Taunt24 SW/Taunt32 SW/Taunt44 }

SWPAIN1 SWPAIN07
SWPAIN2 SWPAIN22
SWPAIN3 SWPAIN03
SWPAIN4 SWPAIN05
$random  SWPAIN100 { SWPAIN1  SWPAIN2  SWPAIN3 SWPAIN4 }
SWYELL1 SWYELL1
SWYELL2 SWYELL2
SWYELL3 SWYELL3
$random  SWPAIN50 { SWYELL1  SWYELL2 SWYELL3 }
SWYELL4 SWYELL4
SWYELL5 SWYELL5
$random  SWPAIN25 { SWYELL1  SWYELL2 SWYELL3 SWYELL4  SWYELL5 }
SWPAIN8 SPOUCH1
SWPAIN6 SPOUCH3
SWPAIN7 SPOUCH5
$random  SWPAINSTICKY { SWPAIN8 SWPAIN100 SWPAIN6 SWPAIN50 SWPAIN7 }

$playeralias	LoWang	 male	*death			SWPAIN25
$playersound	LoWang	 male	*xdeath			sw/gib_start
$playersounddup	LoWang	 male	*burndeath		*death
$playersounddup	LoWang	 male	*crazydeath		*death
$playersounddup LoWang	 male   *wimpydeath 	*death
$playersounddup	LoWang	 male	*gibbed			*xdeath
$playersound	LoWang	 male	*falling		SPKILL0
$playersound	LoWang	 male	*burndeath		SPKILL0
$playeralias	LoWang	 male	*pain100		SWPAIN100
$playeralias	LoWang	 male	*pain75			SWPAIN100
$playeralias	LoWang	 male	*pain50			SWPAIN50
$playeralias	LoWang	 male	*pain25			SWPAIN25
$playeralias	LoWang	 male	*land			SW/Land
$playeralias	LoWang	 male	*usefail		SW/PUSH
$playersound	LoWang	 male	*puzzfail		GRUNT06
$playersound	LoWang	 male	*grunt			GRUNT06
$playeralias	LoWang	 male	*taunt			LoWang/Taunt
$playeralias   	LoWang   male   *drown          SW/Drown
$Playeralias	LoWang	 male   *surface		LoWang/Surface
$playersound    LoWang   male   *poison     	SPOUCH4

LoWang/Surface	SPHEAL2

SPOUCH4			SPOUCH4

SW/KillTaunt1	SPTNT19
SW/KillTaunt2	SPTNT24
SW/KillTaunt3	SPTNT21
SW/KillTaunt4	SPTNT25
SW/KillTaunt5	SPTNT26
SW/KillTaunt6	SPTNT28
SW/KillTaunt7	SPTNT46
SW/KillTaunt8	SPTNT47
SW/KillTaunt9	SPTNT07
SW/KillTauntA	SPTNT42
SW/KillTauntB	SPTNT51
SW/KillTauntC	SPTNT17
SW/KillTauntD	SPTNT40
SW/KillTauntE	SPWAIT20
SW/KillTauntF	SPWAIT26
SW/LoWangKT01	JG1087
SW/LoWangKT02	JG2075
SW/LoWangKT03	BABOON03
SW/LoWangKT04	JG45067
SW/LoWangKT05	JG440252
SW/LoWangKT06	JG41028
SW/LoWangKT07	JG410282
SW/LoWangKT08	JG42033
$Random LoWang/TauntKill { SW/KillTaunt8 SW/KillTauntF SW/KillTauntE SW/KillTauntD SW/KillTauntC SW/Intro7 SW/Intro5 SW/Intro4 SW/KillTaunt1 SW/KillTaunt2 SW/KillTaunt3 SW/KillTaunt4
						   SW/KillTaunt5 SW/KillTaunt6 SW/KillTaunt7 SW/KillTaunt9 SW/KillTauntA LoWang/Haha SW/Taunt19 SW/LoWangKT01 SW/LoWangKT02 SW/LoWangKT03 SW/LoWangKT04 SW/LoWangKT05 SW/LoWangKT06 SW/LoWangKT07 }

SW/SwrdKill1	SPWEAP08
SW/SwrdKill2	SPWEAP05
SW/SwrdKill3	SPWEAP04
SW/SwrdKill4	SPWAIT25

$Random LoWang/SwordKill { SW/SwrdKill1 SW/SwrdKill2 SW/SwrdKill3 SW/SwrdKill4 }

SW/GibTaunt1	SPTNT15
SW/GibTaunt2	SPTNT18
SW/GibTaunt3	SPTNT22
SW/GibTaunt4	SPTNT27
SW/GibTaunt5	SPTNT33
SW/GibTaunt6	SPTNT42
SW/GibTaunt8	SPTNT45
SW/GibTaunt9	SPTNT48
SW/GibTauntB	SPWAIT29
SW/GibTauntA	SPTNT11
SW/GibTauntC	SPTNT35
SW/GibTauntD	SPTNT38
SW/GibTauntE	SPTNT39
SW/GibTauntF	SPWAIT09
SW/GibTauntG	SPWAIT13
SW/GibTauntH	SPWAIT16
SW/GibTauntI	SPWAIT15
SW/GibTauntJ	SPWAIT18
SW/GibTauntK	SPWAIT19
SW/GibTauntL	SPTNT54
SW/GibTauntM	SPTNT55
SW/GibTauntN	SPTNT56
SW/GibTauntO	JG44053
SW/GibTauntP	JG44054
$Random	LoWang/TauntGib { SW/GibTauntM LoWang/BossA SW/GibTauntN SW/GibTauntL SW/GibTauntJ SW/GibTauntI SW/GibTauntH SW/GibTauntG SW/GibTauntE SW/Taunt10 SW/GibTauntD SW/IntroD SW/GibTauntC SW/LoWangKT08 SW/GibTauntO
						  SW/GibTauntA SW/GibTaunt1 SW/GibTaunt2 SW/GibTaunt3 SW/GibTaunt4 SW/GibTaunt5 SW/GibTaunt6 SW/KillTaunt8 SW/GibTaunt8 SW/GibTaunt9 SW/GibTauntB SW/KillTauntB SW/IntroF LoWang/TauntKill SW/GibTauntP }

SW/Intro1		SPTNT01
SW/Intro2		SPTNT03
SW/Intro4		SPTNT09
SW/Intro5		SPTNT10
SW/Intro6		SPTNT14
SW/Intro7		SPTNT23
SW/Intro8		SPWAIT06
SW/Intro9		SPTNT28
SW/IntroA		SPTNT29
SW/IntroB		SPTNT30
SW/IntroC		SPTNT32
SW/IntroD		SPTNT36
SW/IntroE		SPTNT42
SW/IntroF		SPTNT44
SW/IntroG		SPTNT02
SW/IntroH		SPWAIT31
SW/IntroI		JG9060
SW/IntroJ		JG92055
SW/IntroK		DTIME2
SW/IntroL		JG93000
SW/IntroM		JG4024
SW/IntroN		JG44048
SW/IntroO		JG3005
SW/IntroP		JG41075
$Random LoWang/Enter { DSNONE SW/Taunt10 SW/IntroH DSNONE SW/Intro1 SW/Intro2 DSNONE SW/Intro3 SW/Intro4 DSNONE SW/Intro5 SW/Intro6 DSNONE SW/Intro7 SW/Intro8 DSNONE SW/Intro9 SW/IntroA DSNONE SW/IntroB SW/IntroC DSNONE
					   SW/IntroD SW/IntroE DSNONE SW/IntroF SW/IntroG DSNONE SW/Taunt20 SW/IntroI SW/IntroJ DSNONE SW/IntroK SW/IntroL DSNONE SW/IntroM SW/IntroN DSNONE SW/IntroO SW/IntroP DSNONE }

LoWang/Boss1	SPBOSS00
LoWang/Boss2	SPBOSS01
LoWang/Boss3	SPBOSS02
LoWang/Boss4	SPBOSS03
LoWang/Boss5	SPBOSS04
LoWang/Boss6	SPBOSS05
LoWang/Boss7	SPBOSS06
LoWang/Boss8	SPBOSS07
LoWang/Boss9	SPBOSS08
LoWang/BossA	SPBOSS09
LoWang/BossB	SPBOSS10
LoWang/BossC	SPBOSS11
LoWang/BossD	SPBOSS12
LoWang/BossE	SPBOSS13
LoWang/BossF	SPBOSS14
LoWang/BossG	SPBOSS15
LoWang/BossH	SPBOSS16
LoWang/BossJ	SPOUCH0
LoWang/BossK	SPOUCH2
LoWang/BossL	SPTNT18
LoWang/BossM	SPTNT20
LoWang/BossN	SPTNT31
LoWang/BossO    SPTNT37
LoWang/BossP    SPTNT38
LoWang/BossQ    SPTNT41
LoWang/BossR    SPTNT43
LoWang/BossS    SPTNT48
LoWang/BossT    SPTNT49
LoWang/BossU    SPWAIT17
LoWang/BossV    SPWAIT22
LoWang/BossW    SPWAIT27
LoWang/BossX    SPWAIT28
LoWang/BossY    SPWAIT30
LoWang/BossZ    SPWAIT06
OlWang/BossA	SPTNT05
OlWang/BossB	SPWAIT07
Olwang/BossC	SPWAIT12
Olwang/BossD    SPWAIT01
Olwang/BossE    SPTNT57
Olwang/BossF    JG44011
Olwang/BossG    MFLY02
Olwang/BossH	JG1088
Olwang/BossI	JG4002
Olwang/BossJ	JG2005
$Random LoWang/BossSight { LoWang/Boss1 LoWang/Boss2 LoWang/Boss3 LoWang/Boss4 LoWang/Boss5 LoWang/Boss6 LoWang/Boss7 LoWang/Boss8 LoWang/Boss9 LoWang/BossA LoWang/BossB LoWang/BossC LoWang/BossD LoWang/BossE Olwang/BossH 
						   LoWang/BossF LoWang/BossG LoWang/BossH LoWang/BossJ LoWang/BossK LoWang/BossL LoWang/BossM LoWang/BossN LoWang/BossO LoWang/BossP LoWang/BossQ LoWang/BossR LoWang/BossS SW/Taunt23 Olwang/BossJ 
						   LoWang/BossT LoWang/BossU LoWang/BossV LoWang/BossW LoWang/BossX LoWang/BossY LoWang/BossZ OlWang/BossA SW/IntroE OlWang/BossB Olwang/BossD Olwang/BossE SW/IntroH Olwang/BossF Olwang/BossG Olwang/BossI }
 
$Random LoWang/MixedTaunt { LoWang/TauntKill LoWang/TauntGib SPWAIT05 SPWAIT23 HIRO032 }
SPWAIT05 SPWAIT05
SPWAIT23 SPWAIT23	
HIRO032	 HIRO032

IHOPE01  IHOPE01
IKILLU	 KILLU05
$random LoWang/FistTaunt { LoWang/BossT LoWang/BossG NULL IHOPE01 SW/Intro8 IKILLU }
TSWORD1 TSWORD1
TSWORD2 TSWORD2
TSWORD3 TSWORD3
TSWORD4 AHSO5
$Random LoWang/Split { DSNONE TSWORD1 TSWORD2 TSWORD3 TSWORD4 }

Item/SWpickup		SWPICKUP
Item/SWpickupbig	SWBGITEM

$Random LoWang/Secret { SW_SECRET1 SW_SECRET2 sw/katana_draw }

SW_SECRET1		Sounds/ShadowWarrior/Player/SW_SECRET1
SW_SECRET2		Sounds/ShadowWarrior/Player/SW_SECRET2

$Random SW/Secret { DSNONE LoWang/Secret0 LoWang/Secret1 DSNONE LoWang/Secret2 SW_SECRET4 DSNONE SW_SECRET5 TSWORD4 DSNONE }

LoWang/Secret0	SPKEY0
LoWang/Secret1	SPKEY1
LoWang/Secret2	SPKEY2
SW_SECRET4		Sounds/ShadowWarrior/Player/SW_SECRET4
SW_SECRET5		Sounds/ShadowWarrior/Player/SW_SECRET5

$Random LoWang/Flirt { LoWang/Flirt1 LoWang/Flirt2 LoWang/Flirt3 LoWang/Flirt4 LoWang/Flirt5 LoWang/Flirt6 LoWang/Flirt7 LoWang/Flirt8 LoWang/Flirt9 LoWang/Flirt10 }
LoWang/Flirt1 "Sounds/ShadowWarrior/Player/SPWAIT28.ogg"
LoWang/Flirt2 "Sounds/ShadowWarrior/Player/SPWAIT31.ogg"
LoWang/Flirt3 "Sounds/ShadowWarrior/Player/SPWAIT27.ogg"
LoWang/Flirt4 "Sounds/ShadowWarrior/Player/SPWAIT15.ogg"
LoWang/Flirt5 "Sounds/ShadowWarrior/Player/SPWAIT14.ogg"
LoWang/Flirt6 "Sounds/ShadowWarrior/Player/SPWAIT08.ogg"
LoWang/Flirt7 "Sounds/ShadowWarrior/Player/SPWAIT07.ogg"
LoWang/Flirt8 "Sounds/ShadowWarrior/Player/SPTNT54.wav"
LoWang/Flirt9 "Sounds/ShadowWarrior/Player/SPTNT47.ogg"
LoWang/Flirt10 "Sounds/ShadowWarrior/Player/SPTNT08.ogg"

$random sw/prune/chatter { sw/prune/chatter1 sw/prune/chatter2 sw/prune/chatter3 sw/prune/chatter4 }
sw/prune/chatter1		"Sounds/ShadowWarrior/Randoms/SW_LANI093.wav"
sw/prune/chatter2		"Sounds/ShadowWarrior/Randoms/SW_LANI091.wav"
sw/prune/chatter3		"Sounds/ShadowWarrior/Randoms/SW_LANI089.wav"
sw/prune/chatter4		"Sounds/ShadowWarrior/Randoms/SW_LANI095.wav"
$random sw/prune/cackle { sw/prune/cackle1 sw/prune/cackle2 sw/prune/cackle3 }
sw/prune/cackle1		"Sounds/ShadowWarrior/Randoms/SW_CACKLE.wav"
sw/prune/cackle2		"Sounds/ShadowWarrior/Randoms/SW_CACKLE2.wav"
sw/prune/cackle3		"Sounds/ShadowWarrior/Randoms/SW_CACKLE3.wav"
sw/girl/scream			"Sounds/ShadowWarrior/Randoms/SW_TGPAIN.wav"
sw/girl/uzi				"Sounds/ShadowWarrior/Randoms/SW_GIRLUZI.ogg"

$random sw/wash/sing	{ sw/wash/sing1 sw/wash/sing2 }
sw/wash/sing1			"Sounds/ShadowWarrior/Randoms/SW_ACHS010.wav"
sw/wash/sing2			"Sounds/ShadowWarrior/Randoms/SW_ACHS016.wav"

$random sw/girl/mad		{ sw/girl/mad1 sw/girl/mad2 }
sw/girl/mad1			"Sounds/ShadowWarrior/Randoms/SW_ACHT1006.wav"
sw/girl/mad2			"Sounds/ShadowWarrior/Randoms/SW_ACHT120A.wav"

$random sw/mechgirl/talk { sw/mechgirl/talk1 sw/mechgirl/talk2 sw/mechgirl/talk3 sw/mechgirl/talk4 }
sw/mechgirl/talk1		"Sounds/ShadowWarrior/Randoms/SW_LANI073.wav"
sw/mechgirl/talk2		"Sounds/ShadowWarrior/Randoms/SW_LANI075.wav"
sw/mechgirl/talk3		"Sounds/ShadowWarrior/Randoms/SW_LANI077.wav"
sw/mechgirl/talk4		"Sounds/ShadowWarrior/Randoms/SW_LANI079.wav"

$random sw/cargirl/talk { sw/cargirl/talk1 sw/cargirl/talk2 sw/cargirl/talk3 sw/cargirl/talk4 }
sw/cargirl/talk1		"Sounds/ShadowWarrior/Randoms/SW_LANI049.wav"
sw/cargirl/talk2		"Sounds/ShadowWarrior/Randoms/SW_LANI051.wav"
sw/cargirl/talk3		"Sounds/ShadowWarrior/Randoms/SW_LANI052.wav"
sw/cargirl/talk4		"Sounds/ShadowWarrior/Randoms/SW_LANI054.wav"

$random sw/moongirl/talk { sw/moongirl/talk1 sw/moongirl/talk2 sw/moongirl/talk3 }
sw/moongirl/talk1		"Sounds/ShadowWarrior/Randoms/SW_LANI063.wav"
sw/moongirl/talk2		"Sounds/ShadowWarrior/Randoms/SW_LANI065.wav"
sw/moongirl/talk3		"Sounds/ShadowWarrior/Randoms/SW_LANI066.wav"

sw/moongirl/gift		"Sounds/ShadowWarrior/Randoms/SW_LANI060.wav"

$Random	LoWang/Eww { LoWang/Eww1 LoWang/Eww2 LoWang/Eww3 LoWang/Eww4 LoWang/Eww5 LoWang/Eww6 LoWang/Eww7 }
LoWang/Eww1		JG45067
LoWang/Eww2		SPBOSS00
LoWang/Eww3		SPBOSS01
LoWang/Eww4		SPBOSS02
LoWang/Eww5		SPBOSS03
LoWang/Eww6		SPBOSS04
LoWang/Eww7		SPBOSS05

$random	sw/rabbit/die	{ sw/rabbit/die1 sw/rabbit/die2 sw/rabbit/die3 }
sw/rabbit/die1		"Sounds/ShadowWarrior/Randoms/SW_RABDIE1.wav"
sw/rabbit/die2		"Sounds/ShadowWarrior/Randoms/SW_RABDIE2.wav"
sw/rabbit/die3		"Sounds/ShadowWarrior/Randoms/SW_RABDIE3.wav"
sw/rabbit/screw		"Sounds/ShadowWarrior/Randoms/SW_RABATK1.wav"

$Random DarkSideAI/LoWang/Taunt { LoWang/BossW SW/KillTauntF OlWang/BossB LoWang/BossV SW/Taunt17 SW/GibTauntF SW/Taunt19 SW/Taunt26 SW/Taunt27 SW/Taunt29 SW/Taunt30 
					   SW/Taunt16 SW/Taunt15 SW/Taunt14 SW/Taunt13 SW/Taunt1 SW/Taunt2 SW/Taunt3 SW/Taunt4 SW/Taunt25 SW/Taunt28 SW/Taunt31	SW/Taunt33
					   SW/Taunt5 SW/Taunt6 SW/Taunt7 SW/Taunt8 SW/Taunt9 SW/Taunt11 SW/Taunt12 SW/Taunt18 SW/Taunt21 SW/Taunt22 SW/Taunt24 SW/Taunt32 SW/Taunt44 }
$random  DarkSideAI/LoWang/Pain { SWPAIN1  SWPAIN2  SWPAIN3 SWPAIN4 }
$random  DarkSideAI/LoWang/Death { SWYELL1  SWYELL2 SWYELL3 SWYELL4  SWYELL5 }
DarkSideAI/LoWang/XDeath	SWGIBSTR