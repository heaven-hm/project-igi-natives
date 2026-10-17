// Original IGI.EXE function: AIFunction_SetDeathAnimation (VA 0x0044E210; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetDeathAnimation.h"
int32_t AIFunction_SetDeathAnimation(int32_t context, float param_2 )

// Sig: void AIFunction_SetDeathAnimation(int animId)
// Note: Overrides the death animation played when this AI dies. Param: animId =
// animation entry id. Use in AI init for custom deaths.
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    void* entity_val = g_5bda58;
    int32_t item_18 = 1;
    *(entity_val + 0x3ad0) = data_1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
