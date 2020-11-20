script SAMSARA_OPEN open
{
    IsServer = 1;
    int opd, pd;
    int opdu, pdu;
    int opds, pds;
        
    if (!GetCVar("sams_cvarinfo"))
    {   SetCVar ("sams_cvarinfo", 0);
    //ConsoleCommand("archivecvar samsara_cvarinfo"); 
    }
    
	//ACS_NamedExecuteAlways("sams_RESETPLAYER_COOP",0,0,0,0);
	
    if (SamsaraGlobal[GLOBAL_DONEBITCHING] == 0)
    {
		HudMessage(s:"Extra Heroes Changelist ",d:SAMSARA_CHANGELIST; HUDMSG_FADEOUT|HUDMSG_LOG, 93002, CR_GOLD, 1.5, 0.265, 2.0, 0.5);
        if (GameType() == GAME_TITLE_MAP)
        {
        }
        if (isSinglePlayer())
        {
            if(GetCvar("sams_cvarinfo") == 0)
            {
			HudMessage(s:"Extra Heroes Changelist ",d:SAMSARA_CHANGELIST;
            HUDMSG_FADEOUT, 93002, CR_WHITE, 1.5, 0.2, 2.0, 0.5);
            HudMessage(s:HELPSTR;
            HUDMSG_PLAIN|HUDMSG_LOG, 92712, CR_WHITE, 1.5, 0.2, 2.5);
            HudMessage(s:HELPSTR_CL;
            HUDMSG_PLAIN|HUDMSG_LOG, 92712, CR_WHITE, 1.5, 0.2, 2.5);
            HudMessage(s:"\cjSee the console for \cacvar information\c-.";
            HUDMSG_FADEOUT, 92712, CR_WHITE, 1.5, 0.2, 2.0, 0.5);
            SetCVar ("sams_cvarinfo", 1);
            //ConsoleCommand("archivecvar samsara_cvarinfo");
            }
        }
        else
        {
            Log(s:HELPSTR);
        }
        
        SamsaraGlobal[GLOBAL_DONEBITCHING] = 1;
    }

    ArmorMode = middle(0, GetCVar("sams_armormode"), ARMORMODES-1);
    CheckMapArmors();
    
    while (1)
    {
        // I'd use defaultCVar but best-ever breaks on it for some reason :/
        
        // KINSNOTE - I'm pretty sure that this effectively sets the default settings, so nothing that
        // CVARINFO doesn't already do. Let's comment it out and see if we can get away with it.

        /*
        if (!GetCVar("sams_banjetpack"))
        {   SetCVar ("sams_banjetpack", 0);
        //ConsoleCommand("archivecvar samsara_banjetpack"); 
        }
        
        if (!GetCVar("sams_banwolfmove"))
        {   SetCVar ("sams_banwolfmove", 0);
        //ConsoleCommand("archivecvar samsara_banwolfmove");  
        }
        
        if (!GetCVar("sams_lmslife"))
        {   SetCVar ("sams_lmslife", 0);
        //ConsoleCommand("archivecvar samsara_lmslife"); 
        }
        
        if (GetCVar("sams_lmsunique"))
        {
            //ConsoleCommand("unset samsara_lmsunique");

            if (!GetCVar("sams_uniquestart"))
            {
                SetCVar ("sams_uniquestart", 2);
                //ConsoleCommand("archivecvar samsara_uniquestart");
            }
        }
        
        if (!GetCVar("sams_lmsult"))
        {   SetCVar ("sams_lmsult", 0);
        //ConsoleCommand("archivecvar samsara_lmsult");  
        }
        
        if (!GetCVar("sams_nocustomgravity"))
        {   SetCVar ("sams_nocustomgravity", 0);
        //ConsoleCommand("archivecvar samsara_nocustomgravity");  
        }
        
        if (!GetCVar("sams_permault"))
        {   SetCVar ("sams_permault", 0);
        //ConsoleCommand("archivecvar samsara_permault");  
        }
        
        if (!GetCVar("sams_jumpmod"))
        {   SetCVar ("sams_jumpmod", 0);
        //ConsoleCommand("archivecvar samsara_jumpmod");  
        }
        
        if (!GetCVar("sams_peoplediewhentheyarekilled"))
        {   SetCVar ("sams_peoplediewhentheyarekilled", 0);
        //ConsoleCommand("archivecvar samsara_peoplediewhentheyarekilled");  
        }
        
        if (!GetCVar("compat_clientssendfullbuttoninfo"))
        {   SetCVar ("compat_clientssendfullbuttoninfo", 1);
        //ConsoleCommand("archivecvar compat_clientssendfullbuttoninfo");  
        }
        
        if (!GetCVar("sams_armormode"))
        {   SetCVar ("sams_armormode", 0);
        //ConsoleCommand("archivecvar samsara_armormode");  
        }
        
        if (!GetCVar("sams_nohealthcap"))
        {   SetCVar ("sams_nohealthcap", 0);
        //ConsoleCommand("archivecvar samsara_nohealthcap");  
        }
        
        if (!GetCVar("sams_chainsawstart"))
        {   SetCVar ("sams_chainsawstart", 0);
        //ConsoleCommand("archivecvar samsara_chainsawstart");  
        }
        
        if (!GetCVar("sams_uniquestart"))
        {   SetCVar ("sams_uniquestart", 0);
        //ConsoleCommand("archivecvar samsara_uniquestart");  
        }
        
        if (!GetCVar("sams_punchdrunk"))
        {   SetCVar ("sams_punchdrunk", 0);
        //ConsoleCommand("archivecvar samsara_punchdrunk");  
        }
        
        if (!GetCVar("sams_nomonologues"))
        {   SetCVar ("sams_nomonologues", 0);
        //ConsoleCommand("archivecvar samsara_nomonologues");  
        }
        
        if (!GetCVar("sams_punchdrunkuniques"))
        {   SetCVar ("sams_punchdrunkuniques", 0);
        //ConsoleCommand("archivecvar samsara_punchdrunkuniques");  
        }
        
        if (!GetCVar("sams_punchdrunksaws"))
        {   SetCVar ("sams_punchdrunksaws", 0);
        //ConsoleCommand("archivecvar samsara_punchdrunksaws");  
        }
        
        if (!GetCVar("sams_noult"))
        {   SetCVar ("sams_noult", 0);
        //ConsoleCommand("archivecvar samsara_noult");  
        }
        
        if (!GetCVar("sams_backpackstart"))
        {   SetCVar ("sams_backpackstart", 0);
        //ConsoleCommand("archivecvar samsara_backpackstart");  
        }
        
        if (!GetCVar("sams_superturboturkeypuncher3000"))
        {   SetCVar ("sams_superturboturkeypuncher3000", 0);
        //ConsoleCommand("archivecvar samsara_superturboturkeypuncher3000");  
        }
        
        if (!GetCVar("sams_superturboturkeylimit"))
        {   SetCVar ("sams_superturboturkeylimit", 0);
        //ConsoleCommand("archivecvar samsara_superturboturkeylimit");  
        }
        
        if (!GetCVar("sams_superturboturkeyfrequency"))
        {   SetCVar ("sams_superturboturkeyfrequency", 35);
        //ConsoleCommand("archivecvar samsara_superturboturkeyfrequency");  
        }
        
        if (!GetCVar("sams_classiclaz"))
        {   SetCVar ("sams_classiclaz", 0);
        //ConsoleCommand("archivecvar samsara_classiclaz");  
        }
        
        if (!GetCVar("sams_allcanrj"))
        {   SetCVar ("sams_allcanrj", 0);
        //ConsoleCommand("archivecvar samsara_allcanrj");  
        }
        
        if (!GetCVar("sams_nounique"))
        {   SetCVar ("sams_nounique", 0);
        //ConsoleCommand("archivecvar samsara_nounique");  
        }
        
        if (!GetCVar("sams_noinvuln"))
        {   SetCVar ("sams_noinvuln", 0);
        //ConsoleCommand("archivecvar samsara_noinvuln");  
        }
        
        if (!GetCVar("sams_bandoomguy"))
        {   SetCVar ("sams_bandoomguy", 0);
        //ConsoleCommand("archivecvar samsara_bandoomguy");  
        }
        
        if (!GetCVar("sams_banchex"))
        {   SetCVar ("sams_banchex", 0);
        //ConsoleCommand("archivecvar samsara_banchex");  
        }
        
        if (!GetCVar("sams_bancorvus"))
        {   SetCVar ("sams_bancorvus", 0);
        //ConsoleCommand("archivecvar samsara_bancorvus");  
        }
        
        if (!GetCVar("sams_banbj"))
        {   SetCVar ("sams_banbj", 0);
        //ConsoleCommand("archivecvar samsara_banbj");  
        }
        
        if (!GetCVar("sams_banparias"))
        {   SetCVar ("sams_banparias", 0);
        //ConsoleCommand("archivecvar samsara_banparias");  
        }
        
        if (!GetCVar("sams_banduke"))
        {   SetCVar ("sams_banduke", 0);
        //ConsoleCommand("archivecvar samsara_banduke");  
        }
        
        if (!GetCVar("sams_banso"))
        {   SetCVar ("sams_banso", 0);
        //ConsoleCommand("archivecvar samsara_banso");  
        }
        
        if (!GetCVar("sams_banranger"))
        {   SetCVar ("sams_banranger", 0);
        //ConsoleCommand("archivecvar samsara_banranger");  
        }
        
        if (!GetCVar("sams_lmsrules"))
        {   SetCVar ("sams_lmsrules", 0);
        //ConsoleCommand("archivecvar samsara_lmsrules");  
        }
        
        if (!GetCVar("sams_doomguydamage"))
        {   SetCVar ("sams_doomguydamage", 0);
        //ConsoleCommand("archivecvar samsara_doomguydamage");  
        }
        
        if (!GetCVar("sams_doomguydefense"))
        {   SetCVar ("sams_doomguydefense", 0);
        //ConsoleCommand("archivecvar samsara_doomguydefense");  
        }
        
        if (!GetCVar("sams_chexdamage"))
        {   SetCVar ("sams_chexdamage", 0);
        //ConsoleCommand("archivecvar samsara_chexdamage");  
        }
        
        if (!GetCVar("sams_chexdefense"))
        {   SetCVar ("sams_chexdefense", 0);
        //ConsoleCommand("archivecvar samsara_chexdefense");  
        }
        
        if (!GetCVar("sams_corvusdamage"))
        {   SetCVar ("sams_corvusdamage", 0);
        //ConsoleCommand("archivecvar samsara_corvusdamage");  
        }
        
        if (!GetCVar("sams_corvusdefense"))
        {   SetCVar ("sams_corvusdefense", 0);
        //ConsoleCommand("archivecvar samsara_corvusdefense");  
        }
        
        if (!GetCVar("sams_bjdamage"))
        {   SetCVar ("sams_bjdamage", 0);
        //ConsoleCommand("archivecvar samsara_bjdamage");  
        }
        
        if (!GetCVar("sams_bjdefense"))
        {   SetCVar ("sams_bjdefense", 0);
        //ConsoleCommand("archivecvar samsara_bjdefense");  
        }
        
        if (!GetCVar("sams_pariasdamage"))
        {   SetCVar ("sams_pariasdamage", 0);
        //ConsoleCommand("archivecvar samsara_pariasdamage");  
        }
        
        if (!GetCVar("sams_pariasdefense"))
        {   SetCVar ("sams_pariasdefense", 0);
        //ConsoleCommand("archivecvar samsara_pariasdefense");  
        }
        
        if (!GetCVar("sams_dukedamage"))
        {   SetCVar ("sams_dukedamage", 0);
        //ConsoleCommand("archivecvar samsara_dukedamage");  
        }
        
        if (!GetCVar("sams_dukedefense"))
        {   SetCVar ("sams_dukedefense", 0);
        //ConsoleCommand("archivecvar samsara_dukedefense");  
        }
        
        if (!GetCVar("sams_sodamage"))
        {   SetCVar ("sams_sodamage", 0);
        //ConsoleCommand("archivecvar samsara_sodamage");  
        }
        
        if (!GetCVar("sams_sodefense"))
        {   SetCVar ("sams_sodefense", 0);
        //ConsoleCommand("archivecvar samsara_sodefense");  
        }
        
        if (!GetCVar("sams_rangerdamage"))
        {   SetCVar ("sams_rangerdamage", 0);
        //ConsoleCommand("archivecvar samsara_rangerdamage");  
        }
        
        if (!GetCVar("sams_rangerdefense"))
        {   SetCVar ("sams_rangerdefense", 0);
        //ConsoleCommand("archivecvar samsara_rangerdefense");  
        }
        
        if (!GetCVar("sams_permaquad"))
        {   SetCVar ("sams_permaquad", 0);
        //ConsoleCommand("archivecvar samsara_permaquad");  
        }
        
        if (!GetCVar("sams_pistolammo"))
        {   SetCVar ("sams_pistolammo", 0);
        //ConsoleCommand("archivecvar samsara_pistolammo");  
        }
        
        if (!GetCVar("sams_dukesoundboard"))
        {   SetCVar ("sams_dukesoundboard", 0);
        //ConsoleCommand("archivecvar samsara_dukesoundboard");  
        }
        
        if (!GetCVar("sams_nohealth"))
        {   SetCVar ("sams_nohealth", 0);
        //ConsoleCommand("archivecvar samsara_nohealth");  
        }
        
        if (!GetCVar("sams_vanillaquake"))
        {   SetCVar ("sams_vanillaquake", 0);
        //ConsoleCommand("archivecvar samsara_vanillaquake");  
        }
        */

        opd = pd;
        pd = !!GetCVar("sams_punchdrunk");

        opdu = pdu;
        pdu = !!GetCVar("sams_punchdrunkuniques");

        opds = pds;
        pds = !!GetCVar("sams_punchdrunksaws");

        if (pd != opd || opdu != pdu || opds != pds || Timer() % 18 == 0)
        {
            IsPunchdrunk  = pd  << 0;
            IsPunchdrunk |= pdu << 1;
            IsPunchdrunk |= pds << 2;
            ACS_ExecuteAlways(SAMSARA_CLIENT_DECORATE, 0, 8, IsPunchdrunk);
        }
        
        Delay(1);
    }
}

script SAMSARA_ENTER enter { ACS_ExecuteWithResult(SAMSARA_SPAWN, 0,0,0); }
script SAMSARA_RESPAWN respawn { ACS_ExecuteWithResult(SAMSARA_SPAWN, 1,0,0); }
script SAMSARA_RETURN return { UnloadingNow = 0; ACS_ExecuteWithResult(SAMSARA_SPAWN, 0,0,0); }

script SAMSARA_SPAWN (int respawning)
{
    int pln = PlayerNumber();
    int pcount, opcount;
    int startTime = Timer();
    int endloop;
    int canbuddha;
    int wsteSide;
    int armor, oarmor, type, otype;
    int i;
	
	TakeInventory("HalfLifeOpposingForceSet", 0x7FFFFFFF);
	//ACS_NamedExecuteAlways("SAMSARA_RESETPLAYER_COOP",0,0,0,0);
    ServerEnterTimes[pln] = startTime;
    ACS_ExecuteWithResult(SAMSARA_SYNTHFIRE, startTime);

    if (!CheckInventory("IsSamsaraClass")) { terminate; }


    ACS_ExecuteAlways(SAMSARA_ENTER_CLIENT, 0, startTime,0,0);
    ACS_ExecuteWithResult(SAMSARA_WOLFMOVE, startTime,0,0);
    ACS_ExecuteWithResult(SAMSARA_QPOWERS,  startTime,0,0);
    
    if (isLMS()) { ApplyLMS(); }
    if (GetCvar("sams_lmsrules") == 1)
    {
        ApplyLMS();
        GiveInventory("CanDualShotties",1);
    }
    if (isSinglePlayer()) { SamsaraWepType = samsaraClassNum()+1; }

    if (!respawning)
    {
        ClientTipboxes[pln] = 0;
        ACS_ExecuteAlways(SAMSARA_SCHEDULED, 0, respawning,1,0);

        if (GetCVar("sv_shotgunstart") > 0) { GiveClassWeapon(samsaraClassNum(), 3, 3);}
        if (GetCvar("sams_backpackstart") == 1) { GiveInventory("Backpack",1); }
    }
    else
    { if (GameType() != GAME_NET_COOPERATIVE)
    {
        if (GetCVar("sv_shotgunstart") > 0) { GiveClassWeapon(samsaraClassNum(), 3, 3);}
        if (GetCvar("sams_backpackstart") == 1) { GiveInventory("Backpack",1); }
    }}

    HandleChainsawSpawn(respawning);
    HandleUniqueSpawn(respawning);
    HandlePunchdrunk(respawning);
    HandleInstagib(respawning);

    ACS_ExecuteAlways(SAMSARA_SCHEDULED, 0, respawning,0,0);

    switch (samsaraClassNum())
    {
      case CLASS_DUKE:
        if (!respawning) { GiveInventory("DukeReady", 1); }
        break;
        
      case CLASS_CALEB:
        if (!respawning) { GiveInventory("CalebReady", 1); }
        break;
      
	  case CLASS_ERAD:
        if (!respawning) { GiveInventory("EleenaReady", 1); }
        break;
		
	  case CLASS_C7:
        if (!respawning) { GiveInventory("Allmap", 1); }
        break;

	  case CLASS_SW:
        if (!respawning) { GiveInventory("LoWangReady", 1); }
        break;

	  case CLASS_RR:
        if (!respawning) { GiveInventory("LeonardReady", 1); }
        break;

      case CLASS_DOOM64:
        if (!respawning) { if (GetCVar("sams_unmakerartifacts") == 1) { GiveInventory("Doom64UnmakerArtifact", 1); } else if (GetCVar("sams_unmakerartifacts") == 2) { GiveInventory("Doom64UnmakerArtifact", 2); } else if (GetCVar("sams_unmakerartifacts") >= 3) { GiveInventory("Doom64UnmakerArtifact", 3); } else {}}
        break;		
	  
	  case CLASS_MARATHON:
        if (isInvasion()) { GiveInventory("InvasionDualShottyCheck", 1); }
        break;
    }

    if (isSinglePlayer())
    {
        GiveInventory("SPModeOn", 1);
    }
    else if (isCoop())
    {
        GiveInventory("CoopModeOn", 1);
        SetActorState(0, "CoOpModeOn");
    }
	
    pcount = PlayerCount();
    
    while (!endloop && ServerEnterTimes[pln] == startTime)
    {		
        if (GetUserCvar(pln,"sams_cl_wolfmove")) { GiveInventory("WolfenMovement", 1); }
        else { TakeInventory("WolfenMovement", 0x7FFFFFFF); }
        
        if (GetUserCvar(pln,"sams_cl_ballgag")) 
		{ 
			switch (samsaraClassNum())
			{
				case CLASS_DUKE:
					GiveInventory("DukeBallgag", 1); 
					break;
					
				case CLASS_CALEB:
					GiveInventory("CalebBallgag", 1); 
					break;
					
				case CLASS_ERAD:
					GiveInventory("EleenaBallgag", 1); 
					break;
					
				case CLASS_SW:
					GiveInventory("LoWangBallgag", 1); 
					break;
					
				case CLASS_Jon:
					GiveInventory("JonBallgag", 1); 
					break;
				
				case CLASS_RR:
					GiveInventory("LeonardBallgag", 1); 
					break;
			}
		}
        else 
		{ 
			TakeInventory("DukeBallgag", 0x7FFFFFFF); 
			TakeInventory("CalebBallgag", 0x7FFFFFFF);
			TakeInventory("EleenaBallgag", 0x7FFFFFFF);
			TakeInventory("LoWangBallgag", 0x7FFFFFFF);
			TakeInventory("JonBallgag", 0x7FFFFFFF);
			TakeInventory("LeonardBallgag", 0x7FFFFFFF);
		}
				
		if (GetUserCvar(pln,"sams_cl_vanilladoom")) { GiveInventory("VanillaDoom", 1); }
        else { TakeInventory("VanillaDoom", 0x7FFFFFFF); }
        
        if (GetUserCvar(pln,"sams_cl_weaponhud")) { GiveInventory("ExpandedHud", 1); }
        else { TakeInventory("ExpandedHud", 0x7FFFFFFF); }
		
		if (GetUserCvar(pln,"sams_cl_dkclab") && CheckInventory("DukeClass")) { GiveInventory("DukeLabToken", 1); ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 1, pln); }
        else { TakeInventory("DukeLabToken", 0x7FFFFFFF); }
		
		if (GetUserCvar(pln,"sams_cl_shephardmode") && CheckInventory("HalfLifeClass")) 
		{ 
			GiveInventory("HalfLifeOpposingForce", 1); 
			ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 1, pln); 
			if(!CheckInventory("HalfLifeOpposingForceSet")) 
			{	
				int targettid = UniqueTid();
				SpawnForced("HalfLifeAdrianModeMapDummy",0,0,0,targettid);//SetActorState(0, "AdrianModeOn", true); 
				SetPointer(AAPTR_TARGET, targettid);
				Thing_ChangeTID(targettid, 0);
			}
		}
        else { TakeInventory("HalfLifeOpposingForce", 0x7FFFFFFF); TakeInventory("HalfLifeOpposingForceSet", 0x7FFFFFFF); }
		
		if (GetUserCvar(pln,"sams_cl_lostmode") && CheckInventory("WolfenClass")) { GiveInventory("WolfenLostMode", 1); ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 1, pln); }
        else { TakeInventory("WolfenLostMode", 0x7FFFFFFF); }
		
		if((!GetUserCvar(pln,"sams_cl_lostmode") && CheckInventory("WolfenClass")) || (!GetUserCvar(pln,"sams_cl_shephardmode") && CheckInventory("HalfLifeClass")) || (!GetUserCvar(pln,"sams_cl_dkclab") && CheckInventory("DukeClass")))
			ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 0, pln);
		
        if (GetCVar("sams_runninginzdoom") == 1) 
		{
			if (GetCVar("sv_nobfgaim") == 1) { GiveInventory("DoomNoBFGAim", 1); }
			else { TakeInventory("DoomNoBFGAim",  0x7FFFFFFF); }
		}
		
		if (GetCVar("sams_runninginzandro") == 1)
        {
			if (GetCVar("sv_bfgfreeaim") == 0) { GiveInventory("DoomNoBFGAim", 1); }
			else { TakeInventory("DoomNoBFGAim",  0x7FFFFFFF); }
		}
		
        if (GetCVar("sams_classiclaz") == 1) { GiveInventory("ChexClassicLaz", 1); }
        else { TakeInventory("ChexClassicLaz", 0x7FFFFFFF); }

        if (GetCVar("sams_allcanrj") == 1) { GiveInventory("RJingModeOn", 1); }
        else { TakeInventory("RJingModeOn", 0x7FFFFFFF); }

        if (GetCVar("sams_pistolammo") == 1) { GiveInventory("PistolModeOn", 1); }
        else { TakeInventory("PistolModeOn", 0x7FFFFFFF); }

        if (GetUserCvar(pln,"sams_vanillaquake") == 1) { GiveInventory("QuakeModeOn", 1); }
        else { TakeInventory("QuakeModeOn", 0x7FFFFFFF); }
		
        if (GetCVar("sams_dukesoundboard") == 1) { if (CheckInventory("DukeClass") == 1) {
		GiveInventory("Soundboard - Boss Kill",1);
		GiveInventory("Soundboard - Deathmatch Kill",1);
		GiveInventory("Soundboard - Dukematch Kill",1);
		GiveInventory("Soundboard - Boss Sight",1);
		GiveInventory("Soundboard - Enemy Kill",1);
		GiveInventory("Soundboard - Boot Kill",1);
		GiveInventory("Soundboard - Gib Kill",1);
		GiveInventory("Soundboard - Weapon Acquired",1);
		GiveInventory("Soundboard - Level Intro",1);
		GiveInventory("Soundboard - Idle Taunt",1);
		GiveInventory("Soundboard - Critical Heal",1);
		GiveInventory("Soundboard - Death Taunt",1);
		GiveInventory("Soundboard - Doug Huggem",1); }}
        else { TakeInventory("Soundboard - Boss Kill",1);
		TakeInventory("Soundboard - Deathmatch Kill",1);
		TakeInventory("Soundboard - Dukematch Kill",1);
		TakeInventory("Soundboard - Boss Sight",1);
		TakeInventory("Soundboard - Enemy Kill",1);
		TakeInventory("Soundboard - Boot Kill",1);
		TakeInventory("Soundboard - Gib Kill",1);
		TakeInventory("Soundboard - Weapon Acquired",1);
		TakeInventory("Soundboard - Level Intro",1);
		TakeInventory("Soundboard - Idle Taunt",1);
		TakeInventory("Soundboard - Critical Heal",1);
		TakeInventory("Soundboard - Death Taunt",1);
		TakeInventory("Soundboard - Doug Huggem",1); }
        
        HandleBans();
        HandleBuffCVars(respawning);
        
        TakeInventory("WeaponGetYaaaay",  1);
        TakeInventory("WeaponGetYaaaay2", 1);
        TakeInventory("Mace", 1);
        TakeInventory("MacePowered", 1);
        if (GetCvar("sams_lmsrules") == 0) { ConvertClassWeapons(-1); }

        if (GetCVar("sams_banjetpack") && CheckInventory("DukePortJetpack"))
        {
            GiveInventory("DukeBootserk", 1);
            TakeInventory("DukePortJetpack", 0x7FFFFFFF);
            TakeInventory("DukeJetpackFuel", 0x7FFFFFFF);
            Print(s:"The jetpack is banned on this server. Have 8x boot damage instead.");
        }

		if (GetCVar("sams_banjetpack") && CheckInventory("RMRJetPack"))
        {
            GiveInventory("RMROxygenRecycler", 1);
            TakeInventory("RMRJetPack", 0x7FFFFFFF);
            Print(s:"The jetpack is banned on this server. Have an oxygen tank instead.");
        }

        for (i = 0; i < 10; i++)
        {
            if (CheckInventory("DoomZerkCounter") > i && !CheckInventory(DoomAccuracyZerks[i]))
            {
                GiveInventory(DoomAccuracyZerks[i], 1);
            }
        }

        for (i = 0; i < SIGILCOUNT; i++)
        {
            if (SamsaraGlobal[GLOBAL_SIGILBASE+1+i])
            {
                if (!SamsaraGlobal[GLOBAL_SIGILBASE+i+2]) { GiveInventory(SpectralTogglers[i], 1); }
                else { TakeInventory(SpectralTogglers[i], 0x7FFFFFFF); }
                GiveInventory(SigilSplinters[i], 1);
				if(samsaraClassNum() == CLASS_STRIFE)
					GiveInventory("StrifeSigilPiece", 1);
           }
            else
            {
                TakeInventory(SigilSplinters[i], 0x7FFFFFFF);
                TakeInventory(SpectralTogglers[i], 0x7FFFFFFF);
            }
        }

        // useless but harmless in Zandro - triggers buddha mode when Blazko has an extra life in ZDoom
        if (CheckInventory("WolfExtraLife") && !canbuddha) { SetPlayerProperty(0, 1, 16); }
        if (!CheckInventory("WolfExtraLife") && canbuddha) { SetPlayerProperty(0, 0, 16); }
        canbuddha = CheckInventory("WolfExtraLife");

        i = CheckInventory("Shell");

        if (CheckInventory("RWastemUnloaded")) { wsteSide = 1; }
        if (CheckInventory("LWastemUnloaded")) { wsteSide = 0; }

        if (i <= 2)
        {
            if (!CheckInventory("WastemEmpty"))  { GiveInventory("WastemEmpty", 1); };
            if (!CheckInventory("LWastemEmpty")) { GiveInventory("LWastemEmpty", 1); };
            if (!CheckInventory("RWastemEmpty")) { GiveInventory("RWastemEmpty", 1); };
        }
        else if (i <= 4)
        {
            if (CheckInventory("WastemEmpty"))  { TakeInventory("WastemEmpty", 0x7FFFFFFF); };

            if (!wsteSide)
            {
                if (!CheckInventory("LWastemEmpty")) { GiveInventory("LWastemEmpty", 1); };
                if (CheckInventory("RWastemEmpty")) { TakeInventory("RWastemEmpty", 0x7FFFFFFF); };
            }
            else
            {
                if (!CheckInventory("RWastemEmpty")) { GiveInventory("RWastemEmpty", 1); };
                if (CheckInventory("LWastemEmpty")) { TakeInventory("LWastemEmpty", 0x7FFFFFFF); };
            }
        }
        else
        {
            if (CheckInventory("WastemEmpty"))  { TakeInventory("WastemEmpty", 0x7FFFFFFF); };
            if (CheckInventory("LWastemEmpty") && !wsteSide) { TakeInventory("LWastemEmpty", 0x7FFFFFFF); };
            if (CheckInventory("RWastemEmpty") &&  wsteSide) { TakeInventory("RWastemEmpty", 0x7FFFFFFF); };
        }

        oarmor = armor;
        otype = type;
        armor = CheckInventory("Armor");
        type = SamsaraArmorType();

        if (oarmor > armor && otype == 3)
        {
            if (samsaraClassNum() == CLASS_MARATHON)
            {
                ActivatorSound("marathon/shieldhit", 127);
                FadeRange(255, 255, 255, 0.4, 0, 0, 0, 0.0, 8.0 / 35);
            }
            else
            {
                ActivatorSound("samsara/shieldhit", 127);
                FadeRange(255, 255, 0, min(0.5, (oarmor - armor) * 0.015), 0, 0, 0, 0.0, min(35.0, 1.5 * (oarmor - armor)) / 35);
            }
        }

        /*
         * Jumping shit
         */

        switch (samsaraClassNum())
        {
          case CLASS_MARATHON:
            if (GetCVar("sams_nocustomgravity")) { SetActorProperty(0, APROP_Gravity, 1.0); }
            else { SetActorProperty(0, APROP_Gravity, 0.15); }
            break;

          case CLASS_QUAKE:
            if (GetCVar("sams_nocustomgravity")) { SetActorProperty(0, APROP_Gravity, 1.0); }
            else { SetActorProperty(0, APROP_Gravity, 0.75); }
            break;

	      case CLASS_ERAD:
            if (GetCVar("sams_nocustomgravity")) { SetActorProperty(0, APROP_Gravity, 1.0); }
            else { SetActorProperty(0, APROP_Gravity, 0.68); }
            break;

		  case CLASS_DEMONESS:
		    if (GetCVar("sams_nocustomgravity")) { SetActorProperty(0, APROP_Gravity, 1.0); }
            break;
		
          default:
            SetActorProperty(0, APROP_Gravity, 1.0);
            break;
        }

        if (CheckInventory("ForceRangerGravity")) { SetActorProperty(0, APROP_Gravity, 0.75); }
        if (CheckInventory("ForceSOGravity")) { SetActorProperty(0, APROP_Gravity, 0.15); }
		if (CheckInventory("ForceEleenaGravity")) { SetActorProperty(0, APROP_Gravity, 0.68); }

        // THIS WAS GOING RENEGADE AND KILLING JUMPING FOREVER - COMMENTED OUT UNTIL SOMEONE LOOKS AT IT

        if (samsaraClassNum() == CLASS_HEXEN) 
            { 
                i = JumpZFromHeight(41 + GetCVar("sams_jumpmod"), GetActorProperty(0, APROP_Gravity)); 
            }
        else if(CheckWeapon("RedneckMotorcycle"))
			{
				i = 0;
			}
		else 
            { 
                i = JumpZFromHeight(32 + GetCVar("sams_jumpmod"), GetActorProperty(0, APROP_Gravity));
            }

        SetActorProperty(0, APROP_JumpZ, max(i,0));

        
        //if (isDead(0)) { endloop = 1; }
        
        Delay(1);

        opcount = pcount;
        pcount  = PlayerCount();
    }
}

script 677 ENTER
{
    delay(GetCvar("sams_superturboturkeyfrequency"));
    if (GetCvar("sams_superturboturkeypuncher3000") > 0)
    { GiveInventory("ChickenModeOn",1);
    
        if (GetCvar("sams_superturboturkeypuncher3000") == 3)
        { str ChickenClass = "SuperFriendlyChicken";
        if (!random(0, 15))
        { ChickenClass = "AssaultFriendlyChicken";
        if (!random(0, 2))
        ChickenClass = "ExplosiveFriendlyChicken"; }}
    
        if (GetCvar("sams_superturboturkeypuncher3000") == 2)
        { ChickenClass = "SuperDMChicken";
        if (!random(0, 15))
        { ChickenClass = "AssaultChicken";
        if (!random(0, 2))
        ChickenClass = "ExplosiveChicken"; }}
        
        if (GetCvar("sams_superturboturkeypuncher3000") == 1)
        { ChickenClass = "SuperCoopChicken";
        if (!random(0, 15))
        { ChickenClass = "AssaultChicken";
        if (!random(0, 2))
        ChickenClass = "ExplosiveChicken"; }}
     
        do
        {
           delay(1);
           int x = GetActorX(0) + random(-128.0, 128.0);
           int y = GetActorY(0) + random(-128.0, 128.0);
           int z = GetActorCeilingZ(0) - 38.0;
           int angle = GetActorAngle(0) >> 8;
        }
        until (Spawn(ChickenClass, x, y, z, 0, angle));
        
        
        if (GetCvar("sams_superturboturkeylimit") > 0)
        {
            if(CheckInventory("ChickenKillCount") >= (GetCvar("sams_superturboturkeylimit")))
            { SetFont("BIGFONT");
            HudMessageBold(n:0,s:" \cjhit the kill limit!";
            HUDMSG_PLAIN, 0, CR_WHITE, 0.5, 0.2, 5.0);
            if(CheckInventory("ChickenKillCount") < (GetCvar("sams_superturboturkeylimit")))
            {
                TakeInventory("ChickenKillCount",999); }
                Delay(35*5);
                Exit_Normal(0);
            }       
        }
        
    }
    else
    { TakeInventory("ChickenModeOn",999); }
    restart;
    //}
}

/*script 678 (int respawning)
{
    int punchdrunkloop;
    //punchdrunkloop = 0;
    
    print(s:"678 is being called");
    if (!respawning)
    {
        if (!punchdrunkloop)
        { delay(15);
          print(s:"punchdrunkloop 0 is being called");
          punchdrunkloop = 1; }
        else
        { HandlePunchdrunk(respawning);
        print(s:"handlepunchdrunk is being called");
        HandleInstagib(respawning); }
    }
    delay(1);
    restart;
}*/

script SAMSARA_SYNTHFIRE (int startTime)
{
    int pln = PlayerNumber();

    while (ServerEnterTimes[pln] == startTime)
    {
        if (CheckInventory("Health") > 0)
        {
        if (keyDown(BT_ATTACK)) { GiveInventory("SynthFireLeft", 1); }
        else { TakeInventory("SynthFireLeft", 0x7FFFFFFF); }
        
        if (keyDown(BT_ALTATTACK)) { GiveInventory("SynthFireRight", 1); }
        else { TakeInventory("SynthFireRight", 0x7FFFFFFF); }
        }

        Delay(1);
    }

    TakeInventory("SynthFireLeft", 0x7FFFFFFF);
    TakeInventory("SynthFireRight", 0x7FFFFFFF);
}

script SAMSARA_CONFIRMCLASS (int which) { SetResultValue(SamsaraWepType == which); }

script SAMSARA_WOLFMOVE (void)
{ 
    int pln = PlayerNumber();
    int realspeed = GetActorProperty(0, APROP_Speed);
    int forward, side, angle, xthrust, ythrust;
    int forwardx, forwardy, sidex, sidey;
    int velx, vely;
    int moving;
    int fired;
    int startTime = Timer();

    WolfenEnterTimes[pln] = startTime;

    while (WolfenEnterTimes[pln] == startTime)
    {
        if (UnloadingNow)
        {
            if (GetActorProperty(0, APROP_Speed) == 0)
            {
                SetActorProperty(0, APROP_Speed, realspeed);
            }
            break;
        }

        if (!CheckInventory("CanWolfMovement")) { break; }
        if (!CheckInventory("WolfenMovement") || GetCVar("sams_banwolfmove"))
        {
            if (GetActorProperty(0, APROP_Speed) == 0)
            {
                SetActorProperty(0, APROP_Speed, realspeed);
            }

            Delay(1);
            continue;
        }

        
        if (GetActorProperty(0, APROP_Health) < 1)
        {
            SetActorProperty(0, APROP_Speed, realspeed);
            velx = 0;
            vely = 0;
        }
        else
        {				
            if (WolfenEnterTimes[pln] != startTime) { break; }
            SetActorProperty(0, APROP_Speed, 0);
            
			if(GetPlayerInput(-1,INPUT_FORWARDMOVE) != 0)
				forward = sign(GetPlayerInput(-1,INPUT_FORWARDMOVE));
				
            forward *= SPEED_FORWARD;
			
			if(GetPlayerInput(-1,INPUT_SIDEMOVE) != 0)
				side    = sign(GetPlayerInput(-1,INPUT_SIDEMOVE));
			
			if(KeyDown_Any(BT_STRAFE))
			{
				if(GetPlayerInput(-1,INPUT_YAW) != 0)
					side    = -sign(GetPlayerInput(-1,INPUT_YAW));
				}
			
            side    *= SPEED_SIDE;
            
            angle   = GetActorAngle(0);
            
            forwardx = cos(angle) * forward;
            forwardy = sin(angle) * forward;
            
            sidex = cos(angle-0.25) * side;
            sidey = sin(angle-0.25) * side;
            
            velx = forwardx + sidex;
            vely = forwardy + sidey;
			
			forward = 0;
			side = 0;
        }

        if (keyDown(BT_CROUCH)) { velx /= 2; vely /= 2; }
        
        if ((velx != 0) || (vely != 0))
        {
            GiveInventory("WolfMoving", 1);
        }
        else if (CheckInventory("WolfMoving"))
        {
            TakeInventory("WolfMoving", 0x7FFFFFFF);
        }
		
        SetActorVelocity(0, velx, vely, GetActorVelZ(0), 0, 0);
        Delay(1);
    }

    if (GetActorProperty(0, APROP_Speed) == 0)
    {
        SetActorProperty(0, APROP_Speed, realspeed);
    }
}

script SAMSARA_ENTER_CLIENT (void) clientside
{
    int execInt, oExecInt, execStr;
    int class, oClass;
    int pln = PlayerNumber();
    int i, j;
    int startTime = Timer();
    
    // Comment out this line for zdoom
    int cpln = ConsolePlayerNumber();

    ClientEnterTimes[pln] = startTime;
    ClientTipboxes[pln] = 0;
    
    execInt = 0; oExecInt = 0;
    
    if (GetCVar("sams_cl_exists") != samsara_cl_VERSION)
    {

        // More setting default stuff, which is what CVARINFO does.

        /*
        //ConsoleCommand(StrParam(s:"set samsara_cl_exists ", d:samsara_cl_VERSION));
        SetCVar ("sams_cl_exists", samsara_cl_VERSION);
        //ConsoleCommand("archivecvar samsara_cl_exists");
	
        if (!GetCVar("sams_cl_wolfmove"))
        {   SetCVar ("sams_cl_wolfmove", 0);
        //ConsoleCommand("archivecvar samsara_cl_wolfmove");  
        }
        
        if (!GetCVar("sams_cl_vanilladoom"))
        {   SetCVar ("sams_cl_vanilladoom", 0);
        //ConsoleCommand("archivecvar samsara_cl_vanilladoom");  
        }
        
        if (!GetCVar("sams_cl_weaponhud"))
        {   SetCVar ("sams_cl_weaponhud", 1);
        //ConsoleCommand("archivecvar samsara_cl_weaponhud");  
        }
        
        if (!GetCVar("sams_cl_ballgag"))
        {   SetCVar ("sams_cl_ballgag", 0);
        //ConsoleCommand("archivecvar samsara_cl_ballgag");  
        }
        
        if (!GetCVar("sams_cl_moremessages"))
        {   SetCVar ("sams_cl_moremessages", 0);
        //ConsoleCommand("archivecvar samsara_cl_moremessages");  
        }
        
        if (!GetCVar("sams_cl_pickupmode"))
        {   SetCVar ("sams_cl_pickupmode", 1);
        //ConsoleCommand("archivecvar samsara_cl_pickupmode");  
        }
        
        if (!GetCVar("sams_cl_printpickup"))
        {   SetCVar ("sams_cl_printpickup", 0);
        //ConsoleCommand("archivecvar samsara_cl_printpickup");  
        }
        */  
    }
        /*
        if (!GetCVar("sams_cl_bloodyhell"))
        {   SetCVar ("sams_cl_bloodyhell", 0);
        //ConsoleCommand("archivecvar samsara_cl_bloodyhell");  
        }
        
        if (!GetCVar("sams_cl_bloodypersistent"))
        {   SetCVar ("sams_cl_bloodypersistent", 0);
        //ConsoleCommand("archivecvar samsara_cl_bloodypersistent");  
        }
        */
          


    for (i = 0; i < RESCOUNT; i++)
    {
        ACS_ExecuteAlways(SAMSARA_RESONATE, 0, i, 16, 0);
    }
    
    DukeQuoteCooldown[pln] = 0; 

    //Log(s:"Client ", n:pln+1, s:"\c- (", d:pln, s:") has spawned (startTime is ", d:startTime, s:")");
    
    while (ClientEnterTimes[pln] == startTime)
    {
		oClass = class;
        class  = samsaraClassNum();
        DukeQuoteCooldown[pln] = max(0, DukeQuoteCooldown[pln]-1); 

        // Also this line
        if (cpln != pln) { Delay(1); continue; }
		
        SamsaraClientClass = class+1;
        
        if (oClass != class) { SamsaraItemFlash = Timer(); }
        
        for (i = 0; i < SLOTCOUNT; i++)
        {
            j = SamsaraClientWeps[i];
            SamsaraClientWeps[i] = HasClassWeapon(class, i);
            
            if (j != SamsaraClientWeps[i]) { SamsaraClientWepFlashes[i] = Timer(); }
        }
        
        if (IsServer)
        {
            array_wolfmove[pln]     = !!GetCVar("sams_cl_wolfmove");
            array_vanillaAnim[pln]  = !!GetCVar("sams_cl_vanilladoom");
            array_ballgag[pln]      = !!GetCVar("sams_cl_ballgag");
            array_weaponBar[pln]    = !!GetCVar("sams_cl_weaponhud");
            array_pickupswitch[pln] = !!GetCVar("switchonpickup");
        }
        else
        {
            oExecInt = execInt;
            execInt = SamsaraClientVars();
            
            if (execInt != oExecInt)
            {
                execStr = StrParam(s:"puke -", d:SAMSARA_PUKE, s:" ", d:execInt, s:" ", d:pln);
                //ConsoleCommand(execStr);
            }
        }

        Delay(1);
    }
    //Log(s:"Client ", n:pln+1, s:"\c- (", d:pln, s:") has left spawn (", d:startTime, s:" vs. ", d:ClientEnterTimes[pln], s:")");
}

script "SAMSARA_CLIENT_ALTERNATIVECLASS" (int set, int pln) clientside
{
	int cpln = ConsolePlayerNumber();
    if (cpln != pln) { terminate; }
	
	SamsaraAlternativeClass = set;
}

script SAMSARA_DISCONNECT_CLIENT (int pln) disconnect clientside
{
    // Comment out these lines for zdoom
    int cpln = ConsolePlayerNumber();
    if (cpln != pln) { terminate; }
    
	SamsaraAlternativeClass = 0;
    SamsaraClientClass  = 0;
    SamsaraItemFlash    = Timer();
}

script SAMSARA_PUKE (int values, int pln) net
{
    array_wolfmove[pln]     = values & 1;
    array_vanillaAnim[pln]  = values & 2;
    array_ballgag[pln]      = values & 4;
    array_weaponBar[pln]    = values & 8;
    array_pickupswitch[pln] = values & 16;
}


script SAMSARA_DEATH death
{
    Delay(1);
    TakeInventory("QuadDamagePower", 1);
}
