// Original IGI.EXE function: Binocular_LoadParameters (VA 0x00470760; static CFG gate PASS, CFG score 1.000).
#include "Binocular_LoadParameters.h"
int32_t* Binocular_LoadParameters(void* context, int32_t param_2)

{
    (*((Weapon_ComputeAccuracy_5() << 2) + &g_a96ae0))(context, param_2);
    Game_DataSymbolLoad(context + 0x104, "WEAPON_ID_BINOCULARS");
    *(context + 0x1b0) = 0;
    *(context + 0x1b4) = 0;
    *(context + 0x1b8) = 0;
    *(context + 0x1bc) = 0;
    int32_t* result = QTask_LinkEventHandler_2(Weapon_UpdateRecoil_2(context));
    *(context + 0x1c4) = 0;
    *(context + 0x1c0) = result;
    return result;
}
