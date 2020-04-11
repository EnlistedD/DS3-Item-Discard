#include "DS3 Item Discard.h"

int main()
{
	//Vars
	bool programActive = true;
	HWND darkWnd;
	DWORD PID = NULL;
	HANDLE pHandle = NULL;

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

	//Get Window & Open Process
	darkWnd = darkWnd = FindWindowA(NULL, "DARK SOULS III");

	if (!darkWnd)
	{
		int count = 5;

		do
		{
			printf_s("Searching for DS3 window, please start your game if it's not open, rechecking status in %d seconds...", count);
			Sleep(1000);
			system("cls");

			count--;

			if (count == 0)
			{
				darkWnd = FindWindowA(NULL, "DARK SOULS III");
				count = 5;
			}

		} while (!darkWnd);

		system("cls");
	}

	GetWindowThreadProcessId(darkWnd, &PID);

	if (PID == NULL)
	{
		printf_s("Error getting process ID! Program is exiting now...");
		Sleep(2000);
		return 0;
	}

	pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, PID);

	//Main Loop
	while (programActive)
	{
		//Prepare Input
		int userInput;

		printf_s("Welcome To DS3 Item Discard, Please Select What You'd Like To Do:\n"
			"1. Allow Discard Through Item Params\n"
			"2. Mod Information\n"
			"3. Exit Program\n");

		//Validate Input
		if (!inputHandler(&userInput))
		{
			do
			{
				system("cls");
				printf_s("Error! Invalid Input Was Detected, Please Reenter Choice:\n"
					"1. Allow Discard Through Item Params\n"
					"2. Mod Information\n"
					"3. Exit Program\n");
			} while (!inputHandler(&userInput));
		}

		system("cls");

		switch (userInput)
		{
		case 1:		//Modify Param Discard Values

			printf_s("Params Are Being Patched, Please Wait...\n");

			if (changeAllParamDiscard(pHandle, goodsParam, 8))
				printf_s("The Goods Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Goods)! Program Failed To Read Param Memory...\n");

			if (changeAllParamDiscard(pHandle, protectorParam, 1))
				printf_s("The Protector Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Protector)! Program Failed To Read Param Memory...\n");

			if (changeAllParamDiscard(pHandle, weaponParam, 2))
				printf_s("The Weapon Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Weapon)! Program Failed To Read Param Memory...\n");

			if (changeAllParamDiscard(pHandle, accessoryParam, 8))
				printf_s("The Accessory Param Was Patched Successfully!\n");
			else
				printf_s("Error Occured (Accessory)! Program Failed To Read Param Memory...\n");

			printf_s("Params Patching Finished!\n");

			system("pause");

			break;
		case 2:		//Basic Mod Information Program
			printf_s("Author: EnlistedD\n");
			printf_s("Mod Name: DS3 Item Discard\n");
			printf_s("Mod Version: V. 1.0.1\n");
			printf_s("A special thanks to u/LukeYui for help testing and help creating this mod\n");
			printf_s("\n\nFor more information about this mod or to submit bug reports, go to: www.nexusmods.com/darksouls3/mods/469\n");
			system("pause");
			break;
		case 3: 	//Exit Program
			programActive = false;
			break;
		default:
			printf_s("Invalid Menu Choice! Please Enter \"1\" or \"2\"\n");
			system("pause");
		}

		system("cls");
	}

	return 0;
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

BOOL changeAllParamDiscard(HANDLE pHandle, OffsetStruct paramOffs, BYTE binaryVal)
{
	//Vars
	DWORD tempOffs[3] = { paramOffs.paramOff, 0x68, 0x68};
	DWORD currentOffset = NULL, offsetRecord = 0x30;
	BYTE tempByte;

	//Get Base Address
	DWORD_PTR paramBase = 0x144782838;
	DWORD_PTR paramPtr; 

	if (!ReadProcessMemory(pHandle, (LPVOID)paramBase, &paramPtr, 8, NULL))
		return FALSE;

	//Offsets
	for (int i = 0; i < (sizeof(tempOffs) / 4); i++)
	{
		if (!ReadProcessMemory(pHandle, (LPVOID)(paramPtr + tempOffs[i]), &paramPtr, 8, NULL))
			return FALSE;
	}

	//Patch Param
	do
	{
		//Get Offset
		ReadProcessMemory(pHandle, (LPVOID)(paramPtr + offsetRecord), &currentOffset, 8, NULL);

		offsetRecord += 0x18;

		if (currentOffset == NULL)
			continue;

		//Get New Value
		ReadProcessMemory(pHandle, (LPVOID)(paramPtr + (currentOffset + paramOffs.editOff)), &tempByte, 1, NULL);

		tempByte = tempByte | binaryVal;

		//Write New Value
		WriteProcessMemory(pHandle, (LPVOID)(paramPtr + (currentOffset + paramOffs.editOff)), &tempByte, 1, NULL);

	} while (currentOffset != paramOffs.finalOff);

	return TRUE;
}