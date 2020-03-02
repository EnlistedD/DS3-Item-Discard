# DS3-Item-Discard
# A Huge Thanks To u/LukeYui For DLL Template & Help With Invalid Item Scan Feature In The DLL

# NOTE: I Highly Recommend Creating A Game Back-up Before Using This Program To Be Sure That No Mistakes Occur And This Program Works Properly For You (While This Program Should Be Safe To My Knowledge, Use In Offline Mode Is Highly Recommended For Extra Pre-caution).

# Program Is Also Available On Nexus Mods: https://www.nexusmods.com/darksouls3/mods/469

# How Do I Prevent Cheaters From Giving Me Invalid Items?
The best way to prevent cheaters from giving you any invalid items and stop other cheats is to download the DS3 PVP Watchdog mod available at Nexus Mods (Link: https://www.nexusmods.com/darksouls3/mods/352)

# What Is DS3 Item Discard?
DS3 Item Discard is a program created for the game Dark Souls III by me with the help of (u/LukeYui) that allows you to discard any item that you have in your inventory.

# Why Should I Use DS3 Item Discard?
Unfortunately a variety of items exist within Dark Souls III which are considered invalid by the game and will get you banned if you keep them in your inventory and some of these invalid items don't have the option to be discarded or left on the ground which is a huge problem for regular players as it means cheaters can give them these invalid items in an attempt to get them falsely banned from the game, to try and counter this I decided to make an easy to use program for regular players which will change the discardable state of all items in the game so that they can be discarded.

# How Do I Use This Program?
Information about how to use this program is located in the "readme.txt" file located in the program files folder.

# How Does This Program Work?
This program edits the game's "param" memory regions for all of the params that have to do with items in the game, a game "param" is a region of the game's memory which contains variables for many different things such as item cost, effect ids, ect. and I decided that the best idea for creating a program that lets you discard all items in the game would be to edit the "isDiscardable" variable in item params for all of the items in the game.

# Is This Program Safe To Use?
Yes this program should be 100% safe to use to my knowledge as the game's param memory regions are only temporary data that's reset every time you restart the game so no data modified in them is saved and params are not checked by the game's anti cheat, although I highly encourage you to be cautious using ANY external program/mod that modifies DS3 in any way and as so, I made this program 100% open source and I highly encourage you to take a look at the source code and excercise caution if you are worried at all about using this program (such as only using this program while in offline mode).

# What Should I Do If I Run This Program And Still Can't Discard An Item That's Invalid?
If you have an issue with not being able to discard an item after using option one ("1. Allow Discard Through Item Params"), then you should run the second option (2. Scan For Invalid Items (Only Works For Invalid Param Items)) since the item is likely invalid and doesn't exist within the game's params (NOTE: This option is only available in the DLL version of the program and in the "Invalid Item Scan And Delete" Cheat Engine script file), if no invalid items are detected and you still can't discard the item then feel free to make a bug report and I can try to investigate the reason why you're not able to get rid of that item.
