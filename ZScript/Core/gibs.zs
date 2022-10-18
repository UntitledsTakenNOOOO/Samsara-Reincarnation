Class Bolognese_WallBlood_ZScript : Actor
{
	Default
	{
		scale 0.6;
		speed 7;
		health 1;
		radius 8;
		height 1;
		Gravity 0.7;
		damage 0;
		DamageType 'Blood';
		+MISSILE;
		+CLIENTSIDEONLY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}
	States
	{
		Spawn:
			TNT1 A 0;
			TNT1 A 0 A_SetAngle(random(0, 360));
			TNT1 A 0 A_SetPitch(random(-50, 50));
			TNT1 A 0 A_SprayDecal("BloodSplat", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SprayDecal("BloodSmear", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SetAngle(random(0, 360));
			TNT1 A 0 A_SetPitch(random(-50, 50));
			TNT1 A 0 A_SprayDecal("BloodSplat", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SprayDecal("BloodSmear", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SetAngle(random(0, 360));
			TNT1 A 0 A_SetPitch(random(-50, 50));
			TNT1 A 0 A_SprayDecal("BloodSplat", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SprayDecal("BloodSmear", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SetAngle(random(0, 360));
			TNT1 A 0 A_SetPitch(random(-50, 50));
			TNT1 A 0 A_SprayDecal("BloodSplat", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SprayDecal("BloodSmear", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SetAngle(random(0, 360));
			TNT1 A 0 A_SetPitch(random(-50, 50));
			TNT1 A 0 A_SprayDecal("BloodSplat", 344, (0, 0, 0), (0, 0, 0), true, 0);
			TNT1 A 0 A_SetAngle(random(0, 360));
			TNT1 A 0 A_SetPitch(random(-50, 50));
			TNT1 A 0 A_SprayDecal("BloodSplat", 344, (0, 0, 0), (0, 0, 0), true, 0);
			stop;
	}
}