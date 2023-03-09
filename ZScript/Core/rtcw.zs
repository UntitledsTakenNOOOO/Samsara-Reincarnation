Class RTCWThirdPersonChecker : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0
			{
				if(player.cheats & CF_ChaseCam)
					A_GiveInventory("RTCW_ThirdPersonToken",1);
				else
					A_TakeInventory("RTCW_ThirdPersonToken",1);
			}
			stop;
	}
}