// Original IGI.EXE function: AIFunction_SetInstantDeath (VA 0x0044E1B0; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetInstantDeath.h"
int32_t AIFunction_SetInstantDeath(int32_t context, float param_2 )

// Sig: void AIFunction_SetInstantDeath(int onOff)
// Note: When on, any hit instantly kills this AI (no damage pooling). Param:
// onOff = 1 one-shot kills, 0 normal health. Use for scripted one-shot enemies.
{
    *(g_5bda58 + 0x3abd) = !Script_GetArg(param_2, 0);
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
