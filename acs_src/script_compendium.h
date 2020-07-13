// Label, index, damage, defense, range, attack speed, difficulty
str ClassInfo[CLASSCOUNT][11] = 
{ 
	{"Doomguy", 1, "*****", "***", "***", "**", "*", "Damage", "TIPSYM01", "TIPHIL01", "TIPDGUY"  },
	{"Chex Warrior", 2, "***", "*****", "***", "***", "*", "Defense", "TIPSYM02", "TIPHIL02", "TIPCHEX" },
	{"Corvus", 3, "***", "****", "**", "****", "****", "Utility", "TIPSYM03", "TIPHIL03", "TIPCORV" },
	{"Blazkowicz", 4, "***", "***", "*****", "****", "*", "Marksman", "TIPSYM04", "TIPHIL04", "TIPBLASK" },
	{"Parias", 5, "*****", "****", "*", "****", "***", "Brawler", "TIPSYM05", "TIPHIL05", "TIPPARIA" },
	{"Duke Nukem", 6, "****", "*", "***", "***", "***", "Crowd Control", "TIPSYM06", "TIPHIL06", "TIPDUKE" },
	{"Security Officer", 7, "***", "***", "**", "*****", "*****", "Supression", "TIPSYM07", "TIPHIL07", "TIPSECOF" },
	{"Ranger", 8, "***", "**", "****", "****", "***", "Artillery", "TIPSYM08", "TIPHIL08", "TIPRANGE" },
	{"Ian Paul Freeley", 9, "****", "**", "***", "**", "***", "Demolitions", "TIPSYM09", "TIPHIL09", "TIPIANPF" },
	{"Blake Stone", 10, "***", "***", "***", "*****", "**", "Skirmisher", "TIPSYM10", "TIPHIL10", "TIPBSTON" },
	{"Caleb", 11, "***", "***", "***", "*****", "**", "Duelist", "TIPSYM11", "TIPHIL11", "TIPCALEB" },
	{"Strifeguy", 12, "****", "*", "***", "****", "**", "Strategist", "TIPSYM12", "TIPHIL12", "TIPSGUY" },
	{"Doomguy (N64)", 13, "*****", "***", "***", "**", "*", "Damage", "TIPSYM13", "TIPHIL13", "TIPD64G" },
	{"Eleena", 14, "****", "*", "**", "****", "***", "Acrobat", "TIPSYM14", "TIPHIL14", "TIPELENA" },
	{"Space Seal", 15, "*****", "*", "***", "****", "**", "Shredder", "TIPSYM15", "TIPHIL15" , "TIPSSEAL" },
	{"LDF Commando", 16, "***", "**", "****", "***", "***", "Support Fire", "TIPSYM16", "TIPHIL16", "TIPREBEL" },
	{"Kyle Katarn", 17, "**", "*****", "****", "****", "***", "Tank", "TIPSYM17", "TIPHIL17" },
	{"Mooman", 18, "*", "***", "****", "****", "***", "Luck", "TIPSYM18", "TIPHIL18" },
	{"Jack Curtis", 19, "***", "***", "***", "****", "***", "Counter Assault", "TIPSYM19", "TIPHIL19" },
	{"Grondoval", 20, "****", "***", "**", "****", "****", "Pugilist", "TIPSYM20", "TIPHIL20" },
	{"Gordon Freeman/Adrian Shephard", 21, "*****", "**", "****", "**", "*****", "Hunter", "TIPSYM21", "TIPHIL21" },
	{"Lo Wang", 22, "***", "**", "****", "****", "***", "Ninja", "TIPSYM22", "TIPHIL22" },
	{"Cybermage", 23, "***", "***", "***", "****", "***", "Magician", "TIPSYM23", "TIPHIL23" },
	{"Jon", 24, "**", "***", "***", "**", "****", "Adventurer", "TIPSYM24", "TIPHIL24" },
	{"Leonard", 25, "***", "*", "****", "***", "***", "Sharpshooter", "TIPSYM25", "TIPHIL25" },
	{"Bitterman", 26, "***", "***", "****", "**", "***", "Battery", "TIPSYM26", "TIPHIL26" },
	{"Demoness", 27, "***", "**", "**", "***", "***", "Steamroller", "TIPSYM27", "TIPHIL27" },
	{"James Bond", 28, "***", "*", "***", "****", "****", "Spy", "TIPSYM28", "TIPHIL28" }
};

str HeroSummaries[CLASSCOUNT] =
{
	"The man. The myth. The icon. The legend. The hero. Doomguy has stood against untold legions throughout all 20 years of his one-man war on Hell, and here he stands ready to go against more. He is a man that needs no introduction, as his abilities have been proven and honed and harnessed time and time again--the rest of the heroes will have to work double to even match the bar Doomguy is constantly raising.",
	"Fred Chexter sets himself apart from his compatriots by being a genuinely nice (if not shy) guy among the gritty badasses that populate the Wheel of Samsara. He doesn't even kill his enemies, he just sends them back to their home dimension! That being said, he is still a trained warrior and the IFOC's absolute best warrior; whether it's being on the wrong end of a coachgun or face to face with the nastiest nightmares Hell can offer, he never flinches. Just because he's friendly doesn't mean you're suddenly safe.",
	"The Heretic himself, Corvus is a noble elven warrior and mage driven by fury and a near-psychotic thirst to avenge his people. His quest has sent him from fighting legions of the damned and undead in mystical fantasy lands to fighting legions of the damned and undead in alternate lands. No matter where he is, though, his bloodlust will not be quenched until he has personally slaughtered every enemy he can get his hand on.",
	"William \"B.J.\" Blazkowicz was the one that started it all, a secret agent that personally fought his way out of the horrifying Nazi prisons and personally slew Adolf Hitler, armed with nothing more than a pistol, a knife, and undying devotion to his country. Having gone up against an endless sea of Nazis, mystic beasts, undead monstrosities, and towering madmen, B.J. has seen it all and fought it all. If it's a threat to the world, he will put it down. Without questions, without hesitation, and without compromises.",
	"A high cleric of the Church, second only to Traductus, Parias is both a man of faith and a man of action. His righteousness is rivalled only by his terrifying power, and he can swap at a moment's notice from praying for his enemies' souls to hacking their spine in twain. Being a student of both the arcane and the martial arts has made him a robust fighter that can swap from a physical to a mystical fighting capability whenever a situation calls for it, and makes him perhaps the most terrifying Hero in the Wheel of Samsara.",
	"He's rude. He's crude. He's a bad dude with a hell of a bad attitude. He's the number one bastard on several alien races' personal shitlists, and he made it to the top not with any special training, armor, or powers, but just by being the most hardcore son of a bitch imaginable. He's just a joe with a shotgun, a mean boot, and a mouth that can't stay shut--and that's all he needs. These assholes are going to have to go through him to get to the multiverse...and he just ran out of bubblegum.",
	"Freedom. That's all he wants, now. In one bitter day, the Security Officer went from lazily sleeping in to being in an eternal fight for his life at the behest of arrogant and psychotic AIs. Day in and day out, he fought endless battles without any reprieve, rest, or hope for peace, and even alternate timelines and dimensions held no solace for him. The only comfort he could take was in survival...and now even that is in constant peril--in this damned Wheel, the fighting will never cease. Instead, now it runs eternally. Will he ever find rest?",
	"Originally a special forces marine, ever since joining the Slipgate program Ranger has seen a thousand deaths and escaped from a million more on a billion worlds. He has gone from military bases to medieval castles to arcane dimensions to hellish abysses to planes of eldritch madness best not spoken of. Through them all, Ranger has proven resilience and power that give even the most terrifying elder ones pause--with strange aeons, even death itself may die under fire of a well-aimed 9.9lb 750mm RHA rocket.",
	"Determination is a necessary trait, especially when you have to save the world from a lunatic cult leader. Ian Paul Freely is one such individual who had to overcome billions of traps and soldiers, including robots and undeads to save the world from evil. Still, the H.U.N.T has just begun. I.P. Freely has a wide range of explosives, fit for many situations. That's why many call him the \"demolition specialist\", he simply loves them, and you can be sure that he will not hesitate on using them, not by one bit.",
	"",
	"",
};

// I don't see the need to congest the regular hero arrays with double the length for one hero, so I will bite a bullet and make a separate one

Script "Samsara_Compendium_Initiate" (void) Net
{
	if(!CheckInventory("CompendiumOpened"))
	{
		GiveInventory("CompendiumOpened",1);
		int execute = ACS_NamedExecuteWithResult("Samsara_Compendium");
	}
	else
	{
		TakeInventory("CompendiumOpened",1);
	}
}

Script "Samsara_Compendium" (void) Net Clientside
{
	int cursorx, cursory, offsety, offsetx, menuindex, lastmenuindex, a;
	int hudboundsx = 1920;
	int hudboundsy = 1080;
	int hudcenterx = hudboundsx/2;
	int hudcentery = hudboundsy/2;
	int squarecenter = (hudboundsx+hudboundsy)/2;
	cursorx = hudcenterx;
	cursory = hudcentery;
	SetPlayerProperty(0,1,PROP_TOTALLYFROZEN);
	while(CheckInventory("CompendiumOpened"))
	{
		//int mousesensitivity = GetCvar("mouse_sensitivity");
		int yaw = GetPlayerInput(0, INPUT_YAW);
		int pitch = GetPlayerInput(0, INPUT_PITCH);
		int buttons = GetPlayerInput(-1, INPUT_BUTTONS);
						
		if(yaw > 1 || yaw < -1)
			cursorx -= yaw/16;
		
		if(pitch > 1 || pitch < -1)
			cursory -= pitch/16;
		
		if(cursorx < 0)
			cursorx = 0;	
		else if(cursorx > hudboundsx)
			cursorx = hudboundsx;
			
		if(cursory < 0)
			cursory = 0;
		else if(cursory > hudboundsy)
			cursory = hudboundsy;
		
		//PrintBold(s:"cursorx: ", d:cursorx, s:" cursory: ", d:cursory);
		
		SetFont("loserpic");
		SetHudSize(1,1,1);
		HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16200, CR_UNTRANSLATED, 0.0, 0.0, 1.0);
		SetFont("SXHCURS");
		SetHudSize(hudboundsx,hudboundsy,true);
		HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15989, CR_UNTRANSLATED, (cursorx*1.0), (cursory*1.0), 1.0);
		SetFont("SMALLFONT");

		if(menuindex == 0)
		{
			if(lastmenuindex != menuindex) { removemessages(15990,16100); lastmenuindex = menuindex; }
			int locationx, locationy;
			int wheelangle = -0.25;
			for(a = 0; a < CLASSCOUNT; a++)
			{		
				//SetHudClipRect(hudcenterx-64,16,128,rectboundariesy+16);
				//HudMessage(s:ClassInfo[a][0]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16000+a, CR_UNTRANSLATED, hudcenterx*1.0, offsety*1.0, 1.0);
				locationx = hudcenterx+((squarecenter/4*cos(wheelangle+(FixedDiv(1.0,CLASSCOUNT*1.0)*a)))>>16);
				locationy = hudcentery+((squarecenter/4*sin(wheelangle+(FixedDiv(1.0,CLASSCOUNT*1.0)*a)))>>16);
				if((cursorx < locationx+24 && cursorx > locationx-24) && (cursory < locationy+24 && cursory > locationy-24))
				{
					SetFont(ClassInfo[a][9]);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING|HUDMSG_ALPHA, 16000+a, "white", locationx*1.0, locationy*1.0, 1.0, 0.9);
					if(buttons & (BT_USE|BT_ATTACK))
						menuindex = a+1;
				}
				else { SetFont(ClassInfo[a][8]); HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING|HUDMSG_ALPHA, 16000+a, "black", locationx*1.0, locationy*1.0, 1.0, 0.9); }			
				//SetHudClipRect(0,0,0,0);
			}		
		}
		else
		{
			if(lastmenuindex != menuindex)
			{
				removemessages(15990,16100);
				lastmenuindex = menuindex;
				SetHudSize(hudboundsx/2,hudboundsy/2,true);
				SetFont("SMALLFONT");
				HudMessage(s:"Role: ",s:ClassInfo[menuindex-1][7]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16002, CR_UNTRANSLATED, 896.1, 32.0, 0);
						
				// need consistent spacing so I must separate these
				HudMessage(s:"Damage:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16003, CR_UNTRANSLATED, 896.1, 40.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][2]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16004, CR_UNTRANSLATED, 1000.1, 40.0, 0);
						
				HudMessage(s:"Defense:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16005, CR_UNTRANSLATED, 896.1, 48.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][3]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16006, CR_UNTRANSLATED, 1000.1, 48.0, 0);
						
				HudMessage(s:"Range:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16007, CR_UNTRANSLATED, 896.1, 56.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][4]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16008, CR_UNTRANSLATED, 1000.1, 56.0, 0);
						
				HudMessage(s:"Attack Speed:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16009, CR_UNTRANSLATED, 896.1, 64.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][5]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16010, CR_UNTRANSLATED, 1000.1, 64.0, 0);
						
				HudMessage(s:"Difficulty:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16011, CR_UNTRANSLATED, 896.1, 72.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][6]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16012, CR_UNTRANSLATED, 1000.1, 72.0, 0);
						
				SetFont(ClassInfo[menuindex-1][10]);
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16050, CR_UNTRANSLATED, 884.0, 48.0, 0);
				
				SetFont("STPB3");
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15999, CR_UNTRANSLATED, 16.0, (hudboundsy-16)*1.0, 0);
				SetHudSize(hudboundsx,hudboundsy,true);
			
				SetFont("SMALLFONT");
				SetHudSize(hudboundsx/2,hudboundsy/2,true);
				SetHudClipRect(FixedMul(hudboundsx/2,0.1),FixedMul(hudboundsy/2,0.1),FixedMul(hudboundsx/2,0.8),FixedMul(hudboundsy/2,0.8),FixedMul(hudboundsx/2,0.45));
				HudMessage(s:HeroSummaries[menuindex-1]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16013, CR_UNTRANSLATED, (hudcenterx/2)*1.0, 96.1, 0);
				SetHudClipRect(0,0,0,0,0);
				SetHudSize(hudboundsx,hudboundsy,true);
			}	
			
			if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
			{		
				if(((cursorx < 32 && cursorx > 0) && (cursory < hudboundsy && cursory > hudboundsy-32)) || buttons & (BT_ALTATTACK))
					menuindex = 0;
			}
		}
		Delay(1);
	}
	removemessages(15800,16200);
	SetPlayerProperty(0,0,PROP_TOTALLYFROZEN);
}