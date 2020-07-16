// Label, index, damage, defense, range, attack speed, difficulty
str ClassInfo[CLASSCOUNT][13] = 
{ 
	{"Doomguy", 1, "*****", "***", "***", "**", "*", "Damage", "TIPSYM01", "TIPHIL01", "TIPDGUY", "TPLGDOOM", "TPCHDOOM" },
	{"Chex Warrior", 2, "***", "*****", "***", "***", "*", "Defense", "TIPSYM02", "TIPHIL02", "TIPCHEX", "TPLGCHEX", "TPCHCHEX" },
	{"Corvus", 3, "***", "****", "**", "****", "****", "Utility", "TIPSYM03", "TIPHIL03", "TIPCORV", "TPLGCORV", "TPCHCORV" },
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
	{"Kyle Katarn", 17, "**", "*****", "****", "****", "***", "Tank", "TIPSYM17", "TIPHIL17", "TIPKYLEK" },
	{"Mooman", 18, "*", "***", "****", "****", "***", "Luck", "TIPSYM18", "TIPHIL18", "TIPMOOMN" },
	{"Jack Curtis", 19, "***", "***", "***", "****", "***", "Counter Assault", "TIPSYM19", "TIPHIL19", "TIPJACKC" },
	{"Grondoval", 20, "****", "***", "**", "****", "****", "Pugilist", "TIPSYM20", "TIPHIL20", "TIPGROND" },
	{"Gordon Freeman/Adrian Shephard", 21, "*****", "**", "****", "**", "*****", "Hunter", "TIPSYM21", "TIPHIL21", "TIPGFREE" },
	{"Lo Wang", 22, "***", "**", "****", "****", "***", "Ninja", "TIPSYM22", "TIPHIL22", "TIPLWANG" },
	{"Cybermage", 23, "***", "***", "***", "****", "***", "Magician", "TIPSYM23", "TIPHIL23", "TIPCMAGE" },
	{"Jon", 24, "**", "***", "***", "**", "****", "Adventurer", "TIPSYM24", "TIPHIL24", "TIPPSJON" },
	{"Leonard", 25, "***", "*", "****", "***", "***", "Sharpshooter", "TIPSYM25", "TIPHIL25", "TIPRRLEO" },
	{"Bitterman", 26, "***", "***", "****", "**", "***", "Battery", "TIPSYM26", "TIPHIL26", "TIPQ2MAN" },
	{"Demoness", 27, "***", "**", "**", "***", "***", "Steamroller", "TIPSYM27", "TIPHIL27", "TIPDEMON" },
	{"James Bond", 28, "***", "*", "***", "****", "****", "Spy", "TIPSYM28", "TIPHIL28", "TIPJBOND" }
};

str StatPages[3] = { "Summary", "Traits", "Changes" };

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

str HeroTraits[CLASSCOUNT] =
{
	"...And I Feel Mighty: Doomguy holds the Super Shotgun, the most devastating weapon in the game and cementing him as the most damaging hero. No other weapon can match its reliability and sheer power.
	\n\nTo Hell With Respect!: Doomguy is the most unchanged in his function and his abilities. Playing with him is just like playing Doom II, so show these newcomers who they better call granddaddy.",
	
	"The Mission Continues...: Chexter ain't got time to bleed...or the rating to. Hailing from an easy game where all the enemies did negligible damage without threat of death means that he's just as safe here. Let the kids play--Chex Warrior takes 20% less damage from everything.
	\n\nHold the Party Mix: The Zorch Propulsor seems like a typical rocket launcher, but sometime in between Chex Quest 1 and 3 Chexter got tired of accidentally zorching his own leg to another place. In 3, the Zorch Propulsor was modified to do no self-damage--and kept in here.",
	
	"Roll d20 for Damage: Heretic's damage scale worked on a much higher probability curve than Doom's, and so Corvus' weapons do much more random damage. You're just as likely to down someone with the Dragon Claw in seven shots as you are in fifteen.
	\n\nBag of Holding: Corvus can carry the most inventory items out of all the Heroes, with every major item being carryable. Corvus even starts with the Bomb of the Ancients and Mine of the Ancients, which provide powerful explosives on demand. Even his Ultimate is a carryable item--which gives him a heavy advantage in resourcefulness over the other Heroes.",
	
	"Call Apogee, Say 'Bullshit!': Poor B.J. was from an era where weapon design was much simpler. He has no Shotgun weapons, no Slot III weapon, and no weapons that use Ammo 2. Any Ammo 2 picked up is instead converted to Ammo 1.
	\n\nHeroes Don't Quit: Being a POW in Nazi camps taught B.J. some survival techniques the hard way. When low on health, B.J. can drink up certain piles of gibs and blood for a boost. Restricted only to decorations, unfortunately--can't slaughter imps and drink off them.",
	
	"Fianchetto: In HeXen, every class had 0.25 RadiusDamageFactor--which meant they only took a quarter damage from explosives. This is retained here, allowing him to wade through the fray with minimal damage to get closer.
	\n\nBoden's Mate: HeXen’s gameplay had a large emphasis on mobility. Not only did the classes have different speeds, but there was also quite a bit of platforming. In order to help close the distance and get into melee, Parias has Baratus’ runspeed and HeXen’s jump height.",
	
	"Step Right Up and Get Some!: Bosses in Duke Nukem 3D were not immune to splash damage from explosives. Because of this, all explosive weapons Duke wields force radius and splash damage, even on those enemies normally immune to it. Go wild on the bosses!
	\n\nIt's My Way or...Hell, It's My Way!: Being from the Build engine, Duke moves different, fights different, and plays different. His movement is slower, the Soulsphere gives him less health, and he can't take damage as well. He could die very easily in Duke Nukem 3D--so make sure you don’t die here.",
	
	"To Never Shoot Where I Could Use Grenades: Several of the Security Officer's weapons boast an alt-fire--the magnums (when a second is picked up), shotguns (also when a second is picked up), assault rifle, alien weapon, and wave motion cannon. These different options allow him different methods to approach situations, or simply to shoot harder and faster.
	\n\nNever Stop Running, Never Stop Firing: Long range does not exist to the Security Officer. His bullets are not instant hitscan, like the other heroes--they move at a much slower pace. Likewise, his projectiles have a slower travelling speed and are likely to easily be dodged.",
	
	"Go Forth and Kick Ass: Quake's air physics were much looser, and practically invented strafejumping and rocketjumping. Ranger thus hangs in the air slightly longer than normal, and can rocketjump much easier.
	\n\nDissolution of Eternity: While Ranger takes just as much damage as normal, he still has one fatal defensive flaw. When picking up a Soulsphere or Megasphere, the amount of health received slowly degenerates. This does not affect health bonus pickups.",

	"Where's my ammo?: Most of the weapons you have are rockets, and they are very hard to carry. You have very limited ammunition.
	\n\nBoom, Boom, Boom: You have the widest access to a wide range of explosives, you like making things go boom! Blow people up in many ways!",
	
	"",
};

str HeroChanges[CLASSCOUNT] =
{
	"- The Berserk operates off the Chainsaw as well as the Fist, allowing Doomguy to have a DPS alternative rather than focusing on only Burst.
	\n\n	^- : When in Berserk, the Chainsaw deals 7-70 damage every 3 tics.
	\n\n- The Berserk fist does more damage (from 20-200 to 120-240) and has different sounds. This allows the Berserk fist to be a viable weapon in comparison to the Rocket Launcher and Super Shotguns, especially against larger enemies.
	\n\n- The Fist no longer alerts monsters, because that was stupid.
	\n\n- Doomguy never had to deal with ghosts. In Heretic and HeXen, the Shotgun, Super Shotgun, and Chaingun pass harmlessly through ghosts.
	\n\n- There are not many other changes. In Samsara, the games meld to Doom II's gameplay, rather than vice-versa.",
	
	"- Before, the Mini-Zorcher's animation was pressing the button after it fires. Now it's pressing as it fires.
	\n\n- The Bootspoon no longer alerts monsters, and has a sound for impacting walls.
	\n\n- All of Chexter's weapons leave small zorch puffs when hitting things now, for easier identifying of impact.
	\n\n- The GLDefs for Chex Quest were yellow-ish, since they inherited from Doom. Now they're red, to match the zorch colors.
	\n\n- The Large Zorcher reloads a slight bit quicker now (from a firing time of 37/44 tics to 32/37 tics) to differentiate it from Doomguy's Shotgun.
	\n\n- All of Chexter's weapons are slightly more accurate (from bullet spread of 5.6 to 4) to differentiate them from Doomguy's, and to make up for the lack of an SSG.
	\n\n- The Phasing Zorcher didn't leave marks on the wall in vanilla Chex Quest, but now does because pretty.
	\n\n- The Super Large Zorcher was planned for Chex Quest 3, but didn't make it through. If it did, it likely would have been an SSG clone.",
	
	"- The Tomed staff has had its damage increased from 18-81 to 60-120, to give Corvus a bit of a burst damage oomph.
	\n\n- The Elven Wand did not have any BRIGHT frames in Heretic.
	\n\n- The Staff no longer alerts monsters.
	\n\n- The tomed Elven Wand no longer passes through ghosts. All characters' basic weapons should be able to hit ghosts.
	\n\n- The Firemace was incredibly underwhelming as an ultimate weapon. It has been moved to a slot II weapon, rather than VII.
	\n\n- The Firemace uses less ammo, shooting four balls for every one ammo. This is to differentiate it from the Dragon Claw.
	\n\n- The tomed Dragon Claw and Hellstaff use less ammo--this is to tempt players away from just tomed Firemacing everything.
	\n\n- The Staff and Gauntlets of the Necromancer no longer lower and re-raise when the Tome of Power runs out, so as to smooth out gameplay.
	\n\n- The Gauntlets of the Necromancer and Tomed Staff now have GLDefs, because pretty.
	\n\n- The tomed Dragon Claw fires a near-hitscan now, rather than a very fast projectile. Giving it slower speeds glitched the rippers and caused them to go all over the map.
	\n\n- The Tome of Power works more like Heretic II than Heretic, being a permanent inventory item.",
	
	"- I was unable to get a hand on Wolfenstein for the Mac, so I don't know how accurate/inaccurate the Flamethrower/Rocket Launcher is to their game.
	\n\n- The Knife's unupgraded damage is more true to Wolf 3D, but its upgraded graphics/sound are the ones in Wolf3D.
	\n\n- When upgraded, the knife does damage on every tic it's thrust in, reminiscent of other slot I weapons.
	\n\n- The Spear of Destiny is now an actual weapon. Its behavior is entirely original, though its appearance is based on the Spear of Destiny boxart. A lot of Doom II levelsets practically require an ultimate weapon eventually.
	\n\n- Drinking up gibs is at minimum 20 HP, rather than 10.",
	
	"- The most obvious: Parias now has seven weapons instead of four.
	\n\n- The Mace of Contrition no longer alerts monsters.
	\n\n- The Firestorm's surrounding fireballs do more damage, having their A_Explode increased from radius 20/explosive damage 20 to 64/32, so as to match the power of the Plasma Rifle.
	\n\n- The Hammer of Retribution forces its radius damage on enemies, so as to make up for its much slower speed with Rocket Launcher power.
	\n\n- Timon's Axe and the Frost Shards have been given a little bit of an extra melee oomph, in order to emphasize his role as a close-range brawler.
	\n\n- The Serpent Staff's poison bolts were reduced in damage from 5-40 to 4-16 per shot, so as to match Chaingun power.
	\n\n- The heal of the Serpent Staff's melee has been increased and quickened, and can now heal for beyond 100 health, so as to give it an extra use.
	\n\n- The Wraithverge takes 20 of each ammo now, rather than 17, to match the costliness of other ultimate weapons.
	\n\n- The Wraithverge's rate of fire has been slightly decreased by adding a 20-tic hang time at the end, to match the slow rate of fire of other ultimate weapons.
	\n\n- The Frost Shards' rate of fire has been slightly increased by reducing the after-shot frames from 15 tics to 11, to assist it in crowd-control.
	\n\n- The Flechette no longer hurts allied players or the player, so as to reduce griefing.
	\n\n- The Sapphire Wand's radius/height was reduced from 12/8 to 3/2, so as to help Parias in maps where he needs to shoot through the bars.
	\n\n- Parias' mana 2 has a limit of 300 due to running off Cells, rather than 200.
	\n\n- The Mystic Ambit Incant sprays armor shards as well as giving health, so as to additionally assist allies.
	\n\n- The Wraithverge is now picked up in one piece, rather than needing to be assembled. This is to match the other games' ultimates.",
	
	"- Duke's former standing sprite has been repurposed as a shooting sprite.
	\n\n- Significantly more taunts all around, since it's an integral part of Duke's character.
	\n\n- Animation times and sprites locations were tried to make as close as possible as their Duke Nukem 3D/64 counterparts, but there may be subtle differences.
	\n\n- Damage values for the explosive Duke Nukem weapons are not as documented as well as the idtech1 weapons. Most of them are based off the Doomguy's similar weapons.
	\n\n- The Chaingun Cannon has a new animation for firing, because replicating the old one was a bitch and a half.
	\n\n- The Chaingun Cannon's bullets do 15 damage rather than 9 damage, in order to give it a boost over the other Chaingun weapons.
	\n\n- The Pipebombs, RPG, and Explosive Shotgun work off the same ammo, now, rather than being separate.
	\n\n- The Explosive Shotgun has been brutally nerfed. It is now a separate weapon, rather than an ugprade for the shotgun, its spread is much wider, its cocking has been drastically lengthened, and its power diminished.
	\n\n- The Mighty Boot works much different, due to Zandronum's/ZDoom's inability to have alt-fire used alongside primary fire in a way that works with Netplay. Rather than being used alongside weapons for extra oomph, now it puts some distance between an enemy and user.
	\n\n- The Freezethrower shots no longer halve damage when bouncing off walls, due to engine limitations.
	\n\n- The Freezethrower's shots do 22 damage rather than 20 damage, due to its slightly slower RoF compared to the Plasma Rifle.
	\n\n- The Pipebomb's first, second, and third bounce are not a fixed height/amount, due to how ZDoom handles bouncing.
	\n\n- The Pipebomb's three counts of bounce include walls, due to how ZDoom handles bouncing.
	\n\n- Deployed pipebombs can no longer be shot up or picked up, due to my inability to figure it out.",
	
	"- In Zandronum, weapons bob from side to side instead of up and down. ZDoom has Marathon-style bobbing.
	\n\n- Grenades, fists, and charged fusion shots no longer trigger switches, due to engine limitations. Sorry, Vidmasters.
	\n\n- The Security Officer now has a pain sound, so as to indicate when shots hit in DM play.
	\n\n- The Shotgun has had its damage reduced, because 200-240 damage with a single shotgun in 40 tics HAH HAH HAH NOPE.
	\n\n- In co-op, the Rocket Launcher has had its damage buffed from 250-300 to 305-390. Due to its incredibly slow RoF compared to the other rocket launchers, it needed a bit of a burst damage oomph.
	\n\n- The Infrared has had its color changed from blue to green, due to Zandronum's lack of support for bluemap yet. ZDoom players don't have this issue.
	\n\n- The Magnum can now be used underwater, just in case someone hasn't found a chainsaw in a water map.
	\n\n- The Alien weapon has a lot more ammo and generally does more damage, in order to justify how much rarer it is compared to Marathon.
	\n\n- The Fusion Pistol's charge no longer shakes and/or does higher beeps. Sorry.
	\n\n- The TOZT Napalm Unit has double the travelling speed, due to Doom's faster-paced gameplay and movement.
	\n\n- The Fusion Pistol's overcharge-to-death is no longer an explosion, due to being able to grief people with the resulting explosion.
	\n\n- In DM, the SMG's damage has been reduced--its accuracy and rate of fire meant it could shred through people far too easily. Still the same in co-op/singleplayer.
	\n\n- The Wave Motion Cannon is now a useable weapon. Doom's/HeXen's design practically requires an ultimate weapon for a lot of areas.
	\n\n- The HUD no longer holds a bar for oxygen, due to Zandronum's lack of an AirTime variable in its SBarInfo. It instead now represents armor.",
	
	"- Quake had such a lower damage scale than Doom it wasn't even funny. The Vore had 400 HP, equivalent to two Centaurs. In co-op, his weapons have been buffed the fuck out.
	\n\n- The Quad Damage is now a reuseable item, partly to help with the aforementioned damage issues, and partly because there was no appropriate item to replace it with. (Berserks didn't work--too rare, too erratically placed, not to mention should be more utility)
	\n\n- The Double-Barreled Shotgun uses only one shell now instead of two, for the same reason. (64 damage for one shot hah hah hah hah NOPE)
	\n\n- In Quake, the projectiles had no hitbox. Here, their hitbox is simply obscenely tiny.
	\n\n- Gravity has been ever-so-slightly reduced so as to simulate Quake's strange air physics.
	\n\n- The nails and rockets originally travelled at the same speed. Here, nails have been increased to speed 75.
	\n\n- Lava Nails, Multi-Grenades, and Multi-Rockets were handled a bit differently. There were no alt-fires, much less that swapped between weapons, and the ammo pickups were separate.
	\n\n- The Double Barreled Shotgun's, Nailgun's, and Laser Cannon's animations are slightly smoother.
	\n\n- The Shotgun and Double-Barreled Shotgun's damages are random by 1d3, while Quake's damage values were completely static. Turns out people are getting upset for using fake bullets. Whoops.
	\n\n- The trail behind the Nails and Lava Nails has been made a LOT more obvious, so enemies can see it more easily in DM.",
	
	"",
};

str SelectionColors[2] = { "black", "white" };

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
	int cursorx, cursory, offsety, offsetx, menuindex, lastmenuindex, a, menutab, lastmenutab, menuitem, lastmenuitem, scrollcounter, scrolltimer;
	int hudboundsx = 1440;
	int hudboundsy = 972;
	int hudcenterx = hudboundsx/2;
	int hudcentery = hudboundsy/2;
	int squarecenter = (hudboundsx+hudboundsy)/2;
	int scrollmax = 480;
	int scrollstep = 4;
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
		
		SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.95), FixedMul(hudboundsx,0.425));
		SetFont("SAMCMPB3");
		HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16200, CR_UNTRANSLATED, hudcenterx*1.0, hudcentery*1.0, 0);
		SetHudClipRect(0,0,0,0,0);
		SetFont("SXHCURS");
		SetHudSize(hudboundsx,hudboundsy,true);
		HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15989, CR_UNTRANSLATED, (cursorx*1.0), (cursory*1.0), 1.0);
		SetFont("SMALLFONT");

		if(menuindex == 0)
		{
			if(lastmenuindex != menuindex) { removemessages(15990,16185); lastmenuindex = menuindex; scrollcounter = 0; scrolltimer = 360; }
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
			//======================================================================================================== Draw
			if(lastmenuindex != menuindex || lastmenutab != menutab || lastmenuitem != menuitem)
			{
				//Init
				if(lastmenuindex != menuindex)
				{
					menutab = 1;
					menuitem = 1;	
				}
				removemessages(15990,16180);
				scrollcounter = 360;
				scrolltimer = 0;
				lastmenuindex = menuindex;
				lastmenutab = menutab;
				lastmenuitem = menuitem;
				
				SetHudSize(hudcenterx,hudcentery,true);
				SetFont("SMALLFONT");
				HudMessage(s:"Role: ",s:ClassInfo[menuindex-1][7]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16002, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.75)<<16)+0.1, FixedMul(hudcentery,0.05)*1.0, 0);
						
				// need consistent spacing so I must separate these into two
				HudMessage(s:"Damage:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16003, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.75)<<16)+0.1, FixedMul(hudcentery,0.07)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][2]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16004, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.9)<<16)+0.1, FixedMul(hudcentery,0.07)*1.0, 0);

				HudMessage(s:"Defense:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16005, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.75)<<16)+0.1, FixedMul(hudcentery,0.09)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][3]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16006, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.9)<<16)+0.1, FixedMul(hudcentery,0.09)*1.0, 0);
						
				HudMessage(s:"Range:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16007, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.75)<<16)+0.1, FixedMul(hudcentery,0.11)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][4]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16008, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.9)<<16)+0.1, FixedMul(hudcentery,0.11)*1.0, 0);
						
				HudMessage(s:"Attack Speed:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16009, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.75)<<16)+0.1, FixedMul(hudcentery,0.13)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][5]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16010, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.9)<<16)+0.1, FixedMul(hudcentery,0.13)*1.0, 0);
						
				HudMessage(s:"Difficulty:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16011, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.75)<<16)+0.1, FixedMul(hudcentery,0.15)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][6]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16012, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.9)<<16)+0.1, FixedMul(hudcentery,0.15)*1.0, 0);
						
				SetFont(ClassInfo[menuindex-1][10]);
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16050, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.725)<<16), FixedMul(hudcentery,0.1)*1.0, 0);
				SetFont(ClassInfo[menuindex-1][11]);
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16013, CR_UNTRANSLATED, (hudcenterx/2)*1.0, FixedMul(hudcentery,0.1)*1.0, 0);
				SetFont(ClassInfo[menuindex-1][12]);
				SetHudSize(hudboundsx,hudboundsy,true);
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16014, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.5)<<16)+0.1, (FixedMul(hudcentery,0.33)<<16)+0.2, 0);

				SetHudSize(hudboundsx,hudboundsy,true);
				SetFont("SAMCMPB2");
				SetHudClipRect(FixedMul(hudboundsx,0.25),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.7),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.675));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16185, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(FixedMul(hudboundsx,0.05),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.18),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.125));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16184, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(0,0,0,0,0);
				//SetHudSize(hudboundsx,hudboundsy,true);
			}	
			
			if(menutab == 1)
			{
				SetFont("SMALLFONT");
				SetHudSize(hudcenterx,hudcentery,true);
				for(a = 0; a < 3; a++)
				{
					SetHudSize(hudcenterx,hudcentery,true);
					HudMessage(s:StatPages[a]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16030+a, SelectionColors[(menuitem==a+1)], (FixedMul(hudboundsx,0.06625)<<16), FixedMul(hudboundsy,0.1+(0.025*a))<<16, 0);
					SetHudSize(hudboundsx,hudboundsy,true);
					if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
					{
						if((cursorx < FixedMul(hudboundsx,0.23) && cursorx > FixedMul(hudboundsx,0.05)) && (cursory < FixedMul(hudboundsy,0.19+(0.05*a))+8 && cursory > FixedMul(hudboundsy,0.19+(0.05*a))-8))
							menuitem = a+1;
					}
				}
				SetHudSize(hudboundsx,hudboundsy,true);
			}
			
			//======================================================================================================== Tab Shit
			
			scrolltimer++;
			if(scrolltimer%scrollstep==0) { scrollcounter--; }
			if(scrolltimer == scrollstep) scrolltimer = 1;
			if(scrollcounter < -scrollmax)
				scrollcounter = scrollmax;
				
			//Tab Specific Info
			SetFont("SMALLFONT");
			SetHudSize(hudcenterx,hudcentery,true);
			SetHudClipRect(FixedMul(hudcenterx,0.25),FixedMul(hudcentery,0.175),FixedMul(hudcenterx,0.7),FixedMul(hudcentery,0.775),FixedMul(hudcenterx,0.675));
			if(menuitem == 1)
				HudMessage(s:HeroSummaries[menuindex-1]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16015, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.26)<<16)+0.1, scrollcounter*1.0+88.1, 0);
			if(menuitem == 2)
				HudMessage(s:HeroTraits[menuindex-1]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16015, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.26)<<16)+0.1, scrollcounter*1.0+88.1, 0);
			if(menuitem == 3)
				HudMessage(s:HeroChanges[menuindex-1]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16015, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.26)<<16)+0.1, scrollcounter*1.0+88.1, 0);
			
			SetHudClipRect(0,0,0,0,0);							
			SetHudSize(hudcenterx,hudcentery,true);
			if(menutab!=1)
				SetFont("CMPSKLT2");
			else
				SetFont("CMPSKLT1");
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16025, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.05)<<16)+0.1, FixedMul(hudcentery,0.143)*1.0, 0);
			
			if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
			{		
				if(((cursorx < (FixedMul(hudcenterx,0.1325)+32) && cursorx > (FixedMul(hudcenterx,0.1325)-32)) && (cursory < FixedMul(hudcentery,0.275)+32 && cursory > FixedMul(hudcentery,0.275)-32)))
					menutab = 1;
			}
			
			if(menutab!=2)
				SetFont("CMPGUNT2");
			else
				SetFont("CMPGUNT1");
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16026, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.0925)<<16)+0.1, FixedMul(hudcentery,0.143)*1.0, 0);
			
			if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
			{		
				if(((cursorx < (FixedMul(hudcenterx,0.225)+32) && cursorx > (FixedMul(hudcenterx,0.225)-32)) && (cursory < FixedMul(hudcentery,0.275)+32 && cursory > FixedMul(hudcentery,0.275)-32)))
					menutab = 2;
			}
	
			if(menutab!=3)
				SetFont("CMPENMT2");
			else
				SetFont("CMPENMT1");	
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16027, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.1375)<<16)+0.1, FixedMul(hudcentery,0.143)*1.0, 0);
			
			if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
			{		
				if(((cursorx < (FixedMul(hudcenterx,0.3175)+32) && cursorx > (FixedMul(hudcenterx,0.3175)-32)) && (cursory < FixedMul(hudcentery,0.275)+32 && cursory > FixedMul(hudcentery,0.275)-32)))
					menutab = 3;
			}
			
			//======================================================================================================== Back button
			
			SetFont("STPB3");
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15999, CR_UNTRANSLATED, 32.0, (hudboundsy-32)*1.0, 0);
			
			if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
			{		
				if(((cursorx < 32 && cursorx > 0) && (cursory < hudboundsy && cursory > hudboundsy-32)) || buttons & (BT_ALTATTACK))
					menuindex = 0;
			}
			SetHudSize(hudboundsx,hudboundsy,true);
		}
		Delay(1);
	}
	removemessages(15800,16200);
	SetPlayerProperty(0,0,PROP_TOTALLYFROZEN);
}