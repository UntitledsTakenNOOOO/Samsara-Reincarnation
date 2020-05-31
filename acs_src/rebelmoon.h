script SAMSARA_REBELMOON (int class, int slot, int dropped)
{
    int givingRMRPlasmaCannon, givingSubestronArm;

    int stay = GetCVar("sv_weaponstay") && !dropped;
    int ultStay = GetCVar("samsara_permault") && !dropped;

    switch (slot)
    {
      case SLOT_BFG9000:
	    if (!CheckInventory(" RMR Plasma Cannon ")
         || (!ultStay && (GetAmmoCapacity("Cell") > CheckInventory("Cell"))))
        {
            givingRMRPlasmaCannon = 1;
        }
		
        if (givingRMRPlasmaCannon)
        {
            GiveInventory(" RMR Plasma Cannon ", 1);
        }

        if (!CheckInventory("Subestron Arm")
         || (!ultStay && (GetAmmoCapacity("Cell") > CheckInventory("Cell"))))
        {
            givingSubestronArm = 1;
        }

        if (givingSubestronArm)
        {
            GiveInventory("Subestron Arm", 1);
        }

        SetResultValue(givingRMRPlasmaCannon || givingSubestronArm);
        break;
    }
}
