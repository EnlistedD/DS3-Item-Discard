#include "DS3 DLL Discard.h"

int main()
{
	//Start Console
	CreateConsole();

	//Vars
	bool programActive = true;
	DWORD64 procModule = NULL;
	DWORD invalidItemsFound = NULL;
	DWORD currentAmtOfItems;
	DWORD recentAmount = NULL;
	bool isStorageBox = false;
	DWORD64 temporaryPtr;

	//Param Offset Declarations
	OffsetStruct goodsParam =
	{
		0x148,
		0x0000F7F0,
		0x45,
	};

	OffsetStruct protectorParam =
	{
		0xB8,
		0x0003D4D8,
		0xDF,
	};

	OffsetStruct weaponParam =
	{
		0x70,
		0x00183EC8,
		0x105,
	};

	OffsetStruct accessoryParam =
	{
		0x100,
		0x00003E38,
		0x3C,
	};

	do
	{
		procModule = (DWORD64)GetModuleHandleA("DarkSoulsIII.exe");
	} while (procModule == NULL);

	//Main Loop
	while (programActive)
	{
		//Prepare Input
		int userInput;
		char charInput;

		printf_s("Welcome To DS3 Item Discard, Please Load A Character And Select What You'd Like To Do:\n"
			"1. Allow Discard Through Item Params\n"
			"2. Scan Entire Inventory For Invalid Items\n"
			"3. List Recently Acquired Items\n"
			"4. Fix Other Cheats (Such As Infinite Death Loop)\n"
			"5. Mod Information\n"
			"6. Exit Program\n");

		//Validate Input
		if (!inputHandler(&userInput))
		{
			do
			{
				system("cls");
				printf_s("Error! Invalid Input Was Detected, Please Reenter Choice:\n"
					"1. Allow Discard Through Item Params\n"
					"2. Scan Entire Inventory For Invalid Items\n"
					"3. List Recently Acquired Items\n"
					"4. Fix Other Cheats (Such As Infinite Death Loop)\n"
					"5. Mod Information\n"
					"6. Exit Program\n");
			} while (!inputHandler(&userInput));
		}

		system("cls");

		switch (userInput)
		{
		case 1:		//Modify Param Discard Values

			printf_s("Params Are Being Patched, Please Wait...\n");

			if (changeAllParamDiscard(procModule, goodsParam, 8))
				printf_s("The Goods Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Goods)! Program Failed To Read Param Memory...\n");

			if (changeAllParamDiscard(procModule, protectorParam, 1))
				printf_s("The Protector Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Protector)! Program Failed To Read Param Memory...\n");

			if (changeAllParamDiscard(procModule, weaponParam, 2))
			{
				//Display Success Message
				printf_s("The Weapon Param Was Patched Successfully!\n");

				//Patch Problematic Item
				DWORD itemBuffer[28];
				validateItem(itemBuffer, 0x00018128, 0x140E33420);

				temporaryPtr = itemBuffer[3];
				temporaryPtr <<= 0x20;
				temporaryPtr += itemBuffer[2];

				//Stack Size Change
				*(BYTE*)(temporaryPtr + 0x231) = (BYTE)99;
			}
			else
				printf_s("Error Occured (Weapon)! Program Failed To Read Param Memory...\n");

			if (changeAllParamDiscard(procModule, accessoryParam, 8))
				printf_s("The Accessory Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Accessory)! Program Failed To Read Param Memory...\n");

			printf_s("Params Patching Finished!\n");

			system("pause");

			break;
		case 2:		//Scan For Invalid Items
			printf_s("Alert! This feature will try to identify any invalid items in your inventory and allow you to delete them, although there\n"
				"is a chance that it could identify false positives. If there are any false positives then please make a bug report on Nexus mods\n"
				"with the item info listed in the console and I can figure out why that item was falsely flagged and fix it.\n"
				"Also you should double check your inventory after use of this feature to make sure it worked properly and that all of your invalid items were deleted.\n"
				"Would you like to continue and scan your inventory? (Y/N)");

			std::cin >> charInput;

			system("cls");

			switch (charInput)
			{
			case 'y':
			case 'Y':
				printf_s("[Inventory Scan]\n");
				invalidItemsFound = scanInventory(procModule, FALSE, FALSE);

				printf_s("[Storage Box Scan]\n");
				invalidItemsFound += scanInventory(procModule, FALSE, TRUE);

				if (invalidItemsFound)
				{
					//Check Invalid Return
					if (invalidItemsFound == (ErrorInvalidPtr * 2))
					{
						printf_s("Error scanning inventory! Program can't read character memory\n");
						break;
					}

					printf_s("\n\nScan completed successfully!\nWarning! %d invalid items were found in your inventory. Would you like to delete them? (Y/N)\n", invalidItemsFound);

					std::cin >> charInput;

					system("cls");

					switch (charInput)
					{
					case 'y':
					case 'Y':
						printf_s("[Inventory Deletion]\n");
						invalidItemsFound = scanInventory(procModule, TRUE, FALSE);

						printf_s("[Storage Box Deletion]\n");
						invalidItemsFound += scanInventory(procModule, TRUE, TRUE);

						printf_s("Success! %d invalid items were successfully deleted!\n", invalidItemsFound);
						break;
					default:
						printf_s("Invalid items were not deleted.\n");
					}
				}
				else
					printf_s("\n\nYour inventory was successfully scanned and no invalid items were detected!\n");

				break;
			default:
				printf_s("Your inventory was not scanned.\n");
				break;
			}

			system("pause");
			break;

		case 3:		//List Recently Aquired Items
			
			//Select Inventory Or Storage Box
			printf_s("Please select what you'd like to do:\n"
				"0. List Recent Inventory Items\n"
				"1. List Recent Storage Box Items\n");

			if (!inputHandler((int*)&isStorageBox))
			{
				printf_s("Error getting input! (Valid Input Example \"0\")\n");
				system("pause");
				break;
			}
			else if (isStorageBox < 0 || isStorageBox > 1)
			{
				printf_s("Error invalid choice selected!\n");
				system("pause");
				break;
			}

			system("cls");

			//Get Current Amount Of Items
			/*
			temporaryPtr = *(DWORD64*)(procModule + chrBase);
			if (temporaryPtr == NULL)
			{
				printf_s("Error pointer not readable (make sure you're on a loaded character)!\n");
				system("pause");
				break;
			}
			temporaryPtr = *(DWORD64*)(temporaryPtr + 0x10);
			if (temporaryPtr == NULL)
			{
				printf_s("Error pointer not readable (make sure you're on a loaded character)!\n");
				system("pause");
				break;
			}
			
			temporaryPtr = *(DWORD64*)(temporaryPtr + 0x470);
			temporaryPtr = *(DWORD64*)(temporaryPtr + 0x10);

			currentAmtOfItems = *(DWORD*)(temporaryPtr + 0x1C8);
			*/

			printf_s("Enter the amount of items you'd like to check (Min: 1, Max: 200)\n");

			//Get Input
			if (!inputHandler((int*)&recentAmount))
			{
				system("cls");
				printf_s("Error getting input! (Valid Input Example \"20\")\n");
				system("pause");
				break;
			}

			system("cls");

			//Check Valid Amount
			if (recentAmount < 1 || recentAmount > 200)
			{
				printf_s("Error, can't display list of less than 1 or greater than 100 items!\n");
				system("pause");
				break;
			}

			//Scan Inventory
			listRecentItems(procModule, recentAmount, isStorageBox);

			break;
		case 4:		//Fix For Dark Sun & Shadow Realm
			do
			{
				printf_s("Please select which of the following you'd like to do:\n"
					"0. Return To First Menu\n"
					"1. Fix Infinite Black Screen Death Loop (Resets Bonfire To Highwall)\n"
					"2. Fix Pontiff Dark Sun/Aldritch Soft Lock (Credit To LukeYui For Fix)\n");

				//Input Error Handling
				if (!inputHandler(&userInput))
				{
					do
					{
						printf_s("Error getting input! Please reselect which of the following you'd like to do:\n"
							"0. Return To First Menu\n"
							"1. Fix Infinite Black Screen Death Loop (Resets Bonfire To Highwall)\n"
							"2. Fix Pontiff Dark Sun/Aldritch Soft Lock (Credit To LukeYui For Fix)\n");
					} while (!inputHandler(&userInput));
				}

				system("cls");

				DWORD64 tempPtr;

				switch (userInput)
				{
				case 0:		//Exit Menu
					break;
				case 1:		//High Wall Of Lothric Bonfire Reset
					tempPtr = *(DWORD64*)(procModule + 0x4743AB0);
					*(DWORD*)(tempPtr + 0xACC) = 3002950;

					printf_s("Bonfire Reset Successfully! Next Time You Die, You Will Spawn At The High Wall\n");
					break;
				case 2:		//Fix Dark Sun
					printf_s("Alert! Using this option should fix the problem of the \"Dark Sun\" appearing at pontiff and Aldritch not being in the boss room\n"
						"This fix should be 100 percent safe to use, but in order to work, it will have to teleport you to the Anor Londo bonfire, after that the issue\n"
						"should be permanently fixed. Would you like to continue and teleport to Anor Londo? (Y/N) ");

					std::cin >> charInput;

					system("cls");

					switch (charInput)
					{
					case 'y':
					case 'Y':
						fixDarkSun();

						printf_s("Fix applied, you should teleport to the normal Anor Londo shortly, credit to u/LukeYui for creating this fix!\n");
						break;
					default:
						printf_s("Fix cancelled, you won't be teleported to Anor Londo\n");
					}

					break;
				default:
					printf_s("Invalid Menu Choice! Please Enter \"0\", \"1\" or \"2\"\n");
				}

				system("pause");
				system("cls");
			} while (userInput != 0);

			break;
		case 5:		//Basic Mod Information Program
			printf_s("Author: EnlistedD\n");
			printf_s("Mod Name: DS3 Item Discard\n");
			printf_s("Mod Version: V. 1.0.4\n");
			printf_s("A special thanks to u/LukeYui for help testing and help creating this mod\n");
			printf_s("\n\nFor more information about this mod or to submit bug reports, go to: www.nexusmods.com/darksouls3/mods/469\n");
			system("pause");
			break;
		case 6:		//Exit Program
			programActive = false;
			break;
		default:
			printf_s("Invalid Menu Choice! Please Enter \"1\", \"2\" or \"3\"\n");
			system("pause");
		}

		system("cls");
	}

	printf_s("Dll Exited Successfully! You May Now Close This Console Window.");

	FreeConsole();

	return 0;
}

void CreateConsole()
{
	AllocConsole();

	FILE* fp;

	freopen_s(&fp, "CONOUT$", "w", stdout);
	freopen_s(&fp, "CONIN$", "r", stdin);

	SetConsoleTitleA("DS3 Discard DLL Console");

}

BOOL inputHandler(int * varAddr)
{
	std::cin >> *varAddr;

	//If Invalid Input
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

		return FALSE;
	}

	return TRUE;
}

BOOL changeAllParamDiscard(DWORD64 pModule, OffsetStruct paramOffs, BYTE binaryVal)
{
	//Vars
	DWORD tempOffs[3] = { paramOffs.paramOff, 0x68, 0x68 };
	DWORD currentOffset = NULL, offsetRecord = 0x30;
	BYTE tempByte;

	//Get Base Address
	DWORD_PTR paramPtr = NULL;

	paramPtr = *(DWORD64*)(pModule + paramBase);

	if (paramPtr == NULL)
		return FALSE;

	//Offsets
	for (int i = 0; i < (sizeof(tempOffs) / 4); i++)
	{
		paramPtr = *(DWORD64*)(paramPtr + tempOffs[i]);

		if (paramPtr == NULL)
			return FALSE;
	}

	//Patch Param
	do
	{
		//Get Offset
		currentOffset = *(DWORD64*)(paramPtr + offsetRecord);

		offsetRecord += 0x18;

		if (currentOffset == NULL)
			continue;

		//Get New Value
		tempByte = *(BYTE*)(paramPtr + (currentOffset + paramOffs.editOff));

		tempByte = tempByte | binaryVal;

		//Write New Value
		*(BYTE*)(paramPtr + (currentOffset + paramOffs.editOff)) = tempByte;

	} while (currentOffset != paramOffs.finalOff);

	return TRUE;
}

DWORD scanInventory(DWORD64 pModule, BOOL deleteFlag, BOOL isStorageBox)
{
	//Vars
	DWORD64 tempPtr = NULL, tempPtr2 = NULL, startAddr = NULL;
	DWORD maxItems, itemCount = NULL, offsetRec = NULL, invalidItemAmt = NULL;

	//Get Pointers
	tempPtr = *(DWORD64*)(pModule + chrBase);

	if (tempPtr == NULL)
		return ErrorInvalidPtr;
	
	tempPtr = *(DWORD64*)(tempPtr + 0x10);

	if (tempPtr == NULL)
		return ErrorInvalidPtr;

	tempPtr2 = tempPtr;

	//Get Start Addr Based On Storage Box Or Not
	if (!isStorageBox)
	{
		tempPtr = *(DWORD64*)(tempPtr + 0x3E8);
		startAddr = tempPtr + 0x4;
	}
	else
	{
		tempPtr = *(DWORD64*)(tempPtr + 0x7B0);
		tempPtr = *(DWORD64*)(tempPtr + 0x48);
		startAddr = tempPtr + 0x4;
	}

	//Get Max Items
	tempPtr2 = *(DWORD64*)(tempPtr2 + 0x470);
	tempPtr2 = *(DWORD64*)(tempPtr2 + 0x10);

	maxItems = *(DWORD*)(tempPtr2 + 0x1BC);

	//Clear One Items List
	for (int i = 0; i < sizeof(onlyOneItems); i++)
		onlyOneItems[i] = false;

	//Loop To Scan For Items
	do
	{
		DWORD currentItem, itemType, itemUpgrade, currItemCopy, materialSetID, itemWOBuff;
		DWORD itemBuffer[28];

		//Item Valid Vars
		std::wstring itemName;
		DWORD64 itemNTemp;
		bool itemIsValid = true; //Start Iff Valid

		currentItem = *(DWORD*)(startAddr + offsetRec);
		currItemCopy = currentItem;

		if (currentItem == 0xFFFFFFFF)
		{
			itemCount++;
			offsetRec += 0x10;
			continue;
		}

		itemType = (currentItem & 0xF0000000);
		itemType >>= 0x1C;
		currentItem = (currentItem & 0x0FFFFFFF);

		//Get Item Name
		itemNTemp = getItemName(&currItemCopy);

		itemName = (wchar_t*)itemNTemp;

		switch (itemType)
		{
		case 0:		//Weapon
			validateItem(itemBuffer, currentItem, 0x140E33420);

			//Get Upgrade
			itemUpgrade = itemBuffer[0] - itemBuffer[4];

			//Get Name
			itemNTemp = getItemName(&itemBuffer[4]);

			itemName = (wchar_t*)itemNTemp;

			if (itemUpgrade != 0)
			{
				itemName += L"+";
				itemName += std::to_wstring(itemUpgrade);
			}

			/*
			printf_s("\nCurrently Scanning Weapon:\n"
				"Weapon ID: %08X\n"
				"Weapon ID+: %d\n"
				"Upgrade Level:%d\n"
				"Name: %ws\n", itemBuffer[0], itemBuffer[4], itemUpgrade, itemName.c_str());
			*/

			//Check Valid Param
			if ((DWORD64)itemBuffer[2] == NULL)
			{
				invalidItemAmt++;
				itemIsValid = false;

				if (!deleteFlag)
					printf_s("Weapon ID %08X Flagged, Reason: Doesn't Have A Valid Param ID (Name: %ws)\n\n", currItemCopy, itemName.c_str());
				else
					printf_s("Deleting Invalid Weapon ID %08X (Name: %ws) (Reason: Doesn't Have A Valid Param ID)\n\n", currItemCopy, itemName.c_str());

				//Delete Item If Flag Set
				if (!itemIsValid && deleteFlag)
					deleteItem((startAddr + (offsetRec - 0x4)));

				//Early Return Because These Items Cause Issues
				itemCount++;
				offsetRec += 0x10;

				continue;
			}

			//Get Rid Of Infusment & Upgrade Level For Check
			tempPtr = itemBuffer[3];
			tempPtr <<= 0x20;
			tempPtr += itemBuffer[2];

			itemWOBuff = *(DWORD*)(tempPtr + 0x5C);

			//Filter Out Which Have Invalid orgWeaponIDs
			if(itemWOBuff == 0xFFFFFFFF)
				itemWOBuff = currItemCopy;
			else
			{
				//printf_s("Weapon W/O Infusion/Buff: %d\n", itemWOBuff);

				//Get Buffer For Item W/O Upgrade & Infusion
				validateItem(itemBuffer, itemWOBuff, 0x140E33420);
			}

			//If Item Hasn't Been Flagged; Check ID
			if (itemIsValid)
			{
				itemIsValid = false;

				//Check Valid ID
				for (int i = 0; i < (sizeof(validWeapon) / 4); i++)
				{
					if (itemWOBuff == validWeapon[i])
					{
						itemIsValid = true;
						break;
					}
				}

				//If Item Isn't Valid After Scan
				if (!itemIsValid)
				{
					invalidItemAmt++;

					if (!deleteFlag)
						printf_s("Weapon ID %08X Flagged, Reason: Not On Valid Item List (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Weapon ID %08X (Name: %ws) (Reason: Not On Valid Item List)\n\n", currItemCopy, itemName.c_str());
				}
			}

			//Get Upgrade Material
			if (itemIsValid)
			{
				tempPtr = itemBuffer[3];
				tempPtr <<= 0x20;
				tempPtr += itemBuffer[2];

				materialSetID = *(DWORD*)(tempPtr + 0x58);
				//printf_s("Material Set ID: %d\n\n", materialSetID);
			}

			//Check Upgrade Level
			if (materialSetID == 0 && itemIsValid)
			{
				if (itemUpgrade > 10)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Weapon ID %08X Flagged, Reason: Invalid Upgrade Level (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Weapon ID %08X (Name: %ws) (Reason: Invalid Upgrade Level)\n\n", currItemCopy, itemName.c_str());
				}
			}
			else
			{
				if (itemUpgrade > 5 && itemIsValid)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Weapon ID %08X Flagged, Reason: Invalid Upgrade Level (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Weapon ID %08X (Name: %ws) (Reason: Invalid Upgrade Level)\n\n", currItemCopy, itemName.c_str());
				}
			}

			break;
		case 1:		//Armour
			validateItem(itemBuffer, currentItem, 0x140E2C980);

			//Check Valid Param
			if ((DWORD64)itemBuffer[2] == NULL)
			{
				invalidItemAmt++;
				itemIsValid = false;

				if(!deleteFlag)
					printf_s("Armour ID %08X Flagged, Reason: Doesn't Have A Valid Param ID (Name: %ws)\n\n", currItemCopy, itemName.c_str());
				else
					printf_s("Deleting Invalid Armour ID %08X (Name: %ws) (Reason: Doesn't Have A Valid Param ID)\n\n", currItemCopy, itemName.c_str());
			}

			if (itemIsValid)
			{
				itemIsValid = false;

				//Check Valid ID
				for (int i = 0; i < (sizeof(validArmour) / 4); i++)
				{
					if (currItemCopy == validArmour[i])
					{
						itemIsValid = true;
						break;
					}
				}

				//If Item Isn't Valid After Check
				if (!itemIsValid)
				{
					invalidItemAmt++;

					if(!deleteFlag)
						printf_s("Armour ID %08X Flagged, Reason: Not On Valid Item List (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Armour ID %08X (Name: %ws) (Reason: Not On Valid Item List)\n\n", currItemCopy, itemName.c_str());
				}
			}

				break;
		case 2:		//Accessory
			validateItem(itemBuffer, currentItem, 0x140E16A50);

			//Check Valid Param
			if ((DWORD64)itemBuffer[2] == NULL)
			{
				invalidItemAmt++;
				itemIsValid = false;

				if(!deleteFlag)
					printf_s("Accessory ID %08X Flagged, Reason: Doesn't Have A Valid Param ID (Name: %ws)\n\n", currItemCopy, itemName.c_str());
				else
					printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Doesn't Have A Valid Param ID)\n\n", currItemCopy, itemName.c_str());
			}

			if (itemIsValid)
			{
				itemIsValid = false;

				for (int i = 0; i < (sizeof(validAccessory) / 4); i++)
				{
					if (currItemCopy == validAccessory[i])
					{
						itemIsValid = true;
						break;
					}
				}

				//If Item Isn't Valid After Check
				if (!itemIsValid)
				{
					invalidItemAmt++;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Not On Valid Item List (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Not On Valid Item List)\n\n", currItemCopy, itemName.c_str());
				}
			}

			//Check Items That Can Only Occur Once
			switch (currItemCopy)
			{
			case 0x2000274C: //WOB Covenant
				if (onlyOneItems[4] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[4] = true;
				}
				break;
			case 0x20002738: //WOS Covenant
				if (onlyOneItems[5] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[5] = true;
				}
				break;
			case 0x20002710: //DMB Covenant
				if (onlyOneItems[6] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[6] = true;
				}
				break;
			case 0x20002724: //WOF Covenant
				if (onlyOneItems[7] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[7] = true;
				}
				break;
			case 0x2000272E: //AF Covenant
				if (onlyOneItems[8] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[8] = true;
				}
				break;
			case 0x20002742: //MM Covenant
				if (onlyOneItems[9] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[9] = true;
				}
				break;
			case 0x20002756: //BS Covenant
				if (onlyOneItems[10] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[10] = true;
				}
				break;
			case 0x20002760: //RF Covenant
				if (onlyOneItems[11] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[11] = true;
				}
				break;
			case 0x2000276A: //SOTC Covenant
				if (onlyOneItems[12] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Accessory ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Accessory ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[12] = true;
				}
				break;
			}

			break;
		case 4:		//Goods
			validateItem(itemBuffer, currentItem, 0x140E22270);

			//Check Valid Param
			if ((DWORD64)itemBuffer[2] == NULL)
			{
				invalidItemAmt++;
				itemIsValid = false;

				if(!deleteFlag)
					printf_s("Item ID %08X Flagged, Reason: Doesn't Have A Valid Param ID (Name: %ws)\n\n", currItemCopy, itemName.c_str());
				else
					printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Doesn't Have A Valid Param ID)\n\n", currItemCopy, itemName.c_str());
			}

			if (itemIsValid)
			{
				itemIsValid = false;

				for (int i = 0; i < (sizeof(validGoods) / 4); i++)
				{
					if (currItemCopy == validGoods[i])
					{
						itemIsValid = true;
						break;
					}
				}

				//If Item Isn't Valid After Check
				if (!itemIsValid)
				{
					invalidItemAmt++;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Not On Valid Item List (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Not On Valid Item List)\n\n", currItemCopy, itemName.c_str());
				}
			}

			switch (currItemCopy)
			{
			case 0x40000096: //:Estus Flask
			case 0x40000097: //:Estus Flask
			case 0x40000098: //:Estus Flask+1
			case 0x40000099: //:Estus Flask+1
			case 0x4000009A: //:Estus Flask+2
			case 0x4000009B: //:Estus Flask+2
			case 0x4000009C: //:Estus Flask+3
			case 0x4000009D: //:Estus Flask+3
			case 0x4000009E: //:Estus Flask+4
			case 0x4000009F: //:Estus Flask+4
			case 0x400000A0: //:Estus Flask+5
			case 0x400000A1: //:Estus Flask+5
			case 0x400000A2: //:Estus Flask+6
			case 0x400000A3: //:Estus Flask+6
			case 0x400000A4: //:Estus Flask+7
			case 0x400000A5: //:Estus Flask+7
			case 0x400000A6: //:Estus Flask+8
			case 0x400000A7: //:Estus Flask+8
			case 0x400000A8: //:Estus Flask+9
			case 0x400000A9: //:Estus Flask+9
			case 0x400000AA: //:Estus Flask+10
			case 0x400000AB: //:Estus Flask+10
				if (onlyOneItems[0] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[0] = true;
				}
				break;
			case 0x400000BE: //:Ashen Estus Flask
			case 0x400000BF: //:Ashen Estus Flask
			case 0x400000C0: //:Ashen Estus Flask+1
			case 0x400000C1: //:Ashen Estus Flask+1
			case 0x400000C2: //:Ashen Estus Flask+2
			case 0x400000C3: //:Ashen Estus Flask+2
			case 0x400000C4: //:Ashen Estus Flask+3
			case 0x400000C5: //:Ashen Estus Flask+3
			case 0x400000C6: //:Ashen Estus Flask+4
			case 0x400000C7: //:Ashen Estus Flask+4
			case 0x400000C8: //:Ashen Estus Flask+5
			case 0x400000C9: //:Ashen Estus Flask+5
			case 0x400000CA: //:Ashen Estus Flask+6
			case 0x400000CB: //:Ashen Estus Flask+6
			case 0x400000CC: //:Ashen Estus Flask+7
			case 0x400000CD: //:Ashen Estus Flask+7
			case 0x400000CE: //:Ashen Estus Flask+8
			case 0x400000CF: //:Ashen Estus Flask+8
			case 0x400000D0: //:Ashen Estus Flask+9
			case 0x400000D1: //:Ashen Estus Flask+9
			case 0x400000D2: //:Ashen Estus Flask+10
			case 0x400000D3: //:Ashen Estus Flask+10
				if (onlyOneItems[1] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[1] = true;
				}
				break;
			case 0x40000067: //:Black Separation Crystal
				if (onlyOneItems[2] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[2] = true;
				}
				break;
			case 0x40000075: //:Darksign
				if (onlyOneItems[3] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[3] = true;
				}
				break;
			case 0x40000064: //:White Sign Soapstone
				if (onlyOneItems[13] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[13] = true;
				}
				break;
			case 0x40000065: //:Red Sign Soapstone
				if (onlyOneItems[14] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[14] = true;
				}
				break;
			case 0x40000066: //:Red Eye Orb
				if (onlyOneItems[15] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[15] = true;
				}
				break;
			case 0x4000006C: //:Roster of Knights
				if (onlyOneItems[16] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[16] = true;
				}
				break;
			case 0x40000073: //:Black Eye Orb
				if (onlyOneItems[17] == true)
				{
					invalidItemAmt++;
					itemIsValid = false;

					if(!deleteFlag)
						printf_s("Item ID %08X Flagged, Reason: Too many in inventory (Name: %ws)\n\n", currItemCopy, itemName.c_str());
					else
						printf_s("Deleting Invalid Item ID %08X (Name: %ws) (Reason: Too many in inventory)\n\n", currItemCopy, itemName.c_str());
				}
				else
				{
					onlyOneItems[17] = true;
				}
				break;
			}

			break;
		}

		//Delete Item If Flag Set
		if (!itemIsValid && deleteFlag)
			deleteItem((startAddr + (offsetRec - 0x4)));

		itemCount++;
		offsetRec += 0x10;
	} while (itemCount != maxItems);

	return invalidItemAmt;
}

DWORD listRecentItems(DWORD64 pModule, DWORD amount, BOOL isStorageBox)
{
	//Vars
	DWORD64 tempPtr = NULL, tempPtr2 = NULL, startAddr = NULL;
	DWORD maxItems, currentItemAmt, itemCount = NULL, itemAmtRecord = NULL, currentItem, itemUpgrade;
	DWORD itemBuffer[28]; //For Weapons

	//Create Arrays For Scanned Item Addrs
	DWORD64 * recentItemAddrs = new DWORD64[amount];
	std::wstring * itemNameRecord = new std::wstring[amount];

	//Clear Previous Address List
	//for (int i = 0; i < (sizeof(recentItemAddrs) / 8); i++)
		//recentItemAddrs[i] = 0x0;

	tempPtr = *(DWORD64*)(pModule + chrBase);
	if (tempPtr == NULL)
	{
		delete[] recentItemAddrs;
		delete[] itemNameRecord;
		return ErrorInvalidPtr;
	}

	tempPtr = *(DWORD64*)(tempPtr + 0x10);
	if (tempPtr == NULL)
	{
		delete[] recentItemAddrs;
		delete[] itemNameRecord;
		return ErrorInvalidPtr;
	}

	tempPtr2 = tempPtr;

	//Get Start Addr Based On Storage Box Or Not
	if (!isStorageBox)
	{
		tempPtr = *(DWORD64*)(tempPtr + 0x3E8);
		startAddr = tempPtr + 0x4;
	}
	else
	{
		tempPtr = *(DWORD64*)(tempPtr + 0x7B0);
		tempPtr = *(DWORD64*)(tempPtr + 0x48);
		startAddr = tempPtr + 0x4;
	}

	//Get Max Items
	tempPtr2 = *(DWORD64*)(tempPtr2 + 0x470);
	tempPtr2 = *(DWORD64*)(tempPtr2 + 0x10);

	currentItemAmt = *(DWORD*)(tempPtr2 + 0x1C8);
	maxItems = *(DWORD*)(tempPtr2 + 0x1BC);

	currentItemAmt -= 2; //Has Two Extra Items For Some Reason

	//Make Sure Item Amount Isn't Greater Than Selected Amount
	if (amount > currentItemAmt)
	{
		printf_s("Error! Amount selected (%d) is greater than the current amount of items in your inventory (%d)\n", amount, currentItemAmt);
		system("pause");

		delete[] recentItemAddrs;
		delete[] itemNameRecord;
		return FALSE;
	}

	itemAmtRecord = (maxItems-1);

	//List Most Recently Required Items
	while (itemCount != amount)
	{
		//Get & Validate Current Item
		currentItem = *(DWORD*)(startAddr + (itemAmtRecord * 0x10));

		if (currentItem == 0xFFFFFFFF)
		{
			itemAmtRecord--;
			continue;
		}

		std::wstring itemName;

		//Check Is Weapon
		if ((currentItem & 0xF0000000) >> 0x1C == 0)
		{
			validateItem(itemBuffer, currentItem, 0x140E33420);

			//Get Upgrade
			itemUpgrade = itemBuffer[0] - itemBuffer[4];

			//Get Item Name
			tempPtr = getItemName(&itemBuffer[4]);

			itemName = (wchar_t*)tempPtr;

			if (itemUpgrade != 0)
			{
				itemName += L"+";
				itemName += std::to_wstring(itemUpgrade);
			}

			itemNameRecord[itemCount] = itemName;
		}
		else
		{
			//Get Item Name
			tempPtr = getItemName(&currentItem);

			itemName = (wchar_t*)tempPtr;

			itemNameRecord[itemCount] = itemName;
		}

		//Save Address
		recentItemAddrs[itemCount] = (DWORD64)(startAddr + ((itemAmtRecord * 0x10) - 4));

		itemCount++;

		//Display Item
		//printf_s("Recent Item %d: %ws (ID: %08X) (DEBUG ADDR: %016llX)\n", itemCount, itemName.c_str(), currentItem, recentItemAddrs[itemCount-1]);
		printf_s("Recent Item %d: %ws (ID: %08X)\n", itemCount, itemName.c_str(), currentItem);

		itemAmtRecord--;
	}

	printf_s("\n\nProgram Sucessfully Finished Printing Out Recent Items!\n");
	printf_s("\nPLEASE NOTE! If you scanned far back enough (far back to the point where you see your original armour\n");
	printf_s("and original estus flask) you may see 1 ?GoodsName? item and a few \"Fists\" items\n");
	printf_s("deletion of these items are not recommended as these items automatically spawn in your inventory when\n");
	printf_s("you create a new character.\n\n");

	printf_s("If You Wish To Delete Any Items, Type the number of the recently scanned item");
	printf_s("(Example: \"1\" would delete \"%ws\")\n", itemNameRecord[0].c_str());
	printf_s("Otherwise, type \"0\" to return to first menu\n");

	//Allow Deletion Of Items
	int userInput = 1;
	char confirmDelete;

	while (userInput != 0)
	{
		//Error Handling
		if (!inputHandler(&userInput))
		{
			printf_s("\nError! Please reenter input: ");
			continue;
		}
		else if (userInput < 0 || userInput > amount)
		{
			printf_s("\nError! Can't enter a number less than 0 or greater than selected amount! Please reenter input:");
			continue;
		}
		else if (userInput == 0)
			break;

		printf_s("You have chosen to delete item number %d (Name: %ws), are you sure you'd like to delete this item? (Y/N) ", userInput, itemNameRecord[userInput-1].c_str());

		std::cin >> confirmDelete;

		switch (confirmDelete)
		{
		case 'y':
		case 'Y':
			deleteItem(recentItemAddrs[userInput-1]);

			printf_s("\nItem deleted successfully!\n");

			break;
		default:
			printf_s("\nItem was not deleted\n");
		}
	}

	delete[] recentItemAddrs;
	delete[] itemNameRecord;

	return TRUE;
}