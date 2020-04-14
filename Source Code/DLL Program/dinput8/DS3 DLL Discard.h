#pragma once

#include <Windows.h>
#include <iostream>
#include <string>
#include "ItemScan.h"

#define paramBase 0x4782838
#define chrBase 0x4740178
#define ErrorInvalidPtr 0xF001

struct OffsetStruct
{
	DWORD paramOff;
	DWORD finalOff;
	DWORD editOff;
};

//extern DWORD64 recentItemAddrs[100];

extern "C" VOID validateItem(DWORD * returnBuffer, DWORD itemID, DWORD64 callAddr);
extern "C" VOID deleteItem(DWORD64 deleteAddr);
extern "C" VOID fixDarkSun();

void CreateConsole();
BOOL changeAllParamDiscard(DWORD64 pModule, OffsetStruct paramOffs, BYTE binaryVal);
DWORD scanInventory(DWORD64 pModule, BOOL deleteFlag, BOOL isStorageBox);
DWORD listRecentItems(DWORD64 pModule, DWORD amount);
BOOL inputHandler(int * varAddr);
int main();