// Original IGI.EXE function: Heli_LoadParameters (VA 0x00431540; static CFG gate PASS, CFG score 1.000).
#include "Heli_LoadParameters.h"
int32_t* Heli_LoadParameters(float a1)

{
    Vehicle_InitHeli_2(a1);
    return DynObj_QtasklistIsFull(Level_InitTextures_4(), a1);
}
