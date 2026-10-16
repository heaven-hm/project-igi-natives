#include "0042E160-Car_LoadParameters.h"
/* 0x0042e160 Car_LoadParameters full linked: callers=0 callees=3 */
int32_t* Car_LoadParameters(float a1)

{
    Menu_UpdateLanguage_22(a1);
    return sub_4c1790(Level_InitTextures_4(), a1);
}
