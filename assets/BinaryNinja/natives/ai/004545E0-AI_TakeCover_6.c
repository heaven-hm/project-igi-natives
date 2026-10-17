// Original IGI.EXE function: AI_TakeCover_6 (VA 0x004545E0; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_6.h"
void* AI_TakeCover_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 1;
    Bones_PlayAnimation(param_2 + 0x68, 0, *(FX_FragmentSimulate_14(param_2 + 0x254, *(param_2 + 0x2e8)) + 4), 0, 0.0f);
    void* result = FX_TrailUpdate_15(param_2);
    *(context + 0x14) = AI_UpdateOrders_6;
    return result;
}
