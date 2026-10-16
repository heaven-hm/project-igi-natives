#include "00431540-Heli_LoadParameters.h"
/* 0x00431540 Heli_LoadParameters full linked: callers=0 callees=3 */
int32_t* Heli_LoadParameters(float a1)

{
    Vehicle_InitHeli_2(a1);
    return sub_4c1790(Level_InitTextures_4(), a1);
}
