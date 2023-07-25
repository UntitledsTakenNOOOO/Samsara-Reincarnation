Class SamsaraXMasHandler : EventHandler
{
	bool isXMasModeOn;
	bool AreXmasDecorationsOn;
	
	override void CheckReplacement(ReplaceEvent e)
	{
		if (samsara_merrychristmas) // Is Christmas Mode activated?
		{
			isXMasModeOn = true;
			if (samsara_merrychristmasdecorations) // Are the Christmas decorations enabled?
			{
				AreXmasDecorationsOn = true;
			}
		}
		
		if(e.Replacee == 'TechLamp')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'TechLamp'; break;	// Vanilla actor
				case 1: e.Replacement = 'TechLamp_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'TechLamp2')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'TechLamp2'; break;	// Vanilla actor
				case 1: e.Replacement = 'TechLamp2_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'Column')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'Column'; break;	// Vanilla actor
				case 1: e.Replacement = 'Column_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'TallGreenColumn')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'TallGreenColumn'; break;	// Vanilla actor
				case 1: e.Replacement = 'TallGreenColumn_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'ShortGreenColumn')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'ShortGreenColumn'; break;	// Vanilla actor
				case 1: e.Replacement = 'ShortGreenColumn_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'TallRedColumn')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'TallRedColumn'; break;	// Vanilla actor
				case 1: e.Replacement = 'TallRedColumn_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'ShortRedColumn')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'ShortRedColumn'; break;	// Vanilla actor
				case 1: e.Replacement = 'ShortRedColumn_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'SkullColumn')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'SkullColumn'; break;	// Vanilla actor
				case 1: e.Replacement = 'SkullColumn_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HeartColumn')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HeartColumn'; break;	// Vanilla actor
				case 1: e.Replacement = 'HeartColumn_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'EvilEye')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'EvilEye'; break;	// Vanilla actor
				case 1: e.Replacement = 'EvilEye_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'FloatingSkull')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'FloatingSkull'; break;	// Vanilla actor
				case 1: e.Replacement = 'FloatingSkull_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'TorchTree')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'TorchTree'; break;	// Vanilla actor
				case 1: e.Replacement = 'TorchTree_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'BlueTorch')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'BlueTorch'; break;	// Vanilla actor
				case 1: e.Replacement = 'BlueTorch_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'GreenTorch')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'GreenTorch'; break;	// Vanilla actor
				case 1: e.Replacement = 'GreenTorch_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'RedTorch')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'RedTorch'; break;	// Vanilla actor
				case 1: e.Replacement = 'RedTorch_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'ShortBlueTorch')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'ShortBlueTorch'; break;	// Vanilla actor
				case 1: e.Replacement = 'ShortBlueTorch_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'ShortGreenTorch')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'ShortGreenTorch'; break;	// Vanilla actor
				case 1: e.Replacement = 'ShortGreenTorch_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'ShortRedTorch')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'ShortRedTorch'; break;	// Vanilla actor
				case 1: e.Replacement = 'ShortRedTorch_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'Stalagtite')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'Stalagtite'; break;	// Vanilla actor
				case 1: e.Replacement = 'Stalagtite_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'TechPillar')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'TechPillar'; break;	// Vanilla actor
				case 1: e.Replacement = 'TechPillar_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'BloodyTwitch')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'BloodyTwitch'; break;	// Vanilla actor
				case 1: e.Replacement = 'BloodyTwitch_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'Meat2')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'Meat2'; break;	// Vanilla actor
				case 1: e.Replacement = 'Meat2_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'Meat3')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'Meat3'; break;	// Vanilla actor
				case 1: e.Replacement = 'Meat3_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'Meat4')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'Meat4'; break;	// Vanilla actor
				case 1: e.Replacement = 'Meat4_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'Meat5')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'Meat5'; break;	// Vanilla actor
				case 1: e.Replacement = 'Meat5_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'NonsolidMeat2')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'NonsolidMeat2'; break;	// Vanilla actor
				case 1: e.Replacement = 'NonsolidMeat2_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'NonsolidMeat3')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'NonsolidMeat3'; break;	// Vanilla actor
				case 1: e.Replacement = 'NonsolidMeat3_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'NonsolidMeat4')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'NonsolidMeat4'; break;	// Vanilla actor
				case 1: e.Replacement = 'NonsolidMeat4_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'NonsolidMeat5')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'NonsolidMeat5'; break;	// Vanilla actor
				case 1: e.Replacement = 'NonsolidMeat5_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'NonsolidTwitch')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'NonsolidTwitch'; break;	// Vanilla actor
				case 1: e.Replacement = 'NonsolidTwitch_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HeadOnAStick')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HeadOnAStick'; break;	// Vanilla actor
				case 1: e.Replacement = 'HeadOnAStick_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HeadsOnAStick')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HeadsOnAStick'; break;	// Vanilla actor
				case 1: e.Replacement = 'HeadsOnAStick_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HeadCandles')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HeadCandles'; break;	// Vanilla actor
				case 1: e.Replacement = 'HeadCandles_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'DeadStick')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'DeadStick'; break;	// Vanilla actor
				case 1: e.Replacement = 'DeadStick_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'LiveStick')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'LiveStick'; break;	// Vanilla actor
				case 1: e.Replacement = 'LiveStick_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'BigTree')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'BigTree'; break;	// Vanilla actor
				case 1: e.Replacement = 'BigTree_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'BurningBarrel')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'BurningBarrel'; break;	// Vanilla actor
				case 1: e.Replacement = 'BurningBarrel_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HangNoGuts')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HangNoGuts'; break;	// Vanilla actor
				case 1: e.Replacement = 'HangNoGuts_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HangBNoBrain')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HangBNoBrain'; break;	// Vanilla actor
				case 1: e.Replacement = 'HangBNoBrain_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HangTLookingDown')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HangTLookingDown'; break;	// Vanilla actor
				case 1: e.Replacement = 'HangTLookingDown_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HangTLookingUp')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HangTLookingUp'; break;	// Vanilla actor
				case 1: e.Replacement = 'HangTLookingUp_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HangTSkull')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HangTSkull'; break;	// Vanilla actor
				case 1: e.Replacement = 'HangTSkull_SamsaraXMas'; break;	// Xmas actor
			}
		}
		if(e.Replacee == 'HangTNoBrain')	// The actor to replace
		{
			switch(AreXmasDecorationsOn)
			{
				case 0: e.Replacement = 'HangTNoBrain'; break;	// Vanilla actor
				case 1: e.Replacement = 'HangTNoBrain_SamsaraXMas'; break;	// Xmas actor
			}
		}
	}
}

Class TechLamp_SamsaraXMas : TechLamp
{
	States
	{
		Spawn:
			XMA0 ABCD 4 Light("BIGLAMP") BRIGHT;
			Loop;
	}
}

Class TechLamp2_SamsaraXMas : TechLamp2
{
	States
	{
		Spawn:
			XMA0 EFGH 4 Light("BIGLAMP") BRIGHT;
			Loop;
	}
}

Class Column_SamsaraXMas : Column
{
	States
	{
		Spawn:
			XMA0 I 4 Light("LAMP") BRIGHT;
			Loop;
	}
}

Class TallGreenColumn_SamsaraXMas : TallGreenColumn
{
	States
	{
		Spawn:
			XMA0 J 4 BRIGHT;
			Loop;
	}
}

Class ShortGreenColumn_SamsaraXMas : ShortGreenColumn
{
	States
	{
		Spawn:
			XMA0 K 4 BRIGHT;
			Loop;
	}
}

Class TallRedColumn_SamsaraXMas : TallRedColumn
{
	States
	{
		Spawn:
			XMA0 L 4 BRIGHT;
			Loop;
	}
}

Class ShortRedColumn_SamsaraXMas : ShortRedColumn
{
	States
	{
		Spawn:
			XMA0 M 4 BRIGHT;
			Loop;
	}
}

Class SkullColumn_SamsaraXMas : SkullColumn
{
	States
	{
		Spawn:
			XMA0 N 4 BRIGHT;
			Loop;
	}
}

Class HeartColumn_SamsaraXMas : HeartColumn
{
	States
	{
		Spawn:
			XMA0 OP 14;
			Loop;
	}
}

Class EvilEye_SamsaraXMas : EvilEye
{
	States
	{
		Spawn:
			XMA0 QRSR 6 BRIGHT;
			Loop;
	}
}

Class FloatingSkull_SamsaraXMas : FloatingSkull
{
	States
	{
		Spawn:
			XMA0 TUV 6 BRIGHT;
			Loop;
	}
}

Class TorchTree_SamsaraXMas : TorchTree
{
	States
	{
		Spawn:
			XMA0 W 4;
			Loop;
	}
}

Class BlueTorch_SamsaraXMas : BlueTorch
{
	States
	{
		Spawn:
			XMA1 ABCD 4 Light("BIGBLUETORCH") BRIGHT;
			Loop;
	}
}

Class GreenTorch_SamsaraXMas : GreenTorch
{
	States
	{
		Spawn:
			XMA1 EFGH 4 Light("BIGGREENTORCH") BRIGHT;
			Loop;
	}
}

Class RedTorch_SamsaraXMas : RedTorch
{
	States
	{
		Spawn:
			XMA1 IJKL 4 Light("BIGREDTORCH") BRIGHT;
			Loop;
	}
}

Class ShortBlueTorch_SamsaraXMas : ShortBlueTorch
{
	States
	{
		Spawn:
			XMA1 MNOP 4 Light("SMALLBLUETORCH") BRIGHT;
			Loop;
	}
}

Class ShortGreenTorch_SamsaraXMas : ShortGreenTorch
{
	States
	{
		Spawn:
			XMA1 QRST 4 Light("SMALLGREENTORCH") BRIGHT;
			Loop;
	}
}

Class ShortRedTorch_SamsaraXMas : ShortRedTorch
{
	States
	{
		Spawn:
			XMA1 UVWX 4 Light("SMALLREDTORCH") BRIGHT;
			Loop;
	}
}

Class Stalagtite_SamsaraXMas : Stalagtite
{
	States
	{
		Spawn:
			XMA0 X 4;
			Loop;
	}
}

Class TechPillar_SamsaraXMas : TechPillar
{
	States
	{
		Spawn:
			XMA0 Y 4;
			Loop;
	}
}

Class BloodyTwitch_SamsaraXMas : BloodyTwitch
{
	States
	{
		Spawn:
			XMA2 A 10;
			XMA2 B 15;
			XMA2 C 8;
			XMA2 B 6;
			Loop;
	}
}

Class Meat2_SamsaraXMas : Meat2
{
	States
	{
		Spawn:
			XMA2 D 4;
			Loop;
	}
}

Class Meat3_SamsaraXMas : Meat3
{
	States
	{
		Spawn:
			XMA2 E 4;
			Loop;
	}
}

Class Meat4_SamsaraXMas : Meat4
{
	States
	{
		Spawn:
			XMA2 F 4;
			Loop;
	}
}

Class Meat5_SamsaraXMas : Meat5
{
	States
	{
		Spawn:
			XMA2 G 4;
			Loop;
	}
}

class NonsolidMeat2_SamsaraXMas : Meat2_SamsaraXMas
{
	Default
	{
		-SOLID
		Radius 20;
	}
}

class NonsolidMeat3_SamsaraXMas : Meat3_SamsaraXMas
{
	Default
	{
		-SOLID
		Radius 20;
	}
}

class NonsolidMeat4_SamsaraXMas : Meat4_SamsaraXMas
{
	Default
	{
		-SOLID
		Radius 20;
	}
}

class NonsolidMeat5_SamsaraXMas : Meat5_SamsaraXMas
{
	Default
	{
		-SOLID
		Radius 20;
	}
}

class NonsolidTwitch_SamsaraXMas : BloodyTwitch_SamsaraXMas
{
	Default
	{
		-SOLID
		Radius 20;
	}
}

Class HeadOnAStick_SamsaraXMas : HeadOnAStick
{
	States
	{
		Spawn:
			XMA2 H 4;
			Loop;
	}
}

Class HeadsOnAStick_SamsaraXMas : HeadsOnAStick
{
	States
	{
		Spawn:
			XMA2 I 4;
			Loop;
	}
}

Class HeadCandles_SamsaraXMas : HeadCandles
{
	States
	{
		Spawn:
			XMA2 JK 6 Light("SKULLCANDLES") BRIGHT;
			Loop;
	}
}

Class DeadStick_SamsaraXMas : DeadStick
{
	States
	{
		Spawn:
			XMA2 L 4;
			Loop;
	}
}

Class LiveStick_SamsaraXMas : LiveStick
{
	States
	{
		Spawn:
			XMA2 J 6;
			XMA2 K 8;
			Loop;
	}
}

Class BigTree_SamsaraXMas : BigTree
{
	States
	{
		Spawn:
			XMA0 Z 4;
			Loop;
	}
}

Class BurningBarrel_SamsaraXMas : BurningBarrel
{
	States
	{
		Spawn:
			XMA2 MNO 4 Light("FIREBARREL") BRIGHT;
			Loop;
	}
}

Class HangNoGuts_SamsaraXMas : HangNoGuts
{
	States
	{
		Spawn:
			XMA2 P 4;
			Loop;
	}
}

Class HangBNoBrain_SamsaraXMas : HangBNoBrain
{
	States
	{
		Spawn:
			XMA2 D 4;
			Loop;
	}
}

Class HangTLookingDown_SamsaraXMas : HangTLookingDown
{
	States
	{
		Spawn:
			XMA2 F 4;
			Loop;
	}
}

Class HangTLookingUp_SamsaraXMas : HangTLookingUp
{
	States
	{
		Spawn:
			XMA2 Q 4;
			Loop;
	}
}

Class HangTSkull_SamsaraXMas : HangTSkull
{
	States
	{
		Spawn:
			XMA2 R 4;
			Loop;
	}
}

Class HangTNoBrain_SamsaraXMas : HangTNoBrain
{
	States
	{
		Spawn:
			XMA2 R 4;
			Loop;
	}
}