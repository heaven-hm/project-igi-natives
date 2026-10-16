#include "gi_platform.h"
#include "00431540-Heli_LoadParameters.h"
int32_t* Heli_LoadParameters(float a1)

{
    Vehicle_InitHeli_2(a1);
    return DynObj_QtasklistIsFull(Level_InitTextures_4(), a1);
}
