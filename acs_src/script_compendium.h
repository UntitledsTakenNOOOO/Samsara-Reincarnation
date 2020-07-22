// Label, index, damage, defense, range, attack speed, difficulty
str ClassInfo[CLASSCOUNT][13] = 
{ 
	{"Doomguy", 1, "*****", "***", "***", "**", "*", "Damage", "TIPSYM01", "TIPHIL01", "TIPDGUY", "TPLGDOOM", "TPCHDOOM" },
	{"Chex Warrior", 2, "***", "*****", "***", "***", "*", "Defense", "TIPSYM02", "TIPHIL02", "TIPCHEX", "TPLGCHEX", "TPCHCHEX" },
	{"Corvus", 3, "***", "****", "**", "****", "****", "Utility", "TIPSYM03", "TIPHIL03", "TIPCORV", "TPLGCORV", "TPCHCORV" },
	{"Blazkowicz", 4, "***", "***", "*****", "****", "*", "Marksman", "TIPSYM04", "TIPHIL04", "TIPBLASK", "TPLGWOLF", "TPCHWOLF" },
	{"Parias", 5, "*****", "****", "*", "****", "***", "Brawler", "TIPSYM05", "TIPHIL05", "TIPPARIA", "TPLGHEXN", "TPCHHEXN" },
	{"Duke Nukem", 6, "****", "*", "***", "***", "***", "Crowd Control", "TIPSYM06", "TIPHIL06", "TIPDUKE", "TPLGDUKE", "TPCHDUKE" },
	{"Security Officer", 7, "***", "***", "**", "*****", "*****", "Supression", "TIPSYM07", "TIPHIL07", "TIPSECOF", "TPLGMARA", "TPCHMARA" },
	{"Ranger", 8, "***", "**", "****", "****", "***", "Artillery", "TIPSYM08", "TIPHIL08", "TIPRANGE", "TPLGQUAK", "TPCHQUAK" },
	{"Ian Paul Freeley", 9, "****", "**", "***", "**", "***", "Demolitions", "TIPSYM09", "TIPHIL09", "TIPIANPF", "TPLGROTT", "TPCHROTT" },
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
	\n	^- : When in Berserk, the Chainsaw deals 7-70 damage every 3 tics.
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
	
	"- Rise of the Triad only allowed 1 missile/magic weapon to be carried at once. This system does not work so well in Samsara, therefore, Freeley can carry all his missile weapons.
	\n\n- Once the few missiles that weapons had in Rise of the Triad were burned up, the weapon was tossed. This is not the case in Samsara.
	\n    ^- Further, Freeley's weapons now can carry much more ammo, but not as much as other heroes.
	\n\n- The excalibat tossed enemies into the air when hit, and did very little damage. Here, the excalibar does a large amount of melee damage to compensate for Freeley's lack of close quarter combat options
	\n\n- God mode in Samsara doesn't increase Freeley's view height",
};

//[CLASSCOUNT] is hero index, [20] is max slots, [4] is the amount of separate pieces of information
str ClassWeaponInfo[CLASSCOUNT][20][5] = 
{
	{
		{ "Fist", "Your iron-clad knuckles are a little better than nothing", "", " Fist ", "f" },
		{ "Pistol", "The Pistol is the only weapon you start out with. But you'll use anything in a pinch, no matter how pathetic it may feel.", "WPSTA0", " Pistol ", "p" },
		{ "Chainsaw", "The Chainsaw cuts the baddies like standing timber, but you have to get close.", "WSAWA0", " Chainsaw ", "1" },
		{ "Shotgun", "Shotguns deliver a heavy punch at close range and a generous pelting from a distance.", "WSHTA0", " Shotgun ", "2" },
		{ "Super Shotgun", "Combat Shotguns are double-barreled, sawed-off killing sticks. These gats are the ultimate in pellet warfare. Beware, two barrels not only deliver more fire power, but take more time to reload.", "WSSGA0", "Super Shotgun", "3" },
		{ "Chaingun", "Chainguns direct heavy firepower into your opponent, making him do the chaingun cha-cha.", "WCGNA0", " Chaingun ", "4" },
		{ "Rocket Launcher", "Rocket Launchers deliver an explosive rocket that can turn several baddies inside-out.", "WDRLA0", "Rocket Launcher", "5" },
		{ "Plasma Rifle", "Plasma Rifles shoot multiple rounds of plasma energy frying some demon butt!", "WPLSA0", "Plasma Rifle", "6" },
		{ "B.F.G. 9000", "BFG 9000s are the prize of the military's arsenal. Great for clearing the room of those unwelcome guests. Shoot it and see for yourself.", "WBFGA0", "B.F.G. 9000", "7" },
		{ "Berserk", "Berserk Packs heal you, plus act as a super-adrenaline rush, enormously boosting our muscle power. Since you're already a pretty meaty guy, this enhanced strength lets you tear ordinary dolts limb from limb, and you can even splatter those demons without too much trouble. However, you've got to use your Fist attack to get the benefit of the Berserk attack bonus. When you become Berserk, your screen will briefly turn red.", "DGBZA0", "DoomguyBerserker", "u" },
	},
	{
		{ "Bootspoon", "Your cereal spoon is a little better than nothing.", "", " Bootspoon ", "f" },
		{ "Mini-Zorcher", "The Mini-Zorcher is the only zorcher you start out with. But you'll use anything in a pinch, no matter how pathetic it may feel.", "", "Mini-Zorcher", "p" },
		{ "Super Bootspork", "The Super Bootspork teleports the Flemoids like a busted teleporter watch, but you have to get close.", "CSPRA0", "Super Bootspork", "1" },
		{ "Large Zorcher", "Large Zorchers deliver a heavy punch at close range and a generous pelting from a distance.", "SHOCA0", "Large Zorcher", "2" },
		{ "Super Large Zorcher", "The Bazoik military could have added another barrel to the Large Zorcher to make it shoot two shots at once or something. Nah, they decided to make something that does more damage but eats up a bit more ammunition.", "WSLZA0", "Super Large Zorcher", "3" },
		{ "Rapid Zorcher", "Rapid Zorchers direct heavy firepower into your opponent, making him do the teleporting cha-cha.", "MGUCA0", "Rapid Zorcher", "4" },
		{ "Zorch Propulsor", "Zorch Propulsor deliver an explosive-like energy that can teleport several baddies back to their home.\nBest of all, you don’t take self-damage from the Zorch Propulsor!", "LAUCA0", "Zorch Propulsor", "5" },
		{ "Phasing Zorcher", "Phasing Zorchers shoot multiple rounds of plasma energy teleporting some Flemoid butt!", "PLACA0", "Phasing Zorcher", "6" },
		{ "LAZ Device", "LAZ Devices are the prize of the Bazoik military's arsenal. Great for clearing the room of those unwelcome guests (back to their home dimension). Shoot it and see for yourself.\nYou can also hold down the trigger to summon a LAZ shield. This can block most enemy attacks and if a projectile hit it, the projectile is reflected!", "CFUGA0", "LAZ Device", "7" },
		{ "Supercharge Breakfast", "Breakfast is the most important meal of the day!\nGives 100 additional health. Adds on to existing health and can go up to 200.", "CBRKA0", "ChexSoulsphere", "u" },
	},
	{
		{ "Staff", "Nothing magical about this weapon. It's a stick, unless it's powered-up, then it's as strong as an oak!", "", " Staff ", "f" },
		{ "Elven Wand", "Your base weapon. If you are using this, it's time to run unless it's powered-up, in which case your enemy should take the ‘run' option.", "", "Elven Wand", "p" },
		{ "Gauntlets of the Necromancer", "The gauntlets replace your normal beatin' stick and deliver a devastating electrical attack.\nPowered-up, it sucks enemies in from a further distance and drains their life to increase yours!", "WGNTA0", "Gauntlets of the Necromancer", "1" },
		{ "Firemace", "The Firemace is a rapid firing weapon that shoots bouncing, explosive balls!\nPowered-up, Watch Out... this fires extremely large and powerful Balls 'o Death!", "WMCEA0", " Firemace ", "2" },
		{ "Ethereal Crossbow", "The crossbow shoots 3 magical arrows at once, deliver heavy damage at short range or hitting multiple targets at a distance.\nPowered-up, this baby blasts 5 slammin' magic arrows for a good, strong head-pounding punishment!", "WCBWA0", "Ethereal Crossbow", "3" },
		{ "Dragon Claw", "Firing a barrage of explosive magic, this weapon is perfect for clearing monster-infested hallways.\nPowered-up, the ‘Ripper' delivers a four-way lethal blast, rippin' your enemy apart. ", "WBLSA0", "Dragon Claw", "4" },
		{ "Phoenix Rod", "The Phoenix Rod delivers and explosive charge that will decimate the normal baddie into bits.\nPowered-up, it's time to deliver some deep-fried damage as the rod pours out a steady, hot stream of raw inferno!  Watch 'em scream and burn - it's great!", "WPHXA0", "Phoenix Rod", "5" },
		{ "Hellstaff", "Now you're one bad elf. The Hellstaff fires at a high rate of speed and does heavy damage.\nPowered-up, this baby slams out a bone-crunching Rain From Hell that will leave your enemies wet - in their own steaming blood!", "WSKLA0", "Hellstaff", "6" },
		{ "Staff of D'sparil", "The primary weapon of D'Sparil; the first and youngest of the trio of Serpent Riders. A formidable weapon in the hands of anyone, especially yourself.\nPowered-up, your enemies will learn to think again to cross you…", "DSTFA0", "DSparilStaff", "7" },
		{ "Tome of Power", "Temporarily increases the power of your weapons or \"power-up.\" The Tome will appear in the top-right corner of the screen while it is active.", "ARTIPWBK", "PortTome", "u" },
	},
	{
		{ "Knife", "You always have a knife. It will help you out if you need a shave, but for the most part is used only when you're out of firepower for a final mano-a-mano.", "", "Knife", "f" },
		{ "Luger", "You always have a pistol, and will start the game out with one. This is the weakest of the guns… and unlike the knife, it doesn't need sharpening!", "", "Luger", "p" },
		{ "\"Sharper\" Knife", "Getting tired of sharpening that !@#%ing knife you start out with!? This one never needs to be sharpened from time to time! A chainsaw woulda been better though.\nYour knife does more damage.", "WKNPA0", "BJSuperKnife", "1" },
		{ "Machine Gun", "This machine gun is the primary armament of the SS guards. It's an efficient and powerful weapon that is useful for attacking multiple enemies.", "WMGPA0", "Machine Gun", "23" }, // Machine Gun for Slot III
		{ "Chaingun", "The Chaingun uses the gatling gun principle of rotating barrels. It's a destructive killing machine that will clear the room. However, it has a healthy appetite for ammunition. ", "WCHPA0", "  Chaingun  ", "4" },
		{ "Rocket Launcher", "Rockets fired from the launcher have the ability to plow through several enemies, provided they are in the line of fire.", "WRLPA0", " Rocket Launcher ", "5" },
		{ "Flamethrower", "This pyro-tool is powered by the \"gas cans\" that you'll find along the way. Hang fire on the bad guys with a burst of flame.", "WFLPA0", " Flamethrower ", "6" },
		{ "Spear of Destiny", "The artifact that Hitler covets most is the Spear of Destiny, the weapon that was used to pierce the side of Christ while he was nailed to the cross. According to legend, no man can be defeated with this spear in his possession.", "WSPRE0", "Spear of Destiny", "7" },
		{ "Extra Life", "Hidden within secret rooms of the fortresses are items that give you that extra urge to keep fighting!\nIf below 20 HP and takes damage, an extra life will be automatically used to send you back to the beginning of the level with full Health, Armor, and Ammo 1. Does not work against massive burst damage…yet.", "WOLFLIFE", "WolfExtraLife", "u" },
	},
	{
		{ "Mace of Contrition", "The Mace will only cause contrition in an enemy after numerous beatings. This weapon should only be used as a last resort because of its short range!", "", "Mace of Contrition", "f" },
		{ "Sapphire Wand", "Useful for killing enemies, eventually, this wand will fire quick magical blue darts at your target. There is no limit to the amount of charges in this wand and it requires no mana.", "", "Sapphire Wand", "p" },
		{ "Poison Cloud Flechette", "When a Cleric, such as Parias, uses the flechette, it produces a poison gas cloud, lethal to any who venture near.\nIt is an inventory item and has unlimited ammunition but also a cooldown timer.", "PSBGA0", "PortFlechette", "1" },
		{ "Frost Shards", "This spell lets you shoot frozen shards from your hands. These ice bolts are significantly stronger than the Sapphire Wand's small darts, so use Frost Shards whenever possible to freeze your enemies where they stand.", "WFRSA0", "Frost Shards", "2" },
		{ "Timon's Axe", "The Axe makes you want to really jump in there and hack away at your enemies as it deals out much more damage than the Fighter's Spiked Gauntlets. This is also a close-range-only weapon, so be careful not to get carried away!", "WFAXA0", "Timon's Axe", "3" },
		{ "Serpent Staff", "The essence of the sacred Kalrath serpent is contained within this staff. Feed it with the blue mana and it will serve you faithfully by spitting twin venom spheres at your enemies. Using this staff up close will drain your enemy's life and give some of it to you!", "WCSSA0", "Serpent Staff", "4" },
		{ "Hammer of Retribution", "Now you can really start dealing some death! The Hammer can be thrown straight out in a skull-spitting attack or you can get up-close and personal for that special bludgeoning that only you can provide.\nWhen used at long range, a strong projectile exits the Hammer. When used at close quarters, there's no projectile but a direct hit with the Hammer. No mana is used in this case.", "WFHMA0", "Hammer of Retribution", "5" },
		{ "Firestorm", "The Firestorm spell lets you summon a gout of fire from the earth. The flames appear at your enemy's feet and roar upward to engulf his entire body, roasting him alive. All things considered, Firestorm is the ultimate barbecue.", "WCFMA0", "Firestorm", "6" },
		{ "Wraithverge", "A very powerful multi-part weapon, this staff will summon the forces of the grave to feed upon your enemy's soul, tearing and knashing away at the lifeforce like hungry dogs!", "WWRTA0", "Wraithverge", "7" },
		{ "Mystic Ambit Incant", "Restores nearby players' health by 50 to 90 points, gives Parias armor, and also spreads 15 armor shards for teammates to pick up.", "HRADA0", "PortMysticAmbit", "u" },
	},
	{
		{ "Mighty Boot", "Use this when Duke needs to do a little ass kicking.", "", "Mighty Boot", "f" },
		{ "Glock 17", "This is an automatic pistol which does normal damage.\n\nThe Pistol holds 12 bullets in each clip before automatically reloading.", "", "Glock 17", "p" },
		{ "Pipebombs", "To toss a bomb, press FIRE. The longer the FIRE button is held, the father the bomb with go. After tossing the bomb, the thumb-activated detonator will appear. To blow up the bomb, just press FIRE again. To detonate more than one pipe bomb at once, throw the first one, select this weapon again, then throw another.", "WPBMA0", "Pipebombs", "1" },
		{ "Shotgun", "This shotgun packs a far more powerful blast than the pistol.", "SHTPA0", "  Shotgun  ", "2" },
		{ "Explosive Shotgun", "Later in the game, you may find another shotgun that fires exclusively explosive shotgun shells. They do a serious amount of damage to anyone they hit. Be careful about using them in small areas though – you may catch yourself in the blast.", "DXSPA0", "Explosive Shotgun", "3" },
		{ "Chaingun Cannon", "This rapid fire chaingun is a good weapon for dispersing several enemies at once.", "CHGPA0", "Chaingun Cannon", "4" },
		{ "RPG", "The rocket launched weapon is great for dealing with enemies from a distance. When the rocket hits, it explodes with enough force to affect anything right around it, Duke included, so beware.", "DRPGA0", "RPG", "5" },
		{ "Freezethrower", "Streams of freezing nitrogen discharge through the environment as this weapon chills its victims down to the point of death and ultimate crystallization.", "FRZPA0", "Freezethrower", "6" },
		{ "Devastator", "Straight out of the Pentagon's top secret labs comes this double barreled brute of a weapon which lets loose swarms of miniature stinger missiles in the direction of your enemies.", "DEVPA0", "Devastator", "7" },
		{ "Jetpack", "Duke's government-issue jetpack is one of his greatest tools, whether in mortal conflict against raging aliens or in personal grudge matches in multiplayer. Turn it on, then use the jump and crouch keys to raise and lower yourself.\n\nIf the Jetpack is banned by server admin, this weapon instead gives you 8x boot damage.", "DKJTA0", "DukePortJetpack", "u" },
		{ "Shrinker", "This slick weapon will shrink your enemies to pint-sized for several seconds. During that time, Duke can stomp and squish the shrunken foes by walking on top of them.\nThe Shrinker is ineffective and deals no damage towards boss type enemies.", "DKSRR0", "Shrinker", "u" },
		{ "Expander", "By emitting microwaves, this weapon will superheat any enemy and cause it to expand until it finally \"pop\" into a bloody mess.\nThe Expander can deal damage towards boss type enemies, but they will not expand on death.\n\nIf \"Duke Expander Mode\" is set to: Microwave Pop\nWhen an expanded enemy explodes and it damages another nearby enemy to the point of death, that enemy will also expand then explode!", "DKXPI0", "Expander", "u" }
	},
	{
		{ "Steel Knuckles", "There really doesn't need to be an explanation about something you were technically born with. You can dual-wield the steel knuckles (by pressing the Alt Fire key)…because you were born with two hands?", "", "Steel Knuckles", "f" },
		{ ".44 Magnum Mega Class A1", "The new standard issue sidearm for all field personnel doesn't look much like your old .45 MMC, does it? That is because it has been built for a single purpose, by a dedicated people and not by underpaid laborers toiling for a thinly-veiled government-owned arms manufacturing machine (oiled with the blood of the underclasses, by the way) which exists solely to line the pockets of the greedy bureaucrats who run the military/industrial complex.\n\nAutomatically reloads after 8 rounds.", "", ".44 Magnum Mega Class A1", "p" },
		{ "KKV-7 SMG Flechette", "...the flechette, with its small cross-section (4mm), longer body and pointed nose experiences far less wind resistance and thus retains more muzzle velocity over a greater distance with a flatter trajectory than its less advanced \"slug-thrower\" counterparts. its armor piercing capabilities rival those of the mighty M1A2 .75 BR and the bio-organic trauma it inflicts is terrifying (being somewhat less effective against mechanical targets).\n\nAutomatically reloads after 32 rounds.", "FSMGA0", "KKV-7 SMG Flechette", "1" },
		{ "Extra .44 Magnum", "(This weapon is obtained along with KKV-7 SMG Flechette)\n\nThe .44 Magnum has already been explained. Just know that you can dual wield two of these bad boys.", "", "CanDualPistols", "1" },
		{ "WSTE-M5 Combat Shotgun", "While going through some data I appropriated from the Marathon (looking for design notes, of course) I stumbled across a reference to a weapon used by Imperialist forces against the inserectionists during the Ares Raid; July 14, 2444. (Never heard of it? I'm not surprised!) Many years of loving craftsmanship went into the design and construction of this brutal tool of mayhem, I hope you can appreciate that. I won't waste my time trying to explain the loading mechanism to you - your primitive mind could never grasp its complex nature.\n\nPicking up another shotgun will allow you to dual wield them.\n Press the Alt Fire key to dual wield shotguns. ", "SHTYA0", "WSTE-M5 Combat Shotgun", "2" },
		{ "Zeus-Class Fusion Pistol", "The S'pht have done their best to create an infinite supply of fusion batteries out of the finite number you were transported on board with. If it were not for their ingenuity and industrious nature you wouldn't be able to run around firing with reckless abandon at everything that moves as you are wont to do. But, like the hundredth copy of a third generation duplication of a substandard bootleg - they're a little fuzzy. One might even say unstable.\n\nHold down the Alt Fire key to charge up a powerful shot.\nAutomatically reloads after 20 rounds.", "FUSPA0", "Fusion Pistol", "3" },
		{ "MA-75B Assault Rifle", "The original M .75 was a ridiculous toy designed to impress aging pompous generals. Gone are the preposterously short barrel and the prodigious recoil that made firing the weapon akin to wrestling a greased pig. Still here is the oxygen hungry ammunition that makes it impossible to fire in vacuum.\n\nPress the Alt Fire key to use the integrated Grenade Launcher.\nPrimary Fire automatically reloads after 52 rounds.\nSecondary Fire automatically reloads after 7 grenades.", "RIFLA0", "MA-75B Assault Rifle", "4" },
		{ "SPNKR-XP SSM Launcher", "A self-important human once said \"... sometimes a cigar is just a cigar.\" This may be so, but in the case of the <<rocket launcher>> you've got one majorly explosive cigar.\n\nWhen you switch to this weapon, you must wait for it to be raised up before you can use it.\nWhen you switch to another weapon, you must wait for this weapon to lower down completely before you can use another weapon.\nAutomatically reloads after 2 rockets.\nCareful, the reload is slow.\n", "RCKLA0", "SPNKR-XP SSM Launcher", "5" },
		{ "TOZT-7 Napalm Unit", "I don't believe it is necessary for me to state the personality disorders evident in an individual who enjoys, or more accurately revels, in spraying their enemies with flaming napalm aerosol.\n\nAutomatically reloads after 210 ammo.", "THRWA0", "TOZT-7 Napalm Unit", "6" },
		{ "ONI-71 Wave Motion Cannon", "A long-rumored weapon of great power…\n\nWhen you switch to this weapon, you must wait for it to be raised up before you can use it.\nWhen you switch to another weapon, you must wait for this weapon to lower down completely before you can use another weapon.\nHold the Primary Fire key to charge up to three levels. Press the Alternate Fire key to fire a mortar.\n\nPrimary Fire automatically reloads after 8 charges.\nSecondary Fire automatically reloads after 3 mortars.\nCareful, the reload for Primary and Secondary Fire are slow.", "WMCPA0", "ONI-71 Wave Motion Cannon", "7" },
		{ "Alien Weapon #1", "System error 0xfded-1. Cannot determine the description for this weapon. Rebooting system. A weapon that shoots fireballs. Primary fire shoots a fireball forward at a fast fire rate. Alternate fire shoots a fireball left and right at a fast fire rate. Because of its alien nature, it has infinite ammunition.", "AWPNA0", "Alien Weapon", "u" },
		{ "Alien Weapon #2", "System error 0xfded-2. Cannot determine the description for this weapon. Rebooting system. A weapon that shoots bullets at a rapid fire-rate. Because of its alien nature, it has infinite ammunition.", "AWPNB0", " Alien Weapon ", "u" }
	},
	{
		{ "Axe", "The last resort. Face it -- going toe-to-toe with the uglies in Quake demonstrates all the good sense of a man parachuting into an alligator farm.", "", "Axe", "f" },
		{ "Single Shotgun", "The basic gun, to which all other guns compare favorably.", "", "Single Shotgun", "p" },
		{ "Mjolnir", "This is THOR's War Hammer. Electrical by nature, when hammered to the floor it sends out a scattered electrical force along the ground. An ear-piercing clap of thunder will sound when the opponent is struck. The electrical current can spread from one opponent to the next.", "UNIQP0", "Mjolnir", "1" },
		{ "Double Shotgun", "A worthy weapon with two minor drawbacks: first, it's slow; second, its shot pattern is very loose at long range. But in general, once you find this puppy, the other shotgun starts rusting from disuse.", "QDBSZ0", "Double Shotgun", "2" },
		{ "Grenade Launcher", "Thumps neat exploding bombs into the air. You can even bounce a grenade off the wall or floor. When a grenade hits someone, it explodes. If it misses, the bomb sits on the floor for a moment, then explodes. Even though I sometimes bounce grenades into myself, this gun's still my favorite.\n\nAlt Mode:\nMulti-Grenades: Explodes into 5 mini clusters after a timed delay. Useful for clearing a group of enemies - don't waste them on a single enemy. ", "QGRLZ0", "Grenade Launcher", "3" },
		{ "Nailgun", "A two-barrel dingus that prickles bad guys with armor-piercing darts, technically termed \"nails\".\n\nAlt Mode:\nLava Nails: Deals about 30% more damage to enemies (especially enemies weak against fire) and ignores armor on players in multiplayer.", "QNLGZ0", "Nailgun", "4" },
		{ "Rocket Launcher", "For when a grenade positively, absolutely, has to be there on time.\n\nAlt Mode:\nMulti-Rockets: 4 smaller rockets, deadly to everything including yourself. Do not try to rocket jump with this!", "QRKLZ0", "  Rocket Launcher  ", "5" },
		{ "Super Nailgun", "The great equalizer. Four cyclic barrels that hose out spikes like crazy. Pro: foes drop like flies. Con: eats ammo like popcorn.\n\nAlt Mode:\nLava Nails: Deals about 30% more damage to enemies (especially enemies weak against fire) and ignores armor on players in multiplayer. ", "QSNGZ0", "Super Nailgun", "6" },
		{ "Thunderbolt", "Try it. You'll like it. Use the same technique as watering your rosebush.\n\nAlt Mode:\nPlasma Cell: Unleashes a ball of plasma that deals heavy damage on impact and unleashes lightning bolts onto nearby enemies.\n\nUsing this weapon underwater will instantly kill you.", "QLTGZ0", "Thunderbolt", "7" },
		{ "Quad Damage", "(This item is obtained along with Thunderbolt)\nMagnum upgrade! You now deliver four times the pain!", "QUDDA0", "QuadDamagePickup", "7" },
		{ "Laser Cannon", "This weapon emits a series of laser blasts that disintegrates anything in its path. The laser canon will have the ability to bounce off an inanimate object at least once; in tight quarters, maybe twice.", "QLSCZ0", "Laser Cannon", "u" }
	},
	{
		{ "Knife", "It's a knife. That's it. You can use it to cut nets or something.", "", "RottKnife", "f" },
		{ "Pistol", "You don't have to collect bullets in this game.", "", "RPistol", "p" },
		{ "Heat Seeker", "Will lock in on any heat source and head towards it. Handy for surgically picking off baddies.", "PHSEA0", "HeatSeeker", "1" },
		{ "Double Pistols", "Two guns at once. Double your pleasure, double your fun! This'll \"Woo\" them to your side.", "PPSTA0", "Double Pistols", "2" },
		{ "Bazooka", "Your basic straight shooting missile-firing weapon. Always a fun way to toast Triad terrorists terminally.", "PBAZA0", "Bazooka", "3" },
		{ "MP40", "Once you have this, low guards are not a problem", "PM40A0", "MP40", "4" },
		{ "Firebomb", "This explodes in a big X of fireblasts, shaking the very ground you walk on. Not for close quarters.", "PFBMA0", " Firebomb ", "5" },
		{ "Drunk Missiles", "Five missiles fly out with no clue of where they are going.", "PDNKA0", "DrunkMissiles", "6" },
		{ "Flame Wall", "As soon as this missile hits the ground, a wall of flame springs to life and burns enemies to cinders.", "PFWLA0", "FlameWall", "7" },
		{ "Split Missile", "Hold down the fire button and two heat-seeking missiles fire. Let go, and they split off at 45 degree angle, plus the missiles both heat seek once split.", "PSPLA0", "Split Missile", "u" },
		{ "Excalibat", "When one of the ancient staff-creating spells called for a length of wood, all the Oscurido minions could find was a baseball bat. Now it's an enchanted baseball bat. You can bat around your enemies, which is pretty cool. But it has a secret power, if you can only unlock it.\n\nPrimary Fire: Hold down the Primary Fire key to fire a spread shot of magical baseballs.\nSecondary Fire: Do a simple melee attack that doesn't use up any ammunition. It can reflect most projectiles.", "PBATA0", "Excalibat", "u" },
		{ "Dark Staff", "This is an incredibly powerful weapon. Little stops it, except thick walls. It destroys virtually everything in its path. A kinetic energy sphere, bristling with wild blue magic, shrieks toward your enemies.", "PKE_A0", "Dark Staff", "u" }
	},
	{
		{ "Auto Charge Pistol", "The ACP does not require a charge pack; you'll have to wait for the unit to recharge. It's a silent attack weapon, so skulk around awhile – firing it won't announce your presence!", "", "Auto Charge Pistol", "p" },
		{ "Ammo Recharge Battery", "Replenishes 25% of the ammo capacity of the current weapon. This is an inventory item.", "BAMRA0", "BlakeRefill", "1" },
		{ "Slow Fire Protector", "This weapon requires a charge pack for use. There is a slight recharge period between shots fired. However, it does allow for more rapid fire than the Auto Charge Pistol.", "BWP2A0", "Slow Fire Protector", "2" },
		{ "Heavy Assault Rifle", "You know, this weapon looks like it should be a Rapid Assault Rifle… Either way, it's similar to the Slow Fire Protector but is a bit more powerful.", "BWP3A0", "Heavy Assault Rifle", "3" },
		{ "Rapid Assault Rifle", "A medium speed repeat-fire unit, the Rapid Assault Rifle requires a charge pack. Like the Slow Fire Protector it cannot recharge itself.", "BWP4A0", "Rapid Assault Rifle", "4" },
		{ "Plasma Discharge Unit", "If you want to dispatch some enemies P.D.Q. - use the P.D.U. (Plasma Discharge Unit). With a wide range of detonation and repeat fire capabilities, this is a powerful weapon. It also requires an energy charge pack for operation. ", "BWP5A0", "Plasma Discharge Unit", "5" },
		{ "Dual Neutron Disruptor", "This high speed repeat-fire unit is fitted with dual, oscillating barrels. It packs a wallop, but requires the stored energy of a charge pack.", "BWP6A0", "Dual Neutron Disruptor", "6" },
		{ "Anti-Plasma Cannon", "If you want to dispatch some enemies P.D.Q. - use the A.P.C. (Anti-Plasma Cannon). This is the weapon of choice when Blake wants to dish out some pain. It also requires an energy charge pack for operation. The Anti-Plasma Cannon can also destroy unlocked doors.", "BWP7A0", "Anti-Plasma Cannon", "7" },
		{ "Xylan Shield", "Okay…so it's hard to pronounce (and it looks more of an orb than a shield) – they're worth 5000 in added score points! (Even though points do not matter in the wheel of Samsara…)\n\nGives you 75% fire damage reduction and 50% damage reduction on all other sources for 6 seconds.", "BORBA0", "BlakeShield", "u" }
	},
	{
		{ "Pitchfork", "This handy tool can be very effective if you can get close enough to your foes to use it on them. It doesn't need ammo, so you'll always have it to fall back on if you need it.", "", "Pitchfork", "f" },
		{ "Revolver", "You can't be a gunslinger if you don't have a revolver at hand.", "", "   Revolver   ", "p" },
		{ "Dynamites", "Light one up and chuck it at a group of zombies and you'll be rewarded with red rain and chunks of rotted flesh on the brim of your hat. The longer you hold down the fire button, the farther you'll throw the bundle. Watch the meter on the status bar to gauge the distance. The primary mode explodes on impact, while the alternative mode will burn all the way down before it explodes, making for some interesting traps.\n\nYou will instantly die if you light the dynamite for too long!", "TBOXA0", "Dynamite", "1" },
		{ "Flare Pistol", "Fires burning projectiles that lodge easily in flesh and continue to burn for a short period of time. Unless you dive into water, you'll take damage until the flare burns itself out, by which time it may be too late. The alternative fire launches a starburst flare that douses a large area with flames. Can provide effective crowd control.", "FGRNA0", "Flaregun", "2" },
		{ "Sawed-Off Shotgun", "A trusty companion if ever there was one. It doesn't have great range, but it packs a hell of a wallop up close. Can be fired either a barrel at a time or both at once for extra damage.", "SOSPA0", "Sawedoff", "3" },
		{ "Tommy Gun", "The Tommy Gun is a favorite of the Cabal for its rapid rate of fire and impressive accuracy. On the down side, it chews up ammo quickly. The alternative mode is a strafing attack that covers a wider area with twice as many bullets, which is an effective way to clear out a room.", "TOMPA0", "Tommygun", "4" },
		{ "Napalm Launcher", "This monstrous weapon launches a huge ball of flaming napalm at an extremely high velocity. If the initial explosion doesn't kill your enemy, the burning probably will. Best used with extreme caution, especially in tight areas. The alt-fire launches several napalm projectiles, covering a wider area but also chewing up a lot more ammo.", "NLAGA0", "NapalmLauncher", "5" },
		{ "Tesla Cannon", "This powerful prototype weapon packs a mighty load of amperage. Nikola Tesla would be proud. Press alt-fire and the Tesla cannon charges up, and releases a powerful electrical blast.", "TSPIA0", "TeslaCannon", "6" },
		{ "Life Leech", "This artifact draws its power from the life energy of your foes. Run low on ammo and it saps your own strength! (Doesn't apply to alt-fire)\n\nThe alt-fire sets the Life Leech upright, letting it act as a sentry gun, but leaving the weapon at place. It can be picked again up by pressing Use key when close to it or moved by shooting with Sawed-off or Tommy Gun. Secondary fire requires at least some ammo to be loaded in life leech.", "LLS_B0", "LifeLeech", "7" },
		{ "Guns Akimbo", "For a limited time, gives you a second weapon for the following weapons:\nRevolver, Flare Gun, Sawed-Off Shotgun, Tommy Gun, Napalm Launcher, and Tesla Cannon.\n\nDoubles the firepower, but uses twice the ammo.", "PSTRB0", "Guns Akimbo", "u" },
		{ "Voodoo Doll", "The power of the voodoo doll is immense, but far subtler than that of a firearm.\n\nRegular Fire: Plunge a needle into the voodoo doll to cause damage to the target (if there is no target, the needle will hit the player's own hand, causing damage)\nAlt-Fire: Wave your hand around the doll, using all of its remaining power at the target (if there is no target, it will do no damage to the player)", "VDLFA0", "VoodooDoll", "u" },
		{ "Aerosol Can", "Hairspray may not seem like the most daunting weapon, but apply it to a cigarette lighter and you've got an instant flamethrower (don't try this at home). While its range is rather limited, its effectiveness is quite impressive. You can also light one up like a Molotov cocktail and toss it into a group of adversaries. Hit alt-fire a second time after igniting a can to drop it at your feet-it will explode once it burns down.\n\nFor the alternate fire: The longer you hold down the fire button, the farther you'll throw the flaming spray can. You will instantly die if you light the spray can (alternate fire) for too long!", "SPFIJ0", "Spraycan", "u" }
	},
	{
		{ "Punch Dagger", "The Order acolytes have been rounding up all suspicious characters in the area. Yes, you happen to be one of them. What they didn't expect, though, is the knife you keep concealed for situations just like this one...\nDoesn't alert the guards, requires no ammo, always available.", "", "Punch Dagger", "f" },
		{ "Pistol", "A primitive weapon, in comparison with the other weapons you will find, but still something you should start with.", "", "   Pistol   ", "p" },
		{ "Teleport Beacon", "Use this (via the inventory) to bring Front soldiers to your aid. Place the teleporter beacon out in the open to be sure they have room to teleport in. Then, when you shoot enemy, they'll go after it. If no soldiers come out, you may have placed it too close to a wall. Try picking it up and placing it again.\n\nUp to 6 Rebel allies can be summoned. They are equipped with either Assault Gun, Flame Thrower, or Mini Missile Launcher.\nThis item has infinite uses but has a 120 second cooldown.", "BEACA0", "StrifeBeaconItem5", "1" },
		{ "Crossbow", "(Press the Alt Fire key to toggle between firing modes.)\n\n(Electric Bolts) Will damage just about anything, but not too badly. Useful when you don't have anything better.\n(Poison Bolts) Silent and deadly, but won't do anything to non-living (robot) targets.", "SXBWA0", "  Crossbow  ", "2" },
		{ "Mini Missile Launcher", "\"Mini\" refers to the size of the missile, you can really mess someone up with this thing. That includes you, if you're standing too close to your target.\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SMRLA0", "Mini Missile Launcher", "3" },
		{ "Assault Gun", "Until your accuracy goes up, you'll be spraying bullets everywhere, but it's still a useful weapon.\nA well-rounded weapon. It's easy to find ammo for this one...\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SRIFA0", "Assault Gun", "4" },
		{ "Grenade Launcher", "(Press the Alt Fire key to toggle between firing modes.)\n\n(High Explosive \"HE\" Grenades) High-explosive means just that… BOOM!\n(White-Phosphorus \"WP\" Grenades) WP is an incendiary device – it will start an inferno that lasts a long time.\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SGRLA0", " Grenade Launcher ", "5" },
		{ "Flame Thrower", "Whoosh!\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SFLMA0", "Flame Thrower", "6" },
		{ "Mauler", "(Press the Alt Fire key to toggle between firing modes.)\n\nThe mauler has two firing modes, scatter and torpedo. Torpedo is much more lethal, and may well damage you.\nShoots rounds of energy in normal mode, and a huge ball of destruction in powerup mode.\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SMAUA0", " Mauler ", "7" },
		{ "Sigil", "It is considered a sentient weapon which is worshipped by The Order, thought to have been created by the Entity and the Spectres as a means to corrupt the people into evil desires.", "SIGPE0", " Sigil ", "7" },
		{ "Stamina & Accuracy Upgrades", "Stamina Upgrades: Increased stamina means you can have more than 100 health points. Very handy. This also increases your melee damage and restores your current HP to 100%.\n\nAccuracy Upgrades: Increased accuracy means your weapon will fire more accurately.\n\nWhen you pick this item, you get both these upgrades at the same time.\nThe maximum upgrades you can get to is 10 upgrades.", "UPGRK0", "Upgrades", "u" }
	}
	{
		{ "Fist", "Your iron-clad knuckles are a little better than nothing.\n\n[Remains unchanged to Doomguy's Fist.]", "", "  Fist  ", "f" },
		{ "Pistol", "The Pistol is the only weapon you start out with. But you'll use anything in a pinch, no matter how pathetic it may feel.\n\n[Remains unchanged to Doomguy's Pistol.]", "", "  Pistol  ", "p" },
		{ "Chainsaw", "The Chainsaw cuts the baddies like standing timber, but you have to get close.\n\n[Does twice more damage than Doomguy's Chainsaw.]", "64SWZ0", "  Chainsaw  ", "1" },
		{ "Shotgun", "Shotguns deliver a heavy punch at close range and a generous pelting from a distance.\n\n[Unlike Doomguy's Shotgun, the screen jerks up and down for a bit when firing.]", "64SGZ0", "   Shotgun   ", "2" },
		{ "Super Shotgun", "Combat Shotguns are double-barreled, sawed-off killing sticks. These gats are the ultimate in pellet warfare. Beware, two barrels not only deliver more fire power, but take more time to reload.\n\n[Unlike Doomguy's Super Shotgun, this super shotgun can knock the player back a bit when fired.]", "64DBZ0", " Super Shotgun ", "3" },
		{ "Chaingun", "Chainguns direct heavy firepower into your opponent, making him do the chaingun cha-cha.\n\n[Unlike Doomguy's Chaingun, the screen will jerk up and down rapidly when fired at a consistent rate.]", "64CGZ0", "   Chaingun   ", "4" },
		{ "Rocket Launcher", "Rocket Launchers deliver an explosive rocket that can turn one bad dude inside-out. Be careful with this one. Firing in close proximity at an object or enemy is bad for your health.\n\n[Unlike Doomguy's Rocket Launcher, this rocket launcher can knock the player back a bit when fired.]", "64MLZ0", "   Rocket Launcher   ", "5" },
		{ "Plasma Rifle", "Plasma Rifles shoot multiple rounds of plasma energy.\n\n[Unlike Doomguy's Plasma Rifle, which has a bit of a delay when releasing the fire trigger, Doom 64 Guy's Plasma Rifle does not have that delay when releasing the fire trigger, although this plasma rifle fires at a slightly slower rate.]", "64PRZ0", " Plasma Rifle ", "6" },
		{ "B.F.G. 9000", "BFG 9000s are the prize of the military's arsenal. Great for clearing the room of those unwelcome guests. There is a downside. It takes a second or two to charge prior to firing, so don't expect to fire right away.\n\n[Remains unchanged to Doomguy's BFG 9000.]", "64BFZ0", " B.F.G. 9000 ", "7" },
		{ "Unmaker", "(This weapon is obtained along with B.F.G. 9000)\nYou have the B.F.G. 9000 in your hands. Now almost every other weapon means nothing to you… wait…\nWhat the !@#%* is this!\n\nThe Unmaker can be upgraded up to three times. Collecting Berserk Packs will upgrade it. To fully upgrade the Unmaker, you need to collect three Berserk Packs.", "64UNZ0", "Unmaker", "7" },
		{ "Berserk", "Berserk Packs heal you, plus act as a super-adrenaline rush, enormously boosting our muscle power. Since you're already a pretty meaty guy, this enhanced strength lets you tear ordinary dolts limb from limb, and you can even splatter those demons without too much trouble. However, you've got to use your Fist attack to get the benefit of the Berserk attack bonus. When you become Berserk, your screen will briefly turn red.\n\n[Remains unchanged to Doomguy's Berserk.]\nBerserk Packs are used to upgrade the Unmaker.", "64BZA0", "Doom64GuyBerserk", "u" }
	},
	{
		{ "Claw", "Eleena uses implanted titanium claws that retract into bone sheaths when she needs to use the fine manipulation of her fingertips.\n\nWeapon-Enhanced: N/A", "", "  Claw  ", "f" },
		{ "Ripper Disc", "Eleena is armed with a version of the Cynetics model XG9101 Multi-cannon. The XG9101 is designed to fire a myriad of projectiles of almost any shape or size. It is equipped with a neural-circuitry that learns how to best use many ammo types it is exposed to; and, it can be upgraded to increase its firing potential and lethality.\nThe starting function is the Ripper Disc, which shoots small discs at a medium fire rate.\n\nWeapon-Enhanced: Press the Alt Fire key to shoot multiple shots per round in a pattern.", "", "  Ripper Disc  ", "p" },
		{ "Arachnicator", "Eleena can utilize a spider-like robot that she plants on the ground and it will run forward. When it collides with something, it will explode.\n\nWeapon-Enhanced: N/A", "SPPUB0", " Arachnicator ", "1" },
		{ "Sonic Shock", "This ammo type for the XG9101 shoots a spread shot of lightning.\n\nWeapon-Enhanced: Press the Alt Fire key to fire the weapon but at a faster fire rate.", "SSPUA0", "  Sonic Shock  ", "2" },
		{ "Pellet Bomb", "This ammo type for the XG9101 shoots out a small bunch of pellets that will explode on contact.\n\nWeapon-Enhanced: Press the Alt Fire key to fire multiple pellets at a fast fire rate.", "EPE2A0", "Pellet Bomb", "3" },
		{ "Dart Cannon", "This ammo type for the XG9101 shoots out darts at a fully automatic rate.\n\nWeapon-Enhanced: Press the Alt Fire key to fire darts at a faster fire rate in a straight pattern.", "DZ8PA0", "  Dart Cannon  ", "4" },
		{ "Missile Launcher", "This ammo type for the XG9101 shoots out mini missiles. Be careful not to blow yourself up with this.\n\nWeapon-Enhanced: Press the Alt Fire key to fire a missile that travels a bit slower but deals more damage.", "EMPUA0", "    Missile Launcher    ", "5" },
		{ "Napalm Charge", "This ammo type for the XG9101 lobs out a sphere. When the sphere hits something, it scatters some green fire that can damage enemies, and yourself if you are not careful.\n\nWeapon-Enhanced: Press the Alt Fire key to fire a sphere that acts the same way but will drop some fire to the ground while it is flying in its trajectory.", "ENC6C0", "Napalm Charge", "6" },
		{ "Death Sphere", "This powerful ammo type for the XG9101 will shoot out a smart bomb that will lock on to enemies after a few seconds of its initial launch. If it hits a surface, it will ricochet from it. If it flies around for too long, it will explode by itself.\n\nWeapon-Enhanced: N/A", "EPL9T0", " Plasma Ball ", "7" },
		{ "Weapon Enhancement Chip", "Aside from the various ammo types available, a temporary microchip upgrade can be located within most levels to make many of these projectiles more powerful.\n\nTemporarily upgrades the capabilities of some weapons.\nThe following weapons can be temporarily upgraded:\nRipper Disc, Sonic Shock, Pellet Bomb, Dart Cannon, Missile Launcher, Napalm Charge.", "D7X_G0", " Eradicator Enhancement Chip ", "u" }
	},
};

str MonsterInfo[CLASSCOUNT][64][20] =
{
	{
		{ "Zombieman", "Just a few days ago, you were probably swapping war stories with one of these guys. Now it's time to swap some lead upside their head.", "Zombieman2", "POSSA1" },
		{ "Shotgun Guy", "Same as the Former Humans, but much meaner, and tougher. These walking shotguns provide you with a few extra holes if you're not careful!", "Shotgunguy2","SPOSA1" },
		{ "Imp", "You thought an imp was a cute little dude in a red suit with a pitchfork? Where did these brown bastards come from? They heave balls o' fire down your throat and take several bullets to die. It's time to find a weapon better than that pistol if you're going to face more than one of these S.O.B.s.", "DoomImp2", "TROOA1" },
		{ "Chaingun Guy", "Geeze, weren't shotgun zombies bad enough? At least when you face these jerks you get a cool chaingun.", "Chaingunguy2", "CPOSA1" },
		{ "Demon", "Sorta like a shaved gorilla, except with horns, a big head, lots of teeth, and harder to kill. Don't get too close or they'll rip your fraggin' head off.", "DoomDemon2", "SARGA1" },
		{ "Spectre", "Great. Just what you needed. An invisible (nearly) monster.", "Spectre3", "SARGA1" },
		{ "Lost Soul", "Dumb. Tough. Flies. On fire. 'Nuff said.", "LostSoul2", "SKULA1" },
		{ "Cacodemon", "They float in the air, belch ball-lightning, and boast one Hell of a big mouth. You're toast if you get too close to these monstrosities.", "Cacodemon2", "HEADA1" },
		{ "Hell Knight", "Tough as a dump truck and nearly as big, these Goliaths are the worst things on two legs since Tyrannosaurus rex.", "HellKnight2", "BOS2A1C1" },
		{ "Baron of Hell", "The Hell Knight was bad news but this is Big Daddy. These bruisers are a lot like Hell Knights, but look a little different and are twice as tough to kill.", "BaronofHell2", "BOSSA1" },
		{ "Arachnotron", "Maybe cybernetics wasn't such a great idea after all. Look what the demons have done with it. It seems unfair somehow you're not the only guy in Hell with a plasma gun.", "Arachnotron2", "BSPIA1D1" },
		{ "Pain Elemental", "What a name. And what a guy. Killing him is almost as bad as letting him live.", "PainElemental2", "PAINA1" },
		{ "Revenant", "Apparently when a demon dies, they pick him up, dust him off, wire him some combat gear, and send him back into battle. No rest for the wicked, eh? You wish your missiles did what his can do.", "Revenant2", "SKELA1D1" },
		{ "Mancubus", "The only good thing about fatso is that he's a nice wide target. Good thing, because it takes a lot of hits to puncture him. He pumps out fireballs like there was no tomorrow.", "Fatso2", "FATTA1" },
		{ "Arch-Vile", "One of the worst of a bad lot. You can't think of enough rotten things to say about him. He's fast, hard to kill, casts spells, and resurrects dead monsters! At least these suckers are rare.", "Archvile2", "VILEA1D1" },
		{ "Spider Mastermind", "You guess the Arachnotrons had to come from somewhere. Hi, Mom. She doesn't have a plasma gun, so thank heaven for small favors. Instead, she has a super-chaingun. Crap.", "SpiderMastermind2", "CMPMDM16" },
		{ "Cyberdemon", "A missile-launching skyscraper with goat legs. 'Nuff said.", "Cyberdemon2", "CYBRA1" },
		{ "Wolfenstein SS", "After killing all the demons at an industrial zone from Earth, you discover a teleporter found at the end of a secret tunnel. You wonder who the inmates of this corner of Hell will be...", "Nazi2", "SSWVA1" },
	},
	{
		{ "Flemoidus Commonus", "This is the weakest and most common Flemoid variety there is. It is very slow, but you should still be cautious. It attacks by throwing slime from its nose, but cannot throw it very far.", "FlemoidusCommonus3", "POSCA1" },
		{ "Flemoidus Bipedicus", "This one is much faster and stronger than the commonus, and is the one of only two varieties of Flemoids to walk on two legs. It throws slime from its two arms, as well as its nose, resulting in a much more powerful blast than the commonus.", "FlemoidusBipedicus3", "SPOCA1" },
		{ "Armored Flemoidus Bipedicus", "This is a stronger variation of the Bipedicus. When you see him you know he earned his armor! He's fairly rare, but still not too uncommon. His means of attack is an unusual one. In addition to throwing slime a short distance from his nose and arms, as the regular ones do, it throws a ball of slime that can travel long distances. Use caution.", "NewArmoredFlemoidusBipedicus", "TROCA1" },
		{ "Flemoidus Stridicus", "The Flemoidus Stridicus is the fastest flemoid EVER! Named after its legs and long strides, it needs to bend down to strike you. Zorch it before it does!", "NewFlemoidusStridicus", "SARCA1" },
		{ "Flemoidus Cycloptis Commonus", "This creepy thing is well... creepy! It floats and is scary. He is very fast, strong, and he wastes rounds of zorch! He has no solid form, so he's held together by a metal suit. Its means of attack is close range only, but do not let it get close enough to attack you, as it has a very strong attack.", "NewFlemoidusCycloptisCommonus", "CYCLA1" },
		{ "Flemoidus Larva", "Aww, its a baby Flemoid! Wait... eww, it's ugly! Yes, this demonic looking green worm is very creepy. It's as fast and strong as the Cycloptis, only it doesn't float! It's attacks are close range, but he's still creepy far away! ", "NewLarva", "LRVAA1" },
		{ "Flem Mine", "This remote controlled slime ball flies around, trying to jet itself towards you with its slime that propels itself off the nearest wall. ", "FlemMine2", "SKUCA1" },
		{ "Flemoidus Gyro", "Silly. Tough. Flies. Has a propeller. 'Nuff said.", "NewFlemoidusGyro", "GYROA1" },
		{ "Super Cycloptis", "They float in the air, belch green slimey stuff, and strangely reminds me of some other one eyed floating creature. You're toast if you get too close to these monstrosities. Did you know Flemoidus Cycloptis Ultricus is its Latin name?", "SuperCycloptis2", "SCYCA1" },
		{ "Flemoidus Quadrumpus", "This hunk of muscle is cartoony, but don't be like 'Awww he's so cute!' he is still a very strong guy, and packs a punch. His means of attack is very similar to that of the Bipedicus with armor, but instead of two arms, it has four! ", "NewQuadrumpus", "QUADA1" },
		{ "Flembrane", "(Appears exclusively in Chex Quest) Right when you thought it was safe to venture into the depths of the caverns of Bazoik... this guy shows up! And he's not too happy of the job you've done with his place! You better be packing heat if you're thinking about fighting him!", "NewFlembrane", "CMPMCX11" },
		{ "Flemoidus Maximus", "This big nosed Flemmie is what keeps you up at night! He planned the attack on Chex City, and is one of the strongest Flemoids ever, tied with the Flembrane! He's slow but strong, and shoots slime balls bigger then your head! He comes in two flavors: One where he’s a big guy with a lot of health. The other has less health but is much bigger!", "NewFlemoidusMaximusArch", "CMPMCX12" },
		{ "Mega Flemoidus Maximus", "The Flemoidus Maximus was bad news but this is Big Daddy. These bruisers are a lot like Hell Knights, but look a little bigger and are twice as tough to kill.", "NewFlemoidusMaximus", "CMPMCX13" },
		{ "The Flembomination", "One of the most fearsome of the Flemoids. It shoots plenty of Super Cycloptis slime balls at you. The Flembomination comes in two flavors: One type will shoot slow but powerful slime balls at you. Another type will shoot fast and powerful slime balls around its entire body!", "Flembomination2", "CMPMCX14" },
		{ "Lord Snotfolus", "Lord Snotfolus is indeed the lord of all flemoids, commanding from his Flem Meteorship. He was willing to give it up to send slime all over Ralston, but not ready for an eager Chex Warrior to send him back. When you encounter him, he will come in either two flavors: One where he shoots a couple of powerful slime balls at a time. The other is the same thing but not only does he shoot the slime balls faster but he can spawn spores that turns into Flemoids at his service!", "OldSnotfolus", "CMPMCX15" },
		{ "Yellow Armored Flemoidus Bipedicus", "There have been reports that the Armored Flemoidus Bipedicus are starting to change...", "YellowArmoredFlemoid", "TROCA1" },
		{ "Dark Armored Flemoidus Bipedicus", "There have been reports that the Armored Flemoidus Bipedicus are starting to change...", "DarkArmoredFlemoid", "TROCA1" },
	},
	{
		{ "Gargoyle", "Half-demon and half-bat. these wicked red beasts are the Order's guard dogs of the sky.", "HereticImp3", "IMPXA1" },
		{ "Fire Gargoyle", "As if flying demons wern't enough, Fire Gargoyles toss balls of fire down on their unsuspecting enemy. These demons have twice as much health as the original Gargoyles.", "HereticImpLeader3", "IMPXD1" },
		{ "Golem", "These big bad walking rocks smack you hard and make you cry.", "Mummy3", "MUMMA1" },
		{ "Nitrogolem", "Enchanted by the powers of evil, the Nitrogolems cast blazing skulls at their foe. These demons have a bit more health than the original Golems.", "MummyLeader3", "MUMMX1" },
		{ "Undead Warrior", "As part of the Order's insidious plot to control your world, they've recruited the dead, gave them armor and armed them with deadly magic axes. Now they guard the evil cities and toss their infinite supply of axes at any elf who passes by.", "Knight3", "KNIGA1" },
		{ "Sabreclaw", "These hideous abominations of the dark world move bloody fast and possess deadly sharp blades for appendages. They can't fly and they can't shoot, but in close combat they'll tear you to ribbons.", "Clink3", "CLNKA1" },
		{ "Disciple of D'Sparil", "The pupils of D'Sparil's dark magic, these wizards have mastered flight and blink out of the shadow world long enough to cast a crushing wave of magic missiles toward their enemy.", "Wizard3", "WZRDA1" },
		{ "Ophidian", "The Ophidians slither in the darkest chambers of the Dome of D'sparil and protect their lairs with deadly, energy tossing tridents.", "Snake3", "SNKEA1" },
		{ "Weredragon", "The Weredragons infest the darkest lairs of the Order. Possessing all of the strength and agility of a tank, these lumbering creatures belch a body-blasting fireball.", "Beast3", "BEASA1" },
		{ "Iron Lich", "What is the Iron Lich? It is just an ordinary monster... that can shoot powerful balls of fire, can summon a pesky tornado, and can launch a deadly ice attack. Word of advice: kill this ordinary monster IMMEDIATELY.", "IronLich3", "LICHA1" },
		{ "Maulotaur", "Maulotaurs greatly resemble the mythological Minotaur, except that they wield giant hammers (or mauls), which they use to smash their enemies into a pulp.", "Minotaur3", "MNTRA1" },
		{ "D'Sparil & His Chaos Serpent", "He is the first and the youngest of the trio of Serpent Riders, using cunning and deception to initially gain dominance of Parthoris, the world of Heretic. He declared the supernatural race of the Sidhe to be forever hunted as heretics to their new Order. When you first encounter him, he will be riding a Green Chaos Serpent. Once his mount has been defeated, D'Sparil fights his enemy using his own powers.", "Sorcerer5", "CMPMHE12", "Sorcerer6", "SOR2M1" },
	},
	{
		{ "Nazi Guard", "The bullies in brown (or green) go down easy, but there's a lot of 'em.", "WolfGuard", "WGRDA1", "SODGuard", "SGRDA1" },
		{ "Nazi Officer", "These quick, smart soldiers wear white and see red.", "WolfOfficer", "WOFFA1", "SODOfficer", "SOFFA1" },
		{ "Nazi Schutzstaffel", "Members of the Schutzstaffel, they wear blue (or black) uniforms, bulletproof vests, and sadistic grins.", "WolfSS", "WSCHA1", "SODSS", "SSSOA1" },
		{ "Dog", "These German shepherds (or blue doggies) go right for your throat. ", "WolfDog", "WDOGA1", "SODDog", "SDOGA1" },
		{ "Spectre", "The Ghosts accompany the Angel of Death in order to test the hero's strength and find out if they're \"worthy\" of wielding the Spear of Destiny. There have been reports of other types of spectres. Ghoulish Ghosts, who are still loyal to Hitler and wear Nazi helmets. Radioactive Mist, clouds of some sort of radioactive material left over from earlier battles, resulting in a greenish-smoke appearance. These types seem to matter only in appearance, thankfully.", "WolfSpectre", "WSPEA0", "SODSpectre", "SSPEA0", "SODSpectre2", "SSPEI0" },
		{ "Fake Hitler", "Fake Hitlers (Falscher Hitler) are dummies fashioned to look like Adolf Hitler. These robe wearing puppets, along with regular Nazi personnel, protect Hitler himself. ", "FakeHitler", "WFAHA0" },
		{ "Mutant", "Hideous human experiments of the evil Dr. Schabbs, these three-armed beasties are killing machines.", "WolfMutant", "WMUTA1" },
		{ "Bat", "Bats are very large, mutant bats that are the brainchild of Dr. Quarkblitz. The bats are very big and smart (suggesting that they are genetically modified or specially bred to be so). Sometimes the Nazis use them to replace the Mutants.", "SODBat", "SBATB1" },
		{ "Hans Grosse", "He is large, and while not very smart, is still a powerful Nazi enforcer. He is a member of the Grosse family which comprises his brothers Trans, Mans, Pans, Fans, and sister Gretel; they all seem to share an affinity for heavy body armor and dual chain guns.", "HansGrosse", "WHANA0" },
		{ "Gretel Grosse", "She is the youngest member of the Grosse family, having a brother, Hans Grosse and another relative, Trans Grosse. Her Chain Guns are the most distinct, as the rolling is not exposed. They aren't as deadly as Otto Giftmacher and General Fettgesicht's weaponry, but she can do major damage if you are not careful.", "GretelGrosse", "WGRTA0" },
		{ "Trans Grosse", "Another brother in the prolific Grosse family, Trans (said TRAHNZ) is so tough he chews up lead bars and spits out bullets.", "TransGrosse", "WTRAA0" },
		{ "Doctor Schabbs", "He is nuts and prefers killing to all other activities. Watch out for flying syringes or you'll be a mutant too!", "DoctorSchabbs", "WSCBA0" },
		{ "Otto Giftmacher", "The amoral scientist responsible for designing chemical weapons. Beware his rumored \"Super Otto\" alter-ego, where he can shoot three rockets in a spread shot fashion…", "OttoGiftmacher", "WOTTA0" },
		{ "General Fettgesicht", "The organizer of the chemical war.", "GeneralFettgesicht", "WFETA0" },
		{ "Submarine Willy", "The commander of a submarine, Willy is known and feared for his various mental problems and rage outbursts. Even a lobotomy didn't improve his temper. Equipped with a chain gun and a machine gun, Willy is definitely prepared for battle.", "SubmarineWilly", "SUBWA0" },
		{ "Barnacle Wilhelm", "This salty dog barks a missile launcher / chaingun welcome from his weathered fists! Don’t rub his fur the wrong way!", "BarnacleWilhelm", "WBARA0" },
		{ "Professor Quarkblitz", "Killing him will stop the further usage of specially bred bat units and ensure that his Robot doesn't go past the prototype stage. However, he is armed with a rocket launcher and a Chain Gun, so don't expect him to go down easily.", "ProfessorQuarkblitz", "PROQA0" },
		{ "UberMutant", "The horrific jewel in maniacal Dr. Schabbs’ sadistic crown, the UberMutant is the perfect soldier with four cleaver-tipped arms and a chaingun in its chest!", "Ubermutant", "WUBRA0" },
		{ "The Axe", "Major Hans \"The Axe\" von Schlieffen (often referred to as simply The Axe) is the one that stole the Spear from America and brought it back to Germany. He is the best of the best of Hitler's elite forces. His extreme speed and dual Chain Guns make him the most dangerous foe that you will encounter. He wears armor similar to that used by the Grosse family and the Death Knight, completed with a skull-like mask.", "TheAxe", "TAXEA0" },
		{ "Death Knight", "You may be playing on Death Incarnate, but with two chainguns and two missile launchers, this guy is Death Incarnate.", "WDeathKnight", "WDKNA0" },
		{ "Robot", "It is the guardian of said Spear and is a prototype weapon designed by Dr. Quarkblitz. Armed with two Chain Guns and rocket launchers, the Robot is easily a force to be reckoned.", "Robot", "ROBOA0" },
		{ "Adolf Hitler", "The essence of evil, he's got a few surprises for you. ", "MechaHitler", "WMAHA0", "Hitler", "WADOA0" },
		{ "Angel of Death", "After grabbing the Spear, B.J. Blazkowicz is teleported to Hell, where he must defeat the demonic Angel in order to prove that he is worthy enough to wield the Spear. The Angel's only method of attack is firing powerful orbs at a target.", "AngelOfDeath", "WADHA0" },
		{ "Devil Incarnate", "He is a demonic creature from Hell summoned by Hitler's unholy ritual. Using the Spear of Destiny, Hitler took control over the monster and commanded him to aid the Third Reich. Like the Angel of Death, you'll meet him after grabbing the Spear. His only attack is to fire orbs at you, but the orbs are very powerful.", "DevilIncarnate", "DEINA0" },
		{ "Mage", "You have already encountered some twisted stuff like ghosts, mutants, Hitler clones, and hellish creatures under the command of Mein Fuhrer. A mage should not sound too outlandish at this point...", "Mage", "C3DMA0" },
	},
	{
		{ "Ettin", "These horrid creatures are all that remains of the once proud Legionnaires. Less than human, they retain just enough of their memory to hate what they have become, and to hate you even more for what you still are. Fortunately for you, though, they are not particularly skillful foes.", "Ettin3", "ETTNA1" },
		{ "Afrit", "These larger, nastier cousins of the gargoyles found in Heretic are more than happy to douse you in flames. The only nice thing about them is the satisfying splat they make when you shoot 'em from the sky.", "FireDemon3", "FDMNA1" },
		{ "Dark Bishop", "Many of the more powerful leaders within the Church have been warped into mindless servants of the Serpent Riders, and their magical powers have been multiplied tenfold. These vile creatures are known as Dark Bishops, and though they are frail of limb, they are extremely powerful. They fire circling projectiles of magical jade that track your position, and the Bishop phases in and out of existence as they travel from place to place. A dangerous opponent by itself, a nightmare when encountered in groups. ", "Bishop3", "BISHA1" },
		{ "Centaur", "Named after a mythical being, these monsters bear none of the pleasant traits attributed to them in legends: vicious, brutal and extremely hard to kill. Centaurs serve in the front ranks of many of the Serpent Riders' armies. They are capable of deflecting missiles with their shields, so use caution when attacking them. ", "Centaur3", "CENTA1" },
		{ "Reiver", "Although they retain only half of their bodies, these Undead creatures have lost none of their powers. They fly through the air with hypnotic grace, but don't just sit there and watch or they'll pelt you with devastating fireballs. Sometimes the reiver will first appear buried in the ground. Use caution if you accidently bump into it!", "Wraith3", "WRTHA1" },
		{ "Chaos Serpent", "D'Sparil once had a Chaos Serpent for a mount. On this world the Serpents run loose, uncontrolled by any higher intelligence. One breed of Chaos Serpent will scorch you with fiery blasts (Green Chaos Serpent), while a second variant of this creature belches poisonous gas (Brown Chaos Serpent).", "Demon1C", "DEMNA1", "Demon2C", "DEM2A1" },
		{ "Slaughtar", "These Centaur leaders are much like their minions, but they're considerably tougher and they can spew magical fire from their shields. So we won't say anything about their apt name. Your safest strategy is to attack them from afar as they tend to do the same.", "CentaurLeader3", "CENTE1" },
		{ "Wendigo", "This fierce tundra beast fires shards of damaging ice, turning all who fall prey to its icy grip into frozen statues.", "IceGuy3", "ICEYA1" },
		{ "Stalker", "Stalkers are aquatic reptiles with huge talons designed to rend their prey into bite-sized morsels. They can't leave the water, so once you're on dry land you might feel safe. But beware, some stalkers can fire slime projectiles.", "Serpent3", "SSPTJ1" },
		{ "Death Wyvern", "Like the Reivers, these creatures are Undead, and their thirst for the blood of living creatures is surpassed only by their hatred of anything but themselves. The Death Wyvern is a formidable opponent, and should be dispatched immediately - if not sooner.", "Dragon3", "DRAGA1" },
		{ "Zedek", "Once the leader of the Legion, Zedek is now little more than a pawn in the hands of the Serpent Riders. Still, he retains all his old martial skills, and defeating him will be one of your greatest challenges.", "FighterBoss3", "PLAFA1" },
		{ "Traductus", "From lowly monk to Grand Patriarch in 30 short years, Traductus' destiny seemed to be eternal greatness. But somewhere along the way he lost direction, and now he blocks your path to fulfilling your own shadowed fate.", "ClericBoss3", "CLBSA1" },
		{ "Menelkir", "The greatest Mage to occupy the Crystal Dais in centuries, it seems unlikely that Menelkir can be destroyed by any conventional force. Fighting him will be one of the greatest challenges of your life.", "MageBoss3", "MAGEA1" },
		{ "Heresiarch", "As far beyond the Bishops as the Bishops are above common men, these blasphemous beings control forces capable of sending mere mortals screaming in terror. The Heresiarch knows several spells, including a strong reflective spell, two types of magical attack, and a summoning spell that gates in Dark Bishops to aid the Heresiarch. Only a superb warrior can defeat a Heresiarch without sustaining serious injury.", "Heresiarch3", "SORCA1" },
		{ "Korax", "You have seen inhuman shapes before this, but surely even hell would never spawn such a being as Korax; his very presence fills you with horror, and you cannot begin to imagine what powers are contained within his twisted frame.", "Korax3", "CMPMH115" },
	},
	{
		{ "Assault Trooper", "The green suited Assault Trooper is the basic alien ground assault trooper sent by the ruthless alien leaders to serve as the first offensive wave against Earth's defenses. They attack using a laser pistol, and can attack from the air by using jetpacks. When these characters are killed, they will sometimes drop pistol ammunition that you can take and use.", "AssaultTrooper", "ASTRA1" },
		{ "Assault Captain", "The red suited Assault Captains have a wristmounted Phase induced Teleporter Device (PITD) capable of physically translocating its user to any destination within the device's range. Used as a tactical assault instrument, the PITD enables the Assault Captain to launch surprise attacks against his intended human targets at will. They will also sometimes drop pistol ammunition that you can take and use.", "AssaultCaptain", "ASCAA1" },
		{ "Assault General", "If you thought the Trooper and Captain were bad, meet the general.", "AssaultGeneral", "ASGEA1" },
		{ "Pig Cop", "The Pig Cops come from mutated Earth police forces and are positioned to suppress residual human opposition and to police the new alien power on Earth. These characters exhibit an extremely high intolerance to the presence of humans, and are filled with rage when they detect human scent. When killed, this character may drop either their shotgun or body armor.", "PigCop", "PIGCA1" },
		{ "Magnum P.I.G.", "It seems that Pig Cops do like discos or disco music, because they can be found in bars/discos. This enemy may be a nod to this fact: they are a reggae- or disco-styled Pig Cop. He has a different hairstyle, small and round sunglasses, clothing with orange and white spots. He still has a Shotgun and a police vest, though. They have short, torn pants and socks with sandals instead of boots.", "MagnumPig", "MPIGA1" },
		{ "Zombie Pig Cop", "Braaaaaaaaaaaiiiiiiiiiiiinsss…", "ZombiePigCop", "PIGZA1" },
		{ "Pig-in-a-Dress", "She is a female version of the Pig Cop wearing a pink maid uniform with L.A.R.D. emblazoned on the chest in stylized red letters.", "PiginaDress", "PIGDA1" },
		{ "Assault Enforcer", "With ripper blazing, the armored Enforcer can make fast business of dispatching any remaining human opposition. Powerful hind legs enable the Enforcer to leap to many places where an unsuspecting Duke may be caught off guard... so beware. The Enforcer may drop either ripper ammo or his armored breastplate when killed.", "AssaultEnforcer", "ASENA1" },
		{ "Protector Drone", "These new aliens are evil in every sense of the word, taking nearly twice the damage of a Pig Cop. so don't expect a single rocket to do the trick. On top of that, they move very fast, jump high, can claw you at close range, and have a nasty ability to emit shrink rays. Their main purpose is to protect their newborn alien Queen, so be very afraid when you see one. Rumor has it that the Alien Queen gave birth to other types of Drones, such as blue ones with double the health, drones who are partially invisible, and drones who can turn themselves completely invisible at their command.", "ProtectorDrone", "PRDRA1" },
		{ "Protozoid", "It emerges from its egg pod with a simple nervous system and only one mission in life - to suck your brains out through your nose and leave you a lifeless heap on the floor. The Protozoid Slimer is evasive as it stretches its elastic body from ceiling to floor, and then creeps up your pant leg for the coup de gras. Get them before they get you.", "Duke3D_Protozoid", "DK67B0" },
		{ "Sentry Drone", "Mechanized death - there's no better way to describe these airborne alien watchdogs. By the time you hear their high pitched whine as they engage their anti-grav propulsion units, it's probably too late. The Drone will swiftly collide with its target and explode with great force.", "SentryDrone", "SEDRA1" },
		{ "Octabrain", "This character's abundant brain mass and specialized trifocal vision combine to make the Octabrain a formidable alien weapon against all sentient life on Earth. Their method of attack is a powerful blast of mental energy released against its prey, thus weakening and confusing its intended victim. If the victim doesn't die from the mind blast, the Octabrain's powerful razor sharp teeth are ready to finish the job.", "Octabrain", "OCTAA1" },
		{ "Shark Drone", "Kind of like the Sentry Drone except they are found only underwater. Oh wait, the aliens found out how to make them work outside the water. Great.", "SharkDrone", "SEDSA1" },
		{ "Assault Commander", "The free-floating Assault Commander knows how to throw his weight around as he engages his anti-grav spin-deck in your face. When at greater distances, he fires deadly rockets from his rear port which dangles below his anti-grav spin-deck. The Assault Commander may drop a supply of rockets when killed.", "AssaultCommander", "ASCOA1" },
		{ "Mini Battlelord", "The Battlelord Sentry is one of the most powerful, and dangerous non-boss enemies Duke has encountered. It has masses of health and an arsenal as large as its counterpart. However, it is smaller than the Battlelord, and so is unable to step on foes with its feet when they venture too close, but getting up close to it will cause it to fire its chaingun to cause significant damage as Duke is in range of the Battlelord Sentry.", "MiniBattlelord", "BTLOA1" },
		{ "Pig Cop Tank", "These heavily armored riot tanks can take a lot of damage before they finally explode. And when they do, expect to find an angered Pig Cop behind a shotgun, aiming right at your face. Sometimes you will meet another pig cop tank that’s a bit bigger than the normal tank, so be careful! (Psst, that button at the back of the tank? That’s a self-destruct button.)", "PigCopTank", "PIGTA1" },
		{ "Recon Patrol Vehicle", "This sleek and deadly anti-gravity powered reconnaissance vehicle is operated by specially trained Pig Cops for the purpose of maintaining alien control in areas of human resistance. The attack mode of this craft is aerial strafing by side mounted laser cannons. The pilots of these craft are protected by an automatic pilot ejection mechanism that activates milliseconds before impact during a crash.", "ReconPatrolVehicle", "PIGAA1" },
		{ "Scorpion Tank", "Another type of the Pig Cop Tank. It is called the Scorpion Tank because the tank looks like a scorpion. Shocking, right?", "ScorpionTank", "PIGSA1" },
		{ "Battlelord", "The Battlelord wields a chaingun (prosthetic minigun design) with a built-in mortar launcher. Its chaingun is also significantly more powerful than the Enforcer's. The hulking Battlelord commands the first wave of the alien invasion force on Earth. Its deafening roar splits the air as its rapid fire chaingun and mortar rounds tear resistance asunder. It has no known weaknesses; only relentless firepower and staying on the move will win the day.", "Battlelord", "CMPMDN19" },
		{ "Overlord", "An alien leader resembling a gigantic brown dinosaur or frog, the Overlord is provided with giant fangs and claws, big golden eyes of pure wrath, twin rocket launchers mounted on both shoulders and four long amphibian-like legs that allow it to crawl and maneuver around with relative ease and fastness despite its huge size.", "Overlord", "CMPMDN20" },
		{ "Cycloid Emperor", "The Cycloid Emperor is taller than the Battlelord and Overlord and can be recognized by its single-eyed \"face\" and huge tripod claw arms. Unlike the Battlelord, the Cycloid Emperor doesn't have a real physical weapon; it uses its claw arms as a barrel for firing missiles.", "CycloidEmperor", "CMPMDN21" },
		{ "Alien Queen", "Although not directly stated, it is implied that the Alien Queen is the alien-human hybrid that was born at the beginning of The Birth. Her exact status and role in the overall alien hierarchy is not entirely known, but obviously, she is one of the leaders of the alien invaders and is the main source of Protector Drones.", "AlienQueen", "CMPMDN22" },
		{ "Cyber Keef", "The CyberKeef is a gigantic, humanoid robot that bears a minor resemblance to Duke. The CyberKeef was created by the aliens to kill Duke and blow up the city along with him.", "CyberKeef", "CMPMDN23" },
	},
	{
		{ "Simulacrum", "A simulacrum is a representation of something or someone. Durandal uses the word to describe the bio-android bombs manufactured by the Pfhor in the image of BOBs. They were designed and created by the Pfhor's Ministry for the Eradication Through Imitation of Hostile Species Unsuitable for Enslavement, or Phan Pfhar Sfaern-Wsawn Tshah in their native Pfhoric.", "MSimulacrum", "MSIMA1", "M2Simulacrum", "M_8HL1" },
		{ "Pfhor Fighter Minor [Melee]", "The Pfhor (pronounced \"FOUR\") are an extraterrestrial space-faring race of slavers that attacked the UESC Marathon in 2794. The Fighter is most common enemy players will encounter in any of the Marathon games. Pfhor Fighters are basic enemies that come in a variety of colors denoting difficulty level. The weakest of the fighters is the minor fighter, it wears green armor and can only use its shock staff as a melee weapon.", "M1FighterMinor", "M_H2M1", "FighterMinor", "FIMIA1" },
		{ "Pfhor Fighter Minor [Projectile]", "Next in rank is the minor projectile fighter. These ones wear orange armor, are tougher to beat, and can shoot ranged projectiles from their staff.", "M1ProjectileFighterMinor", "M_H6M1", "ProjectileFighterMinor", "PFMIA1" },
		{ "Pfhor Fighter Major [Melee]", "Tougher still is the major fighter, it is stronger than the previous two but can only use its staff as a melee weapon, these ones sport purple armor.", "M1FighterMajor", "M_H3M1", "FighterMajor", "FIMAA1" },
		{ "Pfhor Fighter Major [Projectile]", "The next hardest is the major projectile fighter. Sporting blue armor, and being able to shoot ranged projectiles out of its staff make this fighter the toughest you shall encounter.", "M1ProjectileFighterMajor", "M_H0M1", "ProjectileFighterMajor", "PFMAA1" },
		{ "Pfhor Super Fighter", "Additionally, there is a super fighter that is nearly twice the size of all the others and wears black armor. The super fighters are fearsome adversaries.", "PfhorSuperFighter", "M_VHE1" },
		{ "Pfhor Trooper Minor", "Troopers are Pfhor in vacuum suits suitable for activities in space or any other vacuum enviroment. Instead of the shock staff employed by the Fighters, Troopers carry a large grey gun that functions in a similar way to the assault rifle, as it fires a hail of machine gun-like bullets, and has an integrated grenade launcher. Pfhor Troopers are one rank above the fighters.", "M1TrooperMinor", "M_HXE1", "TrooperMinor", "TRMIA1" },
		{ "Pfhor Trooper Major", "The major troopers are stronger than the minors, wear purple armor, and are considerably more liberal with employing their grenade launchers.", "M1TrooperMajor", "M_HXO1", "TrooperMajor", "TRMAA1" },
		{ "Pfhor Super Trooper", "If you thought the major troopers were a problem, you have not met the super trooper yet.", "M2SuperTrooper", "M_HVE1" },
		{ "F'lickta", "The F'lickta (sometimes colloquially referred to as \"Yetis\") are native creatures of Lh'owon, living in sewers, water pools, and lava. They often harass Pfhor forces, and are extremely irritable. F'lickta attack using a favored claw, but are fully capable of biting with their teeth. Entering their home turf unarmed is not recommended.", "SewageFlickta", "FLIKA1", "WaterFlickta", "WFLIA1", "LavaFlickta", "LFLIA1" },
		{ "Looker", "Lookers are large, floating beetle-like creatures who run at the player or the BOBs and explode violently, dealing a considerable amount of damage. There are two types of Lookers, one of them is tougher than the other, so watch out when dealing with these things.", "MLooker", "M_LOA1", "MLooker2", "M_LOG1" },
		{ "Drinniol Minor", "Known to the UESC Marathon's crew as \"Hulks\", these aliens stand over ten feet tall and have almost no fat on their entire bodies, which forces them to eat constantly. They are incredibly strong, and able to kill humans with one strike from their bare hands. Slow-moving, they are nevertheless deadly at close range due to their heavy crushing strikes.", "DrinniolMinor", "M_HUA1" },
		{ "Drinniol Major", "The Hulk is an enormous and rather slow creature, but it is incredibly strong. The science report indicated that it had no body fat, and therefore had to be fed often to keep it active. One crew member reported seeing one of these creatures pointing to itself and mumbling \"Drinniol\" right before it \"picked Johnny up by the shirt and crushed him against a pillar\".", "DrinniolMajor", "M_HUM1" },
		{ "Drone Minor", "A slow enemy, the drone has an equally slow distance attack, and is usually a simple opponent to defeat. Often first spotted by their glowing red optical receptors, their weapons array stays hidden behind an automated panel until the moment of attack.", "DroneMinor", "DRMIA1" },
		{ "Drone Major", "An advanced version of the drone. Use caution when handling this type of drone.", "DroneMajor", "DRMAA1" },
		{ "Wasp", "Wasps are a species of large flying insects which appear to used to distract, confuse and injure any human who offer resistance. Wasps can be heard from their distinctive sound of their wings flapping and the high-pitched squeak they make upon activating. \n\nThere are two types of Wasps, one of them is tougher than the other, so watch out when dealing with these bugs.", "MWasp", "M_WAA1", "MWasp2", "M_WAP1" },
		{ "Tick", "The tick is a strange, parasitic creature native to Lh'owon. \n\nOne type will attack you like normal but another type will attempt to suicide bomb you, so stay clear of these ticks.", "M2Tick", "M_HWD1" },
		{ "S'pht Compiler Minor", "The S'pht Compilers are the most common kind of S'pht. The Compilers attack by shooting a bolt of energy out of the machinery they have hidden under their cloaks. The bolt is powerful, but slow, so the player can move out of its way given sufficient distance to react. When the Compiler is struck by an attack, any impending attack is interrupted.", "M1SphtMinor", "M_H8G1", "SphtMinor", "COMIA1" },
		{ "S'pht Compiler Major", "Superior than the minor Compilers, the major Compilers are something not to be underestimated.", "M1SphtMajor", "M_H8K1", "SphtMajor", "COMAA1" },
		{ "S'pht Elite Compiler", "Much tougher than the Major Compilers, these guys should be killed immediately when you get the chance.", "M2EliteSpht", "M_H0T1" },
		{ "MADD", "By the way, I had an accident with some defense drones while you were away. You might bump into a few of them here. Don't worry, they're mostly harmless; I don't think I gave them any ammunition for those grenade launchers.", "MADD1", "MADDA1", "MADD2", "MADDN1" },
		{ "S'pht'Kr Defender Minor", "Though powerful, the S'pht'Kr are not much larger than the average human. Unlike the more familiar S'pht Compilers, the S'pht'Kr have a bulbous, glassy sphere and three short appendages; one curling up underneath them like a tail, and the other two coming down at their sides. Like their other S'pht cousins, the S'pht'Kr hover, as they have no appendages to walk with. Inside of the spherical \"helmet\" rests a very complex brain.", "SphtKrMinor", "KRMIA1" },
		{ "S'pht'Kr Defender Major", "Like most of the monsters Durandal has encountered, the S'pht'Kr has a superior variant.", "SphtKrMajor", "KRMAA1" },
		{ "Pfhor Hunter Minor", "Hunters are the strongest Pfhor infantry and are a rank above Troopers. Hunters are decked out in heavy armor and equipped with a shoulder-mounted plasma cannon. They also have giant shields over both forearms.", "M1HunterMinor", "M_HYE1", "HunterMinor", "HUMIA1" },
		{ "Pfhor Hunter Major", "The stronger version of the Hunters and a threat to neutralize at once.", "M1HunterMajor", "M_HYU1", "HunterMajor", "HUMAA1" },
		{ "Mother of All Hunters", "These new Hunters sported blue armor and were roughly one and a half times the size of the Major and Minor Hunters.", "MotherofAllHunters", "HUMOA1" },
		{ "Cyborg Minor", "The Cyborg appears to be a combination of organic and machine parts. The upper half is somewhat humanoid in appearance, with cybernetic enhancements on the arms, including a grenade launcher. The bottom half resembles a tank with triangluar formed treads and a red or green strip of light on back of the tread section. When destroyed, it is revealed that the two halves appear to have been connected by a series of pipes. In combat, the Cyborg uses its wrist-mounted grenade launcher to attack, launching slow-moving bouncing grenades, which are relatively easy to dodge. ", "CyborgMinor", "CYMIA1" },
		{ "Cyborg Major", "The more advanced versions of the cyborg attack with a wrist-mounted flamethrower when within close range, and the grenades of these advanced cyborgs (which bear green markings instead of red) are heat-seeking.", "CyborgMajor", "CYMAA1" },
		{ "Mother of All Cyborgs", "The Mother of All Cyborgs is an even bigger variant of the Cyborg with more health, seeking grenades and a flamethrower.", "MotherofAllCyborgs", "CYMIA1" },
		{ "Flame Cyborg Minor", "Another cyborg was created for more incendiary purposes. Use caution when engaging in combat against this cyborg.", "FlameCyborgMinor", "M_H7A1" },
		{ "Flame Cyborg Major", "Feel the burn, kid?", "FlameCyborgMajor", "M_H7M1" },
		{ "Enforcer Minor", "The Pfhor Enforcers are classified as the most intelligent in the Pfhor infantry; they are a rank above Hunters. The Minors have blue skin and are weaker, slower, and have poor vision. \n\nThere are two types: one carries a strange alien weapon that acts like a machine gun and the other carries a strange alien weapon that acts like a long-distance flamethrower.", "M1EnforcerMinor", "1EMIA1", "M2EnforcerMinor", "ENMIA1" },
		{ "Enforcer Major", "Enforcers are so named because of their duty on board Pfhor ships: to keep order among the Fighters and Pfhor Troopers.  For this reason, they will usually only fire on other Pfhor, unless they are fired upon by the player. They also seem to be torturers and interrogators as mentioned and shown in some terminals. \n\nThere are two types: one carries a strange alien weapon that acts like a machine gun and the other carries a strange alien weapon that acts like a long-distance flamethrower.", "M1EnforcerMajor", "1EMAA1", "M2EnforcerMajor", "ENMAA1" },
		{ "Elite Enforcer Minor", "An advanced form of the already superior Enforcer, the Elite Enforcer is a high priority when it comes to terminating the enemies.", "M2EliteEnforcerMinor", "M_H4A1" },
		{ "Elite Enforcer Major", "I’ll give you one simple tip: Kill on sight.", "M2EliteEnforcerMajor", "M_H4R1" },
		{ "Mk 1 Pfhor Juggernaut", "The Pfhor Juggernauts or Utfoo Heavy Assault Crafts are the strongest enemies of the Marathon enemies. Juggernauts are equipped with close-range machine guns and long-range guided grenades.", "M1Juggernaut", "CMPMMA36" },
		{ "Pfhor Juggernaut Minor", "Juggernauts are now given a new look, new weapons, and they no longer prioritize their weapons based on the distance to their target.", "JuggernautMinor", "CMPMMA37" },
		{ "Pfhor Juggernaut Major", "Major Juggernauts have higher health and shoot more often. No doubt one of the deadliest enemies you will encounter.", "JuggernautMajor", "CMPMMA38" },
	},
	{
		{ "Grunt", "Goons with probes inserted into their pleasure centers; wired up so when they kill someone, they get paroxysms of ecstasy. In essence, customized serial killers. Easy to kill, and they tote shotgun shells. It's like a little Christmas each time you blow a Grunt away!", "QGrunt", "CMPMQ101" },
		{ "Rottweiler", "Bad, bad doggie! Play dead! -- blam! -- yipe! Good dog!", "Rottweiler", "CMPMQ102" },
		{ "Enforcer", "Grunt, Mark Two. Recruits who are surlier and beefier than the rest get outfitted in combat armor and built-in blasters.", "QEnforcer", "CMPMQ103" },
		{ "Centroid", "These armor-plated, techno-advanced scorpion creatures are huge and pissed. They carry dual nail guns for claws to get your attention, but get too close and you'll have a stinger in your face.", "QCentroid", "CMPMQ104" },
		{ "Ogre", "What's worse than a cannibal monster eight feet tall? One with a chainsaw. And a sack of grenades.", "QOgre", "CMPMQ105" },
		{ "Zombie", "Thou canst not kill that which doth not live. But you can blast it into chunky kibbles.", "QZombie", "CMPMQ106" },
		{ "Gremlin", "These creatures travel in packs attacking like a swarm of bees to steal your weapons and feast on the bodies of your slain enemies.", "QGremlin", "CMPMQ107" },
		{ "Knight", "Canned meat. Open 'er up and see if it's still fresh.", "QKnight", "CMPMQ108" },
		{ "Knight Statue", "They're 'poised' to take you out.", "QKStatue1", "CMPMQ109" },
		{ "Spawn", "A merrily bouncing blob as dangerous to kill as to ignore. Blech.", "Quake_Spawn", "CMPMQ110" },
		{ "Hell Spawn", "A deadly upgrade to Quake's spawn.", "Quake_HellSpawn", "CMPMQ111" },
		{ "Baby Spawn", "A \"cute\" upgrade to Quake's spawn.", "Quake_HellSpawn_2", "CMPMQ112" },
		{ "Fiend", "In essence, organic buzzsaws, rife with pummeling power!", "QFiend", "CMPMQ113" },
		{ "Phantom Swordsman", "A disembodied spectral sword that will slash the player at many turns.", "QPhantomSwordsman", "CMPMQ114" },
		{ "Spike Mine", "Floating mines of flesh and steel that wander the levels and unleash a devastating shower of spikes when in proximity of a player. If you keep your eyes on the mine they will charge at you slower, but turn your back and they will destroy you. Use the spike mines to your advantage by leading them into other creatures.", "QSpikeMine", "CMPMQ115" },
		{ "Scrag", "Floats like a butterfly, stings like a bee. Ugly as hell. They're not real tough, but like to bushwhack you.", "QScrag", "CMPMQ116" },
		{ "Multi Grenade Ogre", "Turnabout is fair-play; at least for the Ogres, that is. Occasionally you will find that these guys can toss a Multi Grenade at you, too.", "QMultiOgre", "CMPMQ117" },
		{ "Mummy", "Half-cousins of the zombies, the Mummy is a slow yet adamant foe. Your rockets will not be as effective whilst this undead horror saunters across the tombs and castles with only one thought on his rotting mind - \"Brains with Chocolate Sauce\"", "QMummy", "CMPMQ118" },
		{ "Death Knight", "This particular canned meat tends to open you up instead. ", "QHKnight", "CMPMQ119" },
		{ "Death Knight Statue", "They must really like statues…", "QKStatue2", "CMPMQ120" },
		{ "Guardian", "Stationed in the past to execute Quake's evil plan. These demi-gods' 'surprising' entrance will shock you.", "QGuardian", "CMPMQ121" },
		{ "Egyptian Guardian", "The Egyptian Guardian defends the exit portal of an Ancient Egyptian tomb, located in the Corridors of Time.", "QGuardian2", "CMPMQ122" },
		{ "Quake's High Priest", "Quake's High Priest defends the exit portal of a Mesoamerican temple, located in the Corridors of Time.", "QGuardian3", "CMPMQ123" },
		{ "Quake's Guardian", "Quake's Guardian defends the exit portal of a Greco-Roman arena, located in the Corridors of Time. \n\nHe may look like the original Guardian, but he is a bit tougher.", "QGuardian4", "CMPMQ124" },
		{ "Vore", "A spideresque hybrid horror. Keep your eye on the energy pod he hurls.", "Vore", "CMPMQ125" },
		{ "Wrath", "These are the Overlord's evil minions. Smaller, but just as deadly. ", "QWrath", "CMPMQ126" },
		{ "Shambler", "Even other monsters fear him, so expect a clobbering. He shrugs off explosions. Good luck.", "Shambler", "CMPMQ127" },
		{ "Shub-Niggurath", "Known as the Hell-Mother, All-Mother, and the Witch-Goddess, Shub-Niggurath is the mother of all monsters that roam the dimensions of Quake.", "Shub-Niggurath", "CMPMQ128" },
		{ "Overlord", "This robed skeletal figure ominously floats with the environment. His attack? A ball of energy which tracks the player and detonates on impact.", "QOverlord", "CMPMQ129" },
		{ "Dragon", "Everyone's been screaming for this enemy. He'll have you screaming too!", "Pterodactylus", "CMPMQ130" },
		{ "Armagon", "Armagon is a half-biological, half-machine creature whom you probably face in the last level. Better get yourself a lot of ammo.", "QArmagon", "CMPMQ131" },
	},
	{
		{ "Low Guard", "The grunt of the Oscuridos forces: they shoot, and when it's time to \"ask questions later,\" they shoot some more. \n\nSometimes you will find them already dead…they could be faking it!", "LowGuard", "LWGSA1" },
		{ "Lightning Guard", "Trained for speedy maneuvers, watch out for lighting guards - they'll steal your stuff! Armed with a pistol. Once killed, you get your stuff back. \n\nSometimes they will appear as Heavy Guards, where they have a dang bazooka! \n\nLighting Guards can plead for their lives if they’re almost dead. However, it’s a ruse; if you let them live, they’ll get back up and try and shoot you in the back.", "LightningGuard", "LIGWA1" },
		{ "High Guard", "Armed with the old MP40 machine gun, these fellows enjoy perforating the enemy.", "HighGuard", "HIGHA1" },
		{ "Strike Team", "Tough and resourceful, these acrobatic guards won't stay still - they continually tumble out of the way of your attacks!", "StrikeTeam", "ANGSA1" },
		{ "Triad Enforcer", "Big, bad, and wearing black, the Triad Enforcers wail on you with a big chain gun, then have the nerve to throw grenades at you! Jeez!", "TriadEnforcer", "TRIWA1" },
		{ "Over Patrol", "Be careful around this enemy: they'll trap you in a net, then shoot you dead.", "OverPatrol", "OVERA1" },
		{ "Explosive Disk Jr.", "Floats around and shoots bullets at you. Come any closer and it will self-destruct at you.", "ExplosiveDiskJr", "RNMEN0" },
		{ "Copter Patrol", "Oh swell. A flying robot that shoots bullets at you. How could this get worse?", "CopterPatrol", "R_C1A1" },
		{ "Heavy Copter Patrol", "Oh, now it shoots rockets instead of bullets. Really swell.", "CopterPatrol2", "R_C1A1" },
		{ "Patrol Robot", "Forever patrolling the halls of the monastery; one sound and you'll have some high-speed visitors pummeling your chest!", "RobotGuard", "ROBTA1" },
		{ "Ballistikraft", "Indestructible, double-attacking iron cylinders of death. Slow, but extremely deadly.", "Ballistikraft", "BCRAA1" },
		{ "Death Monk", "These undead folks walk toward life sources and try to drain them of their energy. Tough to kill. \n\nSometimes you will come across one that is a bit more tougher than the other Death Monks, so watch out.", "MonkDrain", "MONKA1" },
		{ "Deathfire Monk", "These monks like their prey cooked before they feed, so they will blast you with fireballs.", "MonkDeathFire", "ALLSA1" },
		{ "General John Darian", "\"General\" Darian. The pyrotechnics wizard himself, now sporting the title of General, has plenty of tricks in store for you, including racks of stabbing spears, and a big bad bazooka!", "GeneralDarian", "DARIA1" },
		{ "Sebastian Doyle Krist", "Sebastian \"Doyle\" Krist. Watch out for the former head of Triad Pictures - he's insane and heavily armed. He flies toward you in his battle throne, firing missiles and ramming you. Try and attack him! You'll see what happens!", "SebastianKrist", "KRISA1" },
		{ "NME", "NME. Nasty Metallic Enforcer. A huge robot guard constructed as the last guard of El Oscuro's lair. Oh so deadly.", "NME", "RNMEA1" },
		{ "El Oscuro", "The dark ancient force worshiped by the Oscuridos. With many magic attacks and awful surprises, you'll be dead twice before you notice your body is vaporized.", "TomHall", "TOMSA1" },
		{ "Snake Oscuro", "You know for some guy dressed in a robe and is apparently worshipped by some deluded people; he doesn’t seem that tough- \n\nWait, what the hell is he transforming into?", "SnakeTom", "TOM6A1" },
	},
	{
		{ "Bio-Technicians", "Many of these guys are loyal to Dr. Goldfire, which means they'll waste you if they get the chance. But some can actually help you survive. Assuming you can find one at this point instead of a hostile one.", "Informant", "BSE4A1" },
		{ "Sector Patrol", "The Sector Patrols aren't out to help anybody - especially you. This deadly pack packs the lethal slow-Fire Protector. So... knock 'em out quickly.", "SectorPatrol", "BS23A1" },
		{ "Mutated Guard", "It has blue skin, a bloodstained uniform, pointed ears, and glowing red eyes. It appears vaguely human and is perhaps a result of the scientists' experiments to create a new mutant. They are sometimes encountered in an inactive state on gurneys but you'll probably just see them standing up ready to kill something that comes in their sight.", "MutatedGuard", "BS15A0" },
		{ "Sector Guard", "The Sector Guards aren't out to help anybody - especially you. This deadly pack packs the lethal Slow-Fire Protector.", "SectorGuard", "BSE1A1" },
		{ "S.T.A.R. Sentinel", "\"Professional\" best describes these security guards. They are armed with auto-repeating rifles and they know how to use them. Oh yeah - They won't go down without a fight! Kill one and take his rifle. That's what we're here for isn't it?", "BlakeSentinel", "BSE2A1" },
		{ "S.T.A.R. Trooper", "The toughest of the tough. These guys are determined! With security vests to protect them, you might knock 'em down, but... they won't stay down!", "StarTrooper", "BSE3A1" },
		{ "Tech Warrior", "\"Professional\" best describes these security guards. They are armed with auto-repeating rifles and they know how to use them. Oh yeah - They won't go down without a fight! Kill one and take his rifle. That's what we're here for isn't it?", "TechWarrior", "BS24A1" },
		{ "Alien Protector", "Or maybe these are the toughest of the tough. These guys are determined! With security vests to protect them, you might knock 'em down, but... they won't stay down!", "AlienProtector", "BS25A1" },
		{ "Experimental Genetic Alien", "Experimental Genetic Aliens, also called Canister Aliens, are common alien enemies found throughout the levels. They scratch when up close and spit acid when at a distance. These guys are the Small Canister Alien, resembling a brown, imp-like creature. They are carnivorous and make growling noises. Their blood is red, not unlike a mammal.", "MutantBrown", "BS14A0" },
		{ "Experimental Genetic Alien V2", "The Experimental Genetic Alien Type 2 also called Large Canister Alien, is a tall green humanoid creature. It spits fiery projectiles and scratches when up close. Their blood is green.", "MutantGreen", "BS13A0" },
		{ "Perimeter Scan Drone", "Perimeter Scanning Drones, also called SeekerBombs or Floating Bombs, are spherical mechanical drones that either stay still, or track the player. Roaming drones explode dangerously either when shot or when near the player, while stationary drones will explode only when shot. The player should always try to keep their distance from active PerScan drones and destroy them from afar.", "PerScanDrone", "BSE6A1" },
		{ "Plasma Sphere", "Plasma Spheres, also called Electro-Spheres, are small enemies that fly through the air, often wildly zigzagging and ricocheting off of walls. They are fast and can be difficult to aim at. Plasma Spheres cause damage only when they come into contact with the player, but can still be extremely dangerous especially when they catch the player by surprise.", "PlasmaSphere", "BSE9A0" },
		{ "Experimental Mutant Human [Brown]", "Experimental Mutant Humans are large, intimidating mutated humans. They come in two forms. This form spits acid from a distance and punches when close. It resembles a giant Kilby Qello the coyote/werewolf.", "ExpHumanBrown", "BS12A0" },
		{ "Experimental Mutant Human [Blue]", "This form of an Experimental Mutant Human is found only in Planet Strike. It has a different appearance and is usually cloaked as a seemingly harmless statue. It then morphs to attack the player. It throws energy and also punches when close.", "ExpHumanBlue", "BS30A0" },
		{ "High Security Genetic Guard", "High-Security Genetic Guards are large, heavily-built humanoid mutants. They carry Slow Fire Protectors. Despite their size, they are not extremely tough. They will punch Blake if he is too close to them. They will drop a Slow-Fire Protector if the player does not currently have one.", "GeneticGuard", "BS10A0" },
		{ "Pod Alien", "Pod Aliens are large, green, reptilian mutants. They spit acid from a distance and attack with their claws when up close. They are often found in pods, from which a pod alien may hatch if disturbed. Some pods are inactive and will not hatch into aliens.", "PodAlien", "BSE7E0" },
		{ "Cyborg Warrior", "The Cyborg Warrior is one of the deadliest threats that Blake will encounter. It carries a gun and has the head of a mutant but a mechanical body.", "CyborgWarrior", "BS19A0" },
		{ "Spider Mutant", "The Spider Mutant is one of the deadliest threats that Blake will encounter, appearing at the end of his first mission. It has six arms which fire dangerous liquid, often blinding the view. The liquid can be avoided by strafing. The Spider Mutant can be quickly defeated by continuously strafing and firing.", "SpiderMutant", "BS17A0" },
		{ "Reptilian Warrior", "The Reptilian Warrior is one of Blake's final challenges in his mission. It has a lizard-like appearance and carries a gun. Fighting the Reptilian Warrior can be difficult. The player should try to keep moving, even in cramped spaces.", "ReptilianWarrior", "BS20A0" },
		{ "Experimental Mech Sentinel", "Experimental Mech-Sentinels are robotic guards with cannons as arms. They are stronger and more dangerous than human guards. When defeated, they explode.", "MechSentinel", "BS11A0" },
		{ "Acid Dragon", "The Acid Dragon is one of the deadliest threats that Blake will encounter. It is a large slug-like mutant that shoots acid, which can be easily dodged by strafing.", "AcidDragon", "BS21A0" },
		{ "Bio-Mechanical Guardian", "The Bio-Mech Guardian is one of the deadliest threats that Blake will encounter. It appears to be mainly a machine, although a brain is seen through transparent glass atop its body. Both its arms are cannons.", "BioMech", "BS22A0" },
		{ "Breather Beast", "The Breather Beast is another threat that Blake once encountered in his missions. It is a large brownish mutant armed with a gun.", "BreatherBeast", "BS18A0" },
		{ "Water Alien", "The Fluid Alien (also called Liquid Alien), is a peculiar enemy that resembles a puddle moving around on the floor. The alien attacks the player by growing into a tentacle and then throwing watery projectiles at the player. The alien is only vulnerable when it is in its tentacle form.", "WaterAlien", "BS16G0" },
		{ "Plasma Alien", "High Energy Plasma Aliens, also called Electro-Aliens, are alien enemies made of irregular forms of plasma. They are not very tough, but the plasma bursts they fire cause a lot of damage.", "PlasmaAlien", "BSE8I0" },
		{ "Armored Stalker", "The Armored Stalker is a robot that resembles a cockpit on two mechanical legs, with cannons under the cockpit.", "ArmoredStalker", "BS28A0" },
		{ "Giant Stalker", "The Giant Stalker is a boss that Blake once crossed paths with during his adventure. It resembles an orange version of a High Security Genetic Guard.", "GiantStalker", "BS26A0" },
		{ "Crawler Beast", "The Crawler Beast is a boss that Blake once crossed paths with during his adventure. It is a powerfully-built mutant that crawls along the floor and spits acid.", "CrawlerBeast", "BS29A0" },
		{ "Spector Demon", "The Spector Demon is a boss that Blake once crossed paths with during his adventure. It is a ghostly demon-like creature that throws clouds of energy. This alien's appearance hints that it may be a higher mutation of the High Energy Plasma Alien.", "SpectorDemon", "BS27A0" },
		{ "Dr. Pyrus Goldfire", "Doctor Pyrus Goldfire is Blake Stone's greatest enemy. He has found a way to replicate pure gold, which he is using to fund his plan to take over with his deadly, mutant creations. He appears to carry a Slow Fire Protector. \n\nAfter Goldfire is killed, he transforms into an extremely powerful mutant. Morphed Dr. Goldfire shoots massive energy blasts that can kill the player extremely quickly. It remains unknown if Dr. Goldfire mutated himself or if he had alien origins.", "GoldFire", "BSE5A1", "GoldFireBoss", "BS31A0" },
	},
	{
		{ "Cultist", "Tchernobog's human soldiers are accurate and deadly. Wielding shotguns these robed menaces give you a good fight. They may also lob dynamite at you from time to time, so listen for the telltale hiss and be ready to dive for cover.", "Cultist", "YCUFA1" },
		{ "Acolyte", "These cultists-in-training lob dynamite at you. Keep your ears tuned for the deadly hiss of an incoming bundle. Careful, sometimes you will encounter an acolyte who is more aggressive when it comes to tossing bundles of TNT.", "BloodAcolyte", "YCU2A1" },
		{ "Fanatic", "These Tommy Gun packin' keepers of the dark faith want to spill your precious life blood. Keep your ears tuned for the deadly sounds of dynamite as they sometimes offer explosives instead.", "Fanatic", "YCU8A1" },
		{ "Axe Zombie", "These hardy undead menaces move more swiftly than you might expect. Take them out before they get close or you'll taste their rusty axe blades. Also, just because they're down doesn't mean they're dead-make sure they're down for the count before you move on. \n\n Sometimes you will not see them at first because they could be buried. But once you are in sight, they will dig themselves out and hunt you down!", "AxeZombie", "BZOMI1" },
		{ "Hell Hound", "These fire-breathing mastiffs are swift and deadly. If they get close to you, their powerful jaws will make quick work of you, so keep your distance... if you can.", "HellHound", "HOUNA1" },
		{ "Hell Hand", "The corpses that the minions of Tchernobog use to make zombies aren't always in the best of shape. Sometimes, only a limb is salvageable. Usually, the Cabal's surgeons can fashion various bits and pieces into a serviceable undead soldier, but certain leftover parts can be effective all on their own. If one of these horrors gets hold of you, you've got to push it off before you can kill it.", "ChokingHand", "7H9NA1" },
		{ "Gill Beast", "If you have to face a gill beast in the water, you're in big trouble. While slow and ponderous above water, in their element they are vicious adversaries.", "GillBeast", "GILWA1" },
		{ "Rat", "While not the deadliest of creatures, these little fiends can be quite hazardous if they mob you, which is their preferred mode of attack.", "BloodRat", "BRATA1" },
		{ "Bat", "Bats have a nasty tendency of getting in your face when you're trying to get a bead on deadlier creatures. Take care of them quickly if you know what's good for you.", "BloodBat", "BBATA1" },
		{ "Gargoyle", "Your first encounter with a gargoyle will teach you to keep an eye turned skyward. They are as tough to kill as they are vicious. They hurl sharp bones at you from afar or swoop in to rake at you with their talons.", "BloodGargoyle", "BGARA1" },
		{ "Bloated Butcher", "Slower and more deliberate than their axe-wielding comrades, are much tougher to kill. You'll have to dish out a lot of abuse before they go down. Beware of the foul goo they vomit at you, for it is both corrosive and unpleasant smelling.", "Butcher", "BBUTD1" },
		{ "Zealot", "These blue-robed Tesla Cannon wielding cultists have been through special 'training' to make them very mean. Their armor protects them from electrical damage.", "Zealot", "YCU0A1" },
		{ "Priest", "These red-robed Chosen-in-training have started their transformation into what you once were.... The Chosen. Killing them is only the first step, as they transform into the powerful Beast, whose stomp can open up a world of pain.", "BloodPriest", "YCU7A1" },
		{ "Beast", "A creature resembling a wolf, twice the size of man, with stone-tough skin and blood red eyes. They attack by slashing and stomping, which creates a damaging quake and also freezes the player. This stomp can damage the player through armour and can even affect him if he's not on the ground.", "BloodBeast", "BESCA1" },
		{ "Phantasm", "These restless phantoms harvest the souls of their victims with vicious scythes. Because they exist more in the land of the dead than the world of the living, they are only vulnerable when attacking. Watch for them to solidify before striking or your ammo and effort will be wasted.", "BloodPhantasm", "PHANA1" },
		{ "Cheogh", "Cheogh rules over all gargoyles, but he has long yearned to hold higher rank in Tchernobog's army. His jealousy toward the Chosen was never kept secret. Now that you have been cast from Tchernobog's graces, envy has boiled into sheer abiding hatred. He will be anxious to meet you again and express his feelings for you. \n\nStone gargoyles are nigh invulnerable. Bullets bounce off their brittle hides and flames find little purchase. You'll have to be resourceful to survive an encounter with one of these monstrosities. ", "Cheogh", "CMPMBL16" },
		{ "Shial", "The spider demon Shial makes her lair deep within the earth in the frozen North. Surrounded by her arachnid spawn, she skulks through darkness, feeding on those hapless souls who stumble into her cavernous labyrinth or are brought there by her loyal children. Those who fall victim to her learn of true agony as she digests them alive.", "MotherSpider", "SPDWA1" },
		{ "Spider", "Don't be fooled - spiders are dangerous enemies. The little red ones pack a poison that will blur your vision. The larger green ones can blind you completely for a short time. The poison is cumulative, so the more they bite, the worse the side effects.", "BloodSpider1", "BL74A1", "BloodSpider2", "BL76A1" },
		{ "Cerberus", "Named for the mythical guardian of the gates of Hell, this two-headed firebreathing demon abides in a dark, sulfurous den, hidden to the world of mortals. Ferocious and nigh invulnerable, Cerberus is the deadliest adversary you will face aside from Tchernobog himself. Remember that you must destroy both heads in order to defeat him.", "Cerberus", "CERBA1" },
		{ "Beast [Boss]", "A more powerful version of the Beast; there is a reason why they were considered to be the next Chosen… before Caleb showed them their true place.", "BloodBeast_Boss", "BESWA1" },
		{ "Tchernobog", "His name is spoken only in whispers, for it is said that his interest is easily roused. Those who peer fully into His smouldering gaze are condemned to madness and death. You must find Him before his powers become complete if you are to stand a chance. Even then, defeating Him will require all your strength and ingenuity.", "Tchernobog", "CMPMBL21" },
	},
	{
		{ "Acolyte", "The Order uses Acolytes as guards and soldiers. They appear to be human, but no one is quite sure where they come from. They are armed with assault guns, so don't make them mad unless you are ready for a fight. At least they're not too bright. \n\nAcolytes come in eight different ranks, identified by their armor colors. \n\nFrom weakest to strongest:\n\nTan, Red, Rust, Gray, Dark Green, Gold, Light Green, Blue", "StrifeAcolyte", "AGRDA1", "StrifeAcolyte2", "AGR2A1", "StrifeAcolyte3", "AGR3A1", "StrifeAcolyte4", "AGR4A1", "StrifeAcolyte5", "AGR5A1", "StrifeAcolyte6", "AGR6A1", "StrifeAcolyte7", "AGR7A1", "StrifeAcolyte8", "AGR8A1" },
		{ "Stalker", "They're the best reason yet for arachnophobia. Stalkers like to drop down on unsuspecting visitors and chew them up. Use the assault gun if they get too close. \n\nThey may either spawn on the ground or on the ceiling. Always be cautious.", "StrifeStalker", "STLKK1" },
		{ "Sentinel", "They fly, they shoot, they seem to be everywhere. Keep your eyes (and ears) open for these guys, and drop them before they drop you.", "StrifeSentinel", "SEWRA1" },
		{ "Recycler", "Another type of Sentinel, this one can take more damage and will gun you down at sight with a machine gun, so take it down ASAP!", "Recycler", "RECIA0" },
		{ "Templar", "A nasty demonstration of The Order's mastery of technology. Templars are armed with maulers so be wary.", "StrifeTemplar", "PGRDA1" },
		{ "Reaver", "These automated troublemakers are fast... VERY fast. If you can hit a moving target, you might do okay. Otherwise, saturation bombing is the only way to take them out.", "StrifeReaver", "ROB1A1" },
		{ "Crusader", "Toting a long range missile launcher AND a flamethrower, Crusaders are trouble from the moment they show up. Dodge the missiles and you might have a chance.", "StrifeCrusader", "ROB2Q1" },
		{ "Inquisitor", "Rumor has it that The Order's Loremaster is developing a deadly new mechnical menace. It's bigger, more dangerous, flies, shoots lasers out of its eyes — well, since no one has seen one, who knows? If you DO see one, panic.", "StrifeInquisitor", "CMPMSQ08" },
		{ "Macil", "Leader of The Front. He'll send you on missions and he'll also give you rewards... in this unfortunate case, your reward is a trip to Hell. ", "NewMacil", "LEADA1" },
		{ "Programmer", "A high-ranking member of the Order who is ultimately in charge of all operations in Tarnhill, he is the programmer of the AI that controls most if not all the acolytes.", "Programmer3", "CMPMSQ10" },
		{ "Bishop", "He has bipedal legs similar to the crusaders, and a human upper body on what looks like a rotating platform. He also carries a massive missile launcher on his right arm that is able to home on its targets.", "NewStrifeBishop", "CMPMSQ11" },
		{ "Lore Master", "He is considered to be a religious leader, and the most powerful of all the Order's generals.", "StrifeLoremaster", "PRSTA1" },
		{ "Alien Spectre", "They are mysterious creatures which appear as a cloud with one eye. They possess the bodies of various characters and bend their will to evil desires, making the possessed people into dangerous maniacs, only bent on searching for the Sigil in order to release their master, the Entity. Each Spectre takes a different amount of damage, depending on whose body they possess from.", "NewAlienSpectre1", "CMPMSQ13" },
		{ "Entity", "The Entity, also known as \"The One God\", \"The True God\", and sometimes dubbed \"The Evil\", is a mysterious creature from outer space. It resembles the spectres, but it is larger and green. \n\nThere is one main entity which, when slain, splits into three smaller sub entities.", "StrifeEntity", "CMPMSQ14", "StrifeSubEntity", "CMPMSQ15" },
	},
	{
		{ "Zombieman", "Once a Marine, always a Marine. Except in this case. These guys may look like your old buddies, but now they're nothing more than pistol-toing, bi-pedal maggots. Waste em!", "ZombieMan64", "64POA1" },
		{ "Sergeant", "Ditto. Except these guys are meaner, and tougher. These walking shotguns will provide you with a few extra holes if you're not careful.", "ShotgunGuy64", "64SPA1" },
		{ "Chaingunner", "Strange, you could have sworn they did not have these chaingunners before...", "ChaingunGuy64", "64CPA1" },
		{ "Imp", "You thought an imp was a cute little dude in a red suit with a pitchfork. Think again. This Imp heaves balls of fire down your throat and takes several bullets to die. It's time to find a better weapon than a pistol, if you're going to face more than one of these mutants.", "DoomImp64", "64TRA1" },
		{ "Nightmare Imp", "An Imp is bad enough, but picture a faster, more aggressive one. Now the bad news... he's harder to see, too.", "NightmareImp64", "64I2A1" },
		{ "Demon", "Sorta liked shaved gorillas, except with horns, big heads and lots of teeth. They don't kill easily. Get to close and they'll rip your sorry head off.", "Demon64", "64SRB1" },
		{ "Spectre", "Great! Just what you needed. An (nearly) invisible monster. These beasts will eat your face off. Did you expect a walk in the park?", "Spectre64", "64S2B1" },
		{ "Lost Soul", "It's Tough. It Flies. It's On Fire.", "LostSoul64", "64LSA1" },
		{ "Cacodemon", "They float in the air, belch ball-lightning, and have one horrendously big mouth. If you get too close to one of these monstrosities, you're toast.", "Cacodemon64", "64HDA1" },
		{ "Hell Knight", "Tough as a dump truck and nearly as big. These goliaths are the worst thing on two legs since the Tyrannosaurus Rex.", "HellKnight64", "64HKA1" },
		{ "Baron of Hell", "You thought the Hell Knights were bad? These guys make them look like choir boys. You better have a good supply of ammo and armor to take on this demon.", "BaronOfHell64", "64BSA1" },
		{ "Arachnotron", "Think of the pain a Black Widow causes when you disturb her nest. Then think what happens when you stir up one the size of an M60 tank.", "Arachnotron64", "64PIA1" },
		{ "Pain Elemental", "What a name. And what a pain in the butt. Killing him is almost as bad as letting him live.", "PainElemental64", "64PNA1" },
		{ "Revenant", "Oh great, the skeleton is back. First the chaingunner and now him. It can't get worse than this, can it?", "Revenant64", "SKE2A1" },
		{ "Mancubus", "The only good thing about this fat tub of demon is that he's a nice wide target. Good thing, because it takes a lot of hits to puncture him. He pumps out fire balls like nobody's business.", "Fatso64", "64FTA1" },
		{ "Arch-Vile", "Oh dear God, HE is back!?", "Archvile64", "VIL2A1" },
		{ "Spider Mastermind", "Looks like the Chaingunner, Revenant, and Arch-Vile aren't the only returning monsters. It's been a while, Spider Mastermind! I certainly did not miss that super-chaingun of yours. Crap.", "SpiderMastermind64", "CMPMD217" },
		{ "Cyberdemon", "Half machine, half raging horned devil. This walking nightmare has a rocket launcher for an arm and will definitely reach out and touch you. Make sure you're fully loaded before you take on this guy.", "Cyberdemon64", "CMPMD218" },
		{ "Mother Demon", "The military episodes code named \"DOOM\" were not actually completed: A single entity with vast rejuvenation powers, masked by the extreme radiation. In its crippled state, it systematically altered decaying dead carnage back into corrupted living tissue. \n\nThe mutations are devastating. The Demons have returned even stronger and more vicious than before.", "MotherDemon64", "CMPMD219" },
		{ "Nazi", "Members of the Schutzstaffel, they wear blue uniforms, bulletproof vests, and sadistic grins. They picked the wrong side of Hell to make their appearance!", "WolfensteinSSJagaur", "64SSA1" },
	},
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
	int cursorx, cursory, offsety, offsetx, menuindex, lastmenuindex, a, menutab, lastmenutab, menuitem, lastmenuitem, scrollcounter, scrolltimer, index, scalex, scaley, newtid, listyposition, listindex, condition, listclick, monsterskin;
	str seesound, activesound, painsound, deathsound;
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
		int forwardmove = GetPlayerInput(-1, INPUT_FORWARDMOVE);
		int sidemove = GetPlayerInput(-1, INPUT_SIDEMOVE);
		int yaw = GetPlayerInput(-1, INPUT_YAW);
		int pitch = GetPlayerInput(-1, INPUT_PITCH);
		int buttons = GetPlayerInput(-1, INPUT_BUTTONS);
		int oldbuttons = GetPlayerInput(-1, INPUT_OLDBUTTONS);
						
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
			if(lastmenuindex != menuindex) { removemessages(15990,16185); lastmenuindex = menuindex; scrollcounter = 0; scrolltimer = 368; }
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
					listyposition = 0;
					menutab = 1;
					menuitem = 1;
					listindex = 1;
				}
				if(lastmenutab != menutab)
				{
					listyposition = 0;
					menuitem = 1;
					listindex = 1;
					removemessages(16180,16185);
				}
				monsterskin = 0;
				removemessages(15990,16180);
				scrollcounter = 368;
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

				//SetHudSize(hudboundsx,hudboundsy,true);
			}	
			
			if(menutab == 1)
			{
				SetHudSize(hudboundsx,hudboundsy,true);
				SetFont("SAMCMPB2");
				SetHudClipRect(FixedMul(hudboundsx,0.25),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.7),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.675));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16185, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(FixedMul(hudboundsx,0.05),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.18),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.125));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16184, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(0,0,0,0,0);
				SetFont("SMALLFONT");
				SetHudSize(hudcenterx,hudcentery,true);
				for(a = 0; a < 3; a++)
				{
					SetHudSize(hudcenterx,hudcentery,true);
					HudMessage(s:StatPages[a]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16030+a, SelectionColors[(menuitem==a+1)], (FixedMul(hudboundsx,0.0685)<<16), FixedMul(hudboundsy,0.1+(0.025*a))<<16, 0);
					SetHudSize(hudboundsx,hudboundsy,true);
					if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
					{
						if((cursorx < FixedMul(hudboundsx,0.23) && cursorx > FixedMul(hudboundsx,0.05)) && (cursory < FixedMul(hudboundsy,0.19+(0.05*a))+8 && cursory > FixedMul(hudboundsy,0.19+(0.05*a))-8))
							menuitem = a+1;
					}
				}
				SetHudSize(hudboundsx,hudboundsy,true);
			}
			
			if(menutab == 2)
			{
				SetHudSize(hudboundsx,hudboundsy,true);
				SetFont("SAMCMPB2");
				SetHudClipRect(FixedMul(hudboundsx,0.25),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.5),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.475));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16185, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(FixedMul(hudboundsx,0.05),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.18),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.125));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16184, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.25),FixedMul(hudboundsx,0.15));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16183, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.45),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.5),FixedMul(hudboundsx,0.15));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16182, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(0,0,0,0,0);
				index = -1;
				SetFont("SMALLFONT");
				SetHudSize(hudcenterx,hudcentery,true);
				SetHudClipRect(FixedMul(hudcenterx,0.05),FixedMul(hudcentery,0.175),FixedMul(hudcenterx,0.18),FixedMul(hudcentery,0.775),FixedMul(hudcenterx,0.2));
				for(a = 1; a < 21; a++)
				{
					if(StrLen(ClassWeaponInfo[menuindex-1][a-1][0]) != 0)
					{
						index++;
						SetHudSize(hudcenterx,hudcentery,true);
						HudMessage(s:ClassWeaponInfo[menuindex-1][a-1][0]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16030+index, SelectionColors[(menuitem==index+1)], (FixedMul(hudboundsx,0.0685)<<16)+0.4, FixedMul(hudboundsy,0.1+(0.025*index))<<16, 0);
						SetHudSize(hudboundsx,hudboundsy,true);
						if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.23) && cursorx > FixedMul(hudboundsx,0.05)) && (cursory < FixedMul(hudboundsy,0.19+(0.05*(index-listyposition)))+8 && cursory > FixedMul(hudboundsy,0.19+(0.05*(index-listyposition)))-8) && (cursory > FixedMul(hudboundsy,0.19) && cursory < FixedMul(hudboundsy,0.95)) && listclick < 1)
							{
								menuitem = a;
								listindex = menuitem;
								condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) >= FixedMul(hudboundsy,0.95));
								if(condition) { listclick = 4; listyposition+=condition; }
								else
								{
									condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) >= FixedMul(hudboundsy,0.175));
									if(condition) 
									{
										listclick = 4; 
										listyposition-=condition; 
										if(listyposition < 0)
											listyposition = 0;
									}
								}
							}
						}
					}
				}
				listclick--;
				SetHudClipRect(0,0,0,0,0);
				SetHudSize(hudboundsx,hudboundsy,true);
			}
			
			if(menutab == 3)
			{
				SetHudSize(hudboundsx,hudboundsy,true);
				SetFont("SAMCMPB2");
				SetHudClipRect(FixedMul(hudboundsx,0.25),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.5),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.475));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16185, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(FixedMul(hudboundsx,0.05),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.18),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.125));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16184, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.25),FixedMul(hudboundsx,0.15));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16183, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.5),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.45),FixedMul(hudboundsx,0.15));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16182, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.33);
				SetHudClipRect(0,0,0,0,0);
				index = -1;
				SetFont("SMALLFONT");
				SetHudSize(hudcenterx,hudcentery,true);
				SetHudClipRect(FixedMul(hudcenterx,0.05),FixedMul(hudcentery,0.175),FixedMul(hudcenterx,0.18),FixedMul(hudcentery,0.775),FixedMul(hudcenterx,0.2));
				for(a = 1; a < 65; a++)
				{
					if(StrLen(MonsterInfo[menuindex-1][a-1][0]) != 0)
					{
						index++;
						SetHudSize(hudcenterx,hudcentery,true);
						HudMessage(s:MonsterInfo[menuindex-1][a-1][0]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16030+index, SelectionColors[(menuitem==index+1)], (FixedMul(hudboundsx,0.0685)<<16)+0.4, FixedMul(hudboundsy,0.1+(0.025*(index-listyposition)))<<16, 0);
						SetHudSize(hudboundsx,hudboundsy,true);
						if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.23) && cursorx > FixedMul(hudboundsx,0.05)) && (cursory < FixedMul(hudboundsy,0.19+(0.05*(index-listyposition)))+8 && cursory > FixedMul(hudboundsy,0.19+(0.05*(index-listyposition)))-8) && (cursory > FixedMul(hudboundsy,0.19) && cursory < FixedMul(hudboundsy,0.95)) && listclick < 1)
							{
								menuitem = a;
								listindex = menuitem;
								condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) >= FixedMul(hudboundsy,0.95));
								if(condition) { listclick = 4; listyposition+=condition; }
								else
								{
									condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) >= FixedMul(hudboundsy,0.175));
									if(condition) 
									{
										listclick = 4; 
										listyposition-=condition; 
										if(listyposition < 0)
											listyposition = 0;
									}
								}
							}
						}
					}
					else { break; }
				}
				listclick--;
				SetHudClipRect(0,0,0,0,0);
				SetHudSize(hudboundsx,hudboundsy,true);
			}
			
			//======================================================================================================== Tab Shit
			
			scrolltimer++;
			if(scrolltimer%scrollstep==0) { scrollcounter--; }
			if(scrolltimer == scrollstep) scrolltimer = 1;
			if(scrollcounter < -scrollmax)
				scrollcounter = scrollmax;
				
			//Tab Specific Info
			if(menutab == 1)
			{
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
			}
			else if(menutab == 2)
			{
				SetFont("SMALLFONT");
				SetHudSize(hudcenterx,hudcentery,true);
				SetHudClipRect(FixedMul(hudcenterx,0.25),FixedMul(hudcentery,0.175),FixedMul(hudcenterx,0.5),FixedMul(hudcentery,0.775),FixedMul(hudcenterx,0.475));
				HudMessage(s:ClassWeaponInfo[menuindex-1][menuitem-1][1]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16015, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.26)<<16)+0.1, scrollcounter*1.0+88.1, 0);	
				SetHudClipRect(0,0,0,0,0);		
				if(StrLen(ClassWeaponInfo[menuindex-1][menuitem-1][2]) != 0)
				{
					newtid = UniqueTid();
					SpawnForced(ClassWeaponInfo[menuindex-1][menuitem-1][3],0,0,0,newtid,0);
					scalex = GetActorProperty(newtid,APROP_SCALEX);
					scaley = GetActorProperty(newtid,APROP_SCALEY);
					Thing_remove(newtid);
					SetFont(ClassWeaponInfo[menuindex-1][menuitem-1][2]);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16016, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.855)<<16)+0.1, (FixedMul(hudcentery,0.31)<<16)+0.1, 0);
				}
				SetHudSize(hudcenterx,hudcentery,true);
				
				if(abs(forwardmove) > 8 && buttons != oldbuttons)
				{
					if(StrLen(ClassWeaponInfo[menuindex-1][(menuitem-1)-sign(forwardmove)][0]) != 0) 
					{ 
						listindex-=sign(forwardmove); 
						condition = (FixedMul(hudboundsy*2,0.1+(0.025*(listindex-listyposition))) > FixedMul(hudboundsy,0.95));
						if(condition && sign(forwardmove) < 0)
							listyposition+=condition;
						else if (sign(forwardmove) > 0 && listyposition > 0)
							listyposition--;
					}
					else if(listindex == 1 && sign(forwardmove) > 0)
					{
						for(a = 0; a < 20; a++)
						{
							condition = (FixedMul(hudboundsy*2,0.1+(0.025*a)) > FixedMul(hudboundsy,0.95));
							if(condition)
								listyposition+=condition;
								
							if(StrLen(ClassWeaponInfo[menuindex-1][a][0]) == 0) { menuitem = a; listindex = menuitem; break; }
						}
					}
					else { listindex = 1; listyposition = 0; }		
					menuitem = listindex;
				}
			}
			else if(menutab == 3)
			{
				SetFont("SMALLFONT");
				SetHudSize(hudcenterx,hudcentery,true);
				SetHudClipRect(FixedMul(hudcenterx,0.25),FixedMul(hudcentery,0.175),FixedMul(hudcenterx,0.5),FixedMul(hudcentery,0.775),FixedMul(hudcenterx,0.475));
				HudMessage(s:MonsterInfo[menuindex-1][menuitem-1][1]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16015, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.26)<<16)+0.1, scrollcounter*1.0+88.1, 0);	
				SetHudClipRect(0,0,0,0,0);		
				if(StrLen(MonsterInfo[menuindex-1][menuitem-1][3]) != 0)
				{			
					newtid = UniqueTid();
					SpawnForced(MonsterInfo[menuindex-1][menuitem-1][2+(2*monsterskin)],0,0,0,newtid,0);
						
					scalex = GetActorProperty(newtid,APROP_SCALEX);
					scaley = GetActorProperty(newtid,APROP_SCALEY);
					if(!CheckActorProperty(newtid,APROP_SeeSound,""))
					{
						seesound = GetActorProperty(newtid,APROP_SeeSound);
						SetFont("CMPALRT2");
						HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16155, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.775)<<16)+0.1, FixedMul(hudcentery,0.4675)*1.0, 0);
						if (buttons & (BT_USE|BT_ATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.7925)+32 && cursorx > FixedMul(hudboundsx,0.7925)-32) && (cursory < FixedMul(hudboundsy,0.4675)+32 && cursory > FixedMul(hudboundsy,0.4675)-32) && buttons != oldbuttons)
								LocalAmbientSound(seesound,127);
						}
					}
					if(!CheckActorProperty(newtid,APROP_ActiveSound,""))
					{
						activesound = GetActorProperty(newtid,APROP_ActiveSound);
						SetFont("CMPACTV2");
						HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16156, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.8175)<<16)+0.1, FixedMul(hudcentery,0.4675)*1.0, 0);
						if (buttons & (BT_USE|BT_ATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.8350)+32 && cursorx > FixedMul(hudboundsx,0.8350)-32) && (cursory < FixedMul(hudboundsy,0.4675)+32 && cursory > FixedMul(hudboundsy,0.4675)-32) && buttons != oldbuttons)
								LocalAmbientSound(activesound,127);
						}
					}
					if(!CheckActorProperty(newtid,APROP_PainSound,""))
					{
						painsound = GetActorProperty(newtid,APROP_PainSound);
						SetFont("CMPPAIN2");
						HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16157, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.86)<<16)+0.1, FixedMul(hudcentery,0.4675)*1.0, 0);
						if (buttons & (BT_USE|BT_ATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.8775)+32 && cursorx > FixedMul(hudboundsx,0.8775)-32) && (cursory < FixedMul(hudboundsy,0.4675)+32 && cursory > FixedMul(hudboundsy,0.4675)-32) && buttons != oldbuttons)
								LocalAmbientSound(painsound,127);
						}
					}
					if(!CheckActorProperty(newtid,APROP_DeathSound,""))
					{
						deathsound = GetActorProperty(newtid,APROP_DeathSound);
						SetFont("CMPDETH2");
						HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16158, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.9025)<<16)+0.1, FixedMul(hudcentery,0.4675)*1.0, 0);
						if (buttons & (BT_USE|BT_ATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.92)+32 && cursorx > FixedMul(hudboundsx,0.92)-32) && (cursory < FixedMul(hudboundsy,0.4675)+32 && cursory > FixedMul(hudboundsy,0.4675)-32) && buttons != oldbuttons)
								LocalAmbientSound(deathsound,127);
						}
					}
					Thing_remove(newtid);
					SetHudSize(FixedDiv(hudcenterx,scalex),FixedDiv(hudcentery,scaley),true);
					SetFont(MonsterInfo[menuindex-1][menuitem-1][3+(2*monsterskin)]);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16016, CR_UNTRANSLATED, (FixedMul(FixedDiv(hudcenterx,scalex),0.86)<<16)+0.5, (FixedMul(FixedDiv(hudcentery,scaley),0.4)<<16)+0.1, 0);
				}
				if (buttons & (BT_USE|BT_ATTACK))
				{
					if(strlen(MonsterInfo[menuindex-1][menuitem-1][4+((monsterskin)*2)]) != 0)
					{
						if((cursorx < FixedMul(hudboundsx,0.86)+120 && cursorx > FixedMul(hudboundsx,0.86)-120) && (cursory < FixedMul(hudboundsy,0.295)+120 && cursory > FixedMul(hudboundsy,0.295)-120) && buttons != oldbuttons)
						{ 
							monsterskin++; 
						}
					}
					else
					{
						if((cursorx < FixedMul(hudboundsx,0.86)+120 && cursorx > FixedMul(hudboundsx,0.86)-120) && (cursory < FixedMul(hudboundsy,0.295)+120 && cursory > FixedMul(hudboundsy,0.295)-120) && buttons != oldbuttons)
						{ 
							monsterskin = 0; 
						}
					}
				}
				SetHudSize(hudcenterx,hudcentery,true);
				
				if(abs(forwardmove) > 8 && buttons != oldbuttons)
				{
					if(StrLen(MonsterInfo[menuindex-1][(menuitem-1)-sign(forwardmove)][0]) != 0) 
					{ 
						listindex-=sign(forwardmove); 
						condition = (FixedMul(hudboundsy*2,0.1+(0.025*(listindex-listyposition))) > FixedMul(hudboundsy,0.95));
						if(condition && sign(forwardmove) < 0)
							listyposition+=condition;
						else if (sign(forwardmove) > 0 && listyposition > 0)
							listyposition--;
					}
					else if(listindex == 1 && sign(forwardmove) > 0)
					{
						for(a = 0; a < 64; a++)
						{
							condition = (FixedMul(hudboundsy*2,0.1+(0.025*a)) > FixedMul(hudboundsy,0.95));
							if(condition)
								listyposition+=condition;
								
							if(StrLen(MonsterInfo[menuindex-1][a][0]) == 0) { menuitem = a; listindex = menuitem; break; }
						}
					}
					else { listindex = 1; listyposition = 0; }		
					menuitem = listindex;
				}
			}
			
			// Tab selection
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
	
			if(ThingCountName("SamsaraMixerCompendiumToken",0) > 0)
			{
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