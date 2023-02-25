# RDR1-Custom-Weapons-Online
-2/23/2023 added ps3 mem pointer to block auto delete weps. ER bypassed is still needed for this to work properly
however this mem pointer makes some of the weps show up just fine.

This is the source code to get "custom" weapons online in freeroam as well as mp gamemodes.
- Video Example of These Weapons: https://www.youtube.com/watch?v=DyH6BAyp--Q



This should work on any rdr version (so long as undead dlc is installed or using undead nightmare base game)
- The "custom" weapons are abusing undead weapon structs, so as is, this replaces most undead weapons with the newer custom weapons
- You must ER Bypass at mainmenu to use all weapons.
- ALSO you can only use this or undead weapons, you can't use normal undead weapons and these custom weapons at the same time.
- That's because custom weapons replace undead weapons, anytime in game if you wanna swap to diff weapon types such as normal undead weapons. You will have to full reboot your game and launch only undead weapons script as a example.

# Weapons You Get
- Colt - This is a cut weapon with a custom name I used - model: revolver_walker01x - change 01 to 02 for always gold version
- Rustler - This is a cut weapon with a custom name I used - model: revolver_topbreak01x - change 01 to 02 for always gold version
- The Pirate - This is a custom weapon using a unused/cut string for a MP title - model: p_gen_cannonball01x
- Pyro - This is a cut weapon?? with a custom name I used - model: throw_lantern01x
- Zombie Spit - normal undead weapon, must force in your hand to use.
- Torch - normal undead weapon
- This is a work in progress so this may be updated in the future.



- This script should work fine on a retail console via iso modding (xbox 360), so long as you remove the memory pointer from the script.

- Video on how to ER Bypass works pretty much the same on xbox 360 and ps3: https://www.youtube.com/watch?v=JeBuLUAxGUE
- At mainmenu where it says press start, just unplug your ethernet cable and press start at the same time, replug ethernet cable back in, wait 10-15 seconds and sign back into xbl/psn then go online and if you spawn with the explosive rifle (er) then you did it correctly.

Created By CabooseSayzWTF

Help From Sockstress, ImFoxxyyy & Cain532
Socktress originally gave a example for how a weapon struct worked in the undead weapons online, so he majorly helped get that made, and that's why he is mentioned here. Cain and Foxxyyy have helped more than they know with native documentation, examples, and answering any questions i've had. Which is why they get a honerable mention here!
