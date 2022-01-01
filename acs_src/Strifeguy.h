   Script "StrifeGuy_UPG" ENTER
{
	if (PlayerClass(PlayerNumber())!=11) terminate; //Check if the class is strifeguy, otherwise terminate the script
    
    int sup=GetCvar("sams_strifeupgrades");
	
	GiveInventory("AccuracyUpgrade1", sup);
    GiveInventory("AccuracyUpgrade2", sup);
    GiveInventory("StaminaUpgradeDamage", sup);
	GiveInventory("StrifeUpgradeCount",sup);
	SetActorProperty(0,APROP_SpawnHealth,100+(sup*10));
}

script SAMSARA_STRIFESIGIL (int class, int slot, int dropped) //667
{
    int givingMauler, givingSigil;

    int stay = GetCVar("sv_weaponstay") && !dropped;
    int ultStay = GetCVar("sams_permault") && !dropped;

    switch (slot)
    {
      case SLOT_BFG9000:
	    if (!CheckInventory(" Mauler ")
         || (!ultStay && (GetAmmoCapacity("Cell") > CheckInventory("Cell"))))
        {
            givingMauler = 1;
        }
		
        if (givingMauler)
        {
            GiveInventory(" Mauler ", 1);
        }

        if (!CheckInventory(" Sigil ")
         || (!ultStay && (GetAmmoCapacity("") > CheckInventory(""))))
        {
            givingSigil = 1;
        }

        if (givingSigil)
        {
            GiveInventory(" Sigil ", 1);
        }

        SetResultValue(givingMauler || givingSigil);
        break;
    }
}

Script "SAMSARA_STRIFECOOLDOWN" (void)
{
	While(CheckInventory("StrifeBeaconCooldown") > 0)
	{
		Delay(35);
		Takeinventory("StrifeBeaconCooldown", 1);
	}
}

Script "Samsara_StrifeUpgradesMapSpot" (int set)
{
	Switch(set)
	{
		Case 1:
		TakeInventory(strparam(s:"StrifeUpgrade", d:CheckInventory("StrifeUpgradeCount")-1,s:"X"), 0x7FFFFFFF);
		TakeInventory(strparam(s:"StrifeUpgrade", d:CheckInventory("StrifeUpgradeCount")-1,s:"Y"), 0x7FFFFFFF);
		TakeInventory(strparam(s:"StrifeUpgrade", d:CheckInventory("StrifeUpgradeCount")-1,s:"Z"), 0x7FFFFFFF);
		GiveInventory(strparam(s:"StrifeUpgrade", d:CheckInventory("StrifeUpgradeCount")-1,s:"X"), (GetActorX(0)>>16)+65536);
		GiveInventory(strparam(s:"StrifeUpgrade", d:CheckInventory("StrifeUpgradeCount")-1,s:"Y"), (GetActorY(0)>>16)+65536);
		GiveInventory(strparam(s:"StrifeUpgrade", d:CheckInventory("StrifeUpgradeCount")-1,s:"Z"), (GetActorZ(0)>>16)+65536);
		break;
		Case 2:
		for(int a = 0; a < 10; a++)
		{
			if(abs((GetActorX(0)>>16)+65536 - CheckInventory(strparam(s:"StrifeUpgrade",d:a,s:"X"))) <= 36 && abs((GetActorY(0)>>16)+65536 - CheckInventory(strparam(s:"StrifeUpgrade",d:a,s:"Y"))) <= 36 && abs((GetActorZ(0)>>16)+65536 - CheckInventory(strparam(s:"StrifeUpgrade",d:a,s:"Z"))) <= 36)
			{
				SetResultValue(0);
				terminate;
			}
		}
		SetResultValue(1);
		break;
	}
}

script "BlackBirdTauntCooldown" (void)
{
    while (CheckInventory("BlackBirdTauntCooldown") > 0)
    {
        Delay(35);
        TakeInventory("BlackBirdTauntCooldown", 1);
    }
}

Script "StrifeBlackBirdQuote" (int type)
{
	Log(s:"Incoming message from Blackbird...");
	switch(type)
	{
		case 0:
			LocalAmbientSound("strife/blackbird/enter", 255);
			break;
		case 1:
			LocalAmbientSound("strife/blackbird/roaming", 255);
			break;
		case 2:
			LocalAmbientSound("strife/blackbird/killtaunt", 255);
			break;
		case 3:
			LocalAmbientSound("strife/blackbird/xkilltaunt", 255);
			break;
		case 4:
			LocalAmbientSound("strife/blackbird/bkilltaunt", 255);
			break;
		case 5:
			LocalAmbientSound("strife/blackbird/death", 255);
			break;
	}
}
