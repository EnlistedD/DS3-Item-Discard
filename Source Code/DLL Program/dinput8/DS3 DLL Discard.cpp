#include "DS3 DLL Discard.h"

int main()
{
	//Start Console
	CreateConsole();

	//Vars
	bool programActive = true;
	DWORD64 procModule = NULL;
	DWORD invalidItemsFound = NULL;

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
			"2. Scan For Invalid Items (Only Works For Invalid Param Items)\n"
			"3. Exit Program\n");

		//Validate Input
		if (!inputHandler(&userInput))
		{
			do
			{
				system("cls");
				printf_s("Error! Invalid Input Was Detected, Please Reenter Choice:\n"
					"1. Allow Discard Through Item Params\n"
					"2. Scan For Invalid Items (Only Works For Invalid Param Items)\n"
					"3. Exit Program\n");
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
				printf_s("The Weapon Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Weapon)! Program Failed To Read Param Memory...\n");

			if (changeAllParamDiscard(procModule, accessoryParam, 8))
				printf_s("The Accessory Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Accessory)! Program Failed To Read Param Memory...\n");

			printf_s("Params Patching Finished!\n");

			system("pause");

			break;
		case 2:		//Scan For Invalid Param Items
			printf_s("Alert! This feature should only be used if you tried to discard the invalid item after using menu option 1 and it didn't work.\n"
				"This option will try to identify if your inventory contains any invalid items that don't exist within any game params and ask you permission to\n"
				"delete them through this program.\n"
				"Would you like to continue and scan your inventory? (Y/N)");

			std::cin >> charInput;

			system("cls");

			switch (charInput)
			{
			case 'y':
			case 'Y':
				invalidItemsFound = scanInventory(procModule, FALSE);

				if (invalidItemsFound)
				{
					printf_s("Warning! %d invalid items were found in your inventory. Would you like to delete them? (Y/N)\n", invalidItemsFound);

					std::cin >> charInput;

					system("cls");

					switch (charInput)
					{
					case 'y':
					case 'Y':
						invalidItemsFound = scanInventory(procModule, TRUE);
						printf_s("Success! %d invalid items were successfully deleted!\n", invalidItemsFound);
						break;
					default:
						printf_s("Invalid items were not deleted.\n");
					}
				}
				else
					printf_s("Your inventory was successfully scanned and no invalid param items were detected!\n");
					
				break;
			default:
				printf_s("Your inventory was not scanned.\n");
				break;
			}

			system("pause");
			break;
		case 3:		//Exit Program
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

DWORD scanInventory(DWORD64 pModule, BOOL deleteFlag)
{
	//Vars
	DWORD64 tempPtr = NULL, tempPtr2 = NULL, startAddr = NULL;
	DWORD maxItems, itemCount = NULL, offsetRec = NULL, invalidItemAmt = NULL;

	//Get Pointers
	tempPtr = *(DWORD64*)(pModule + chrBase);

	if (tempPtr == NULL)
		return 0xF001;
	
	tempPtr = *(DWORD64*)(tempPtr + 0x10);

	if (tempPtr == NULL)
		return 0xF001;

	tempPtr2 = tempPtr;

	//Start Addr
	tempPtr = *(DWORD64*)(tempPtr + 0x3E8);
	startAddr = tempPtr + 0x4;

	//Get Max Items
	tempPtr2 = *(DWORD64*)(tempPtr2 + 0x470);
	tempPtr2 = *(DWORD64*)(tempPtr2 + 0x10);

	maxItems = *(DWORD*)(tempPtr2 + 0x1BC);

	//Loop To Scan For Items
	do
	{
		DWORD currentItem, itemType;
		DWORD itemBuffer[28];

		currentItem = *(DWORD*)(startAddr + offsetRec);

		if (currentItem == 0xFFFFFFFF)
		{
			itemCount++;
			offsetRec += 0x10;
			continue;
		}

		itemType = (currentItem & 0xF0000000);
		itemType >>= 0x1C;
		currentItem = (currentItem & 0x0FFFFFFF);

		switch (itemType)
		{
		case 0:		//Weapon
			validateItem(itemBuffer, currentItem, 0x140E33420);
			break;
		case 1:		//Armour
			validateItem(itemBuffer, currentItem, 0x140E2C980);
			break;
		case 2:		//Accessory
			validateItem(itemBuffer, currentItem, 0x140E16A50);
			break;
		case 4:		//Goods
			validateItem(itemBuffer, currentItem, 0x140E22270);
			break;
		}

		if ((DWORD64)itemBuffer[2] == NULL)
		{
			if (deleteFlag)
			{
				deleteItem((startAddr + (offsetRec - 0x4)));
				invalidItemAmt++; //Keeps Record For Items Deleted W/ Flag Set
			}
			else
				invalidItemAmt++;
		}

		itemCount++;
		offsetRec += 0x10;
	} while (itemCount != maxItems);

	return invalidItemAmt;
}