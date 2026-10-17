// Original IGI.EXE function: Heli_LoadParameters (VA 0x00431540; static CFG gate PASS, CFG score 1.000).
#include "Heli_LoadParameters.h"
int32_t* Heli_LoadParameters(float context)

{
    Vehicle_InitHeli_2(context);
    return DynObj_QtasklistIsFull(Level_InitTextures_4(), context);
}
