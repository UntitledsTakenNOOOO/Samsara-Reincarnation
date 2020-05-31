script SAMSARA_DOOM64 (int class, int slot, int dropped)
{
    int givingBFG, givingUnmaker;

    int giveartifacts = isInvasion() || !(isCoop() || isSinglePlayer());

    int stay = GetCVar("sv_weaponstay") && !dropped;
    int ultStay = GetCVar("samsara_permault") && !dropped;

    switch (slot)
    {
      case SLOT_BFG9000:
	    if (!CheckInventory(" B.F.G. 9000 ")
         || (!ultStay && (GetAmmoCapacity("Cell") > CheckInventory("Cell"))))
        {
            givingBFG = 1;
        }
		
        if (givingBFG)
        {
            GiveInventory(" B.F.G. 9000 ", 1);
        }

        if (!CheckInventory("Unmaker")
         || (!ultStay && (GetAmmoCapacity("Cell") > CheckInventory("Cell"))))
        {
            givingUnmaker = 1;
        }

        if (givingUnmaker)
        {
            GiveInventory("Unmaker", 1);
        }

        if (giveartifacts)
        {
            GiveInventory("Doom64UnmakerArtifact", 3);
        }

        SetResultValue(givingBFG || givingUnmaker || giveartifacts);
        break;
    }
}
