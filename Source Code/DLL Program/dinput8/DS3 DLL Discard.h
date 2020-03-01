#pragma once

#include <Windows.h>
#include <iostream>

#define paramBase 0x4782838
#define chrBase 0x4740178

struct OffsetStruct
{
	DWORD paramOff;
	DWORD finalOff;
	DWORD editOff;
};

extern "C" VOID validateItem(DWORD * returnBuffer, DWORD itemID, DWORD64 callAddr);
extern "C" VOID deleteItem(DWORD64 deleteAddr);

void CreateConsole();
BOOL changeAllParamDiscard(DWORD64 pModule, OffsetStruct paramOffs, BYTE binaryVal);
DWORD scanInventory(DWORD64 pModule, BOOL deleteFlag);
BOOL inputHandler(int * varAddr);
int main();