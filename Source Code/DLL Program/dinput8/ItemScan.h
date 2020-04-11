#pragma once

#include "DS3 DLL Discard.h"

extern DWORD validWeapon[2869];
extern DWORD validArmour[399];
extern DWORD validAccessory[125];
extern DWORD validGoods[400];
extern bool onlyOneItems[18];

extern "C" DWORD64 getItemName(DWORD * itemAddr);