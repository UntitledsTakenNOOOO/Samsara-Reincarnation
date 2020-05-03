#define STRIFEGUY_UPG 703
     
Script STRIFEGUY_UPG ENTER
{
            if (PlayerClass(PlayerNumber())!=11) terminate; //Check if the class is strifeguy, otherwise terminate the script
            //Assign cvar values to variables
            int aup=GetCvar("samsara_accuracyupgrades"); //Accuracy Upgrade
            int sup=GetCvar("samsara_staminaupgrades");  //Stamina Upgrade
            //Cap out the values
            if (aup>10) aup=10;
            if (aup<0) aup=0;
            if (sup>10) sup=10;
            if (sup<0) sup=0;

            if (gametype()==2) //If it is competitive gamemode
            {
                    //Completely clear out of upgrades
                    TakeInventory("AccuracyUpgrade1", CheckInventory("AccuracyUpgrade1"));
                    TakeInventory("AccuracyUpgrade2", CheckInventory("AccuracyUpgrade2"));
                    TakeInventory("StaminaUpgradeHealth", CheckInventory("StaminaUpgradeHealth"));
                    TakeInventory("StaminaUpgradeDamage", CheckInventory("StaminaUpgradeDamage"));
                    GiveInventory("AccuracyUpgrade1", aup);
                    GiveInventory("AccuracyUpgrade2", aup);
                    GiveInventory("StaminaUpgradeHealth", 10*sup);
                    GiveInventory("StaminaUpgradeDamage", sup);
            }
            else //If it is cooperative gamemode
            {
                    if (CheckInventory("AccuracyUpgrade1")<aup) //If you don't have enough upgrades, give some
                    {
                            TakeInventory("AccuracyUpgrade1", CheckInventory("AccuracyUpgrade1"));
                            GiveInventory("AccuracyUpgrade1", aup);
                    }
                    if (CheckInventory("AccuracyUpgrade2")<aup) //Same
                    {
                            TakeInventory("AccuracyUpgrade2", CheckInventory("AccuracyUpgrade2"));
                            GiveInventory("AccuracyUpgrade2", aup);
                    }
                    if (CheckInventory("StaminaUpgradeDamage")<sup) //Same
                    {
                            TakeInventory("StaminaUpgradeDamage", CheckInventory("StaminaUpgradeDamage"));
                            GiveInventory("StaminaUpgradeDamage", sup);
                    }
            }
}

script SAMSARA_STRIFESIGIL (int class, int slot, int dropped)
{
    int givingMauler, givingSigil;

    int stay = GetCVar("sv_weaponstay") && !dropped;
    int ultStay = GetCVar("samsara_permault") && !dropped;

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