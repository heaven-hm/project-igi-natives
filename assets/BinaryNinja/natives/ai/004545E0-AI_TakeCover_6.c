// Original IGI.EXE function: AI_TakeCover_6 (VA 0x004545E0; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_6.h"
void* AI_TakeCover_6(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 1;
    Bones_PlayAnimation(a2 + 0x68, 0, *(FX_FragmentSimulate_14(a2 + 0x254, *(a2 + 0x2e8)) + 4), 0, 0f);
    void* result = FX_TrailUpdate_15(a2);
    *(a1 + 0x14) = AI_UpdateOrders_6;
    return result;
}
