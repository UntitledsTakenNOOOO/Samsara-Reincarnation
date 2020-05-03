script SAMSARA_WANGHEAD (int class, int slot, int dropped)
{
    int givingSWGuardianHead, givingSWNuke;

    int stay = GetCVar("sv_weaponstay") && !dropped;
    int ultStay = GetCVar("samsara_permault") && !dropped;

    switch (slot)
    {
      case SLOT_BFG9000:
	    if (!CheckInventory("SWGuardianHead")
         || (!ultStay && (GetAmmoCapacity("Cell") > CheckInventory("Cell"))))
        {
            givingSWGuardianHead = 1;
        }
		
        if (givingSWGuardianHead)
        {
            GiveInventory("SWGuardianHead", 1);
        }

        if (!CheckInventory("SWNuke")       
		 || (!ultStay))
		{
            givingSWNuke = 1;
        }
		
        if (givingSWNuke)
        {
            GiveInventory("SWNuke", 1);
        }

        SetResultValue(givingSWGuardianHead || givingSWNuke);
        break;
    }
}
