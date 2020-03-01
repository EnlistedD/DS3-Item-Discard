#pragma once

#include <iostream>
#include <Windows.h>

struct OffsetStruct 
{
	DWORD paramOff;
	DWORD finalOff;
	DWORD editOff;
};

BOOL changeAllParamDiscard(HANDLE pHandle, OffsetStruct paramOffs, BYTE binaryVal);
BOOL inputHandler(int * varAddr);
int main();