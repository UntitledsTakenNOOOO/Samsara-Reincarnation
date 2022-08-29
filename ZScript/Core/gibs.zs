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
		Decal 'BloodSmear'; // We'll need to figure out why A_SprayDecal isn't working
		+MISSILE;
		+CLIENTSIDEONLY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}
	States
	{
		Spawn:
			TNT1 AAAA 4;
			loop;
		Death:
			TNT1 A 3;
			stop;
	}
}