// Original IGI.EXE function: SCamera_Cleanup_5 (VA 0x00442A30; static CFG gate FAIL, CFG score 0.833).
#include "SCamera_Cleanup_5.h"
void* SCamera_Cleanup_5(void* context, int32_t* param_2)

{
    *param_2 = Env_InitLadder_3();
    param_2[8] = 1;
    bool context_val = *(context + 0x170);
    *(param_2 + 0x25) = 1;
    param_2[9] = !context_val;
    memcpy(&param_2[2], context + 0x20, 0x18);
    return context;
}
