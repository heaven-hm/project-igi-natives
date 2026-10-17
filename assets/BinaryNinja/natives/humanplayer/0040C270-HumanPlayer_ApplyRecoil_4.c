// Original IGI.EXE function: HumanPlayer_ApplyRecoil_4 (VA 0x0040C270; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyRecoil_4.h"
int32_t* HumanPlayer_ApplyRecoil_4(int32_t context, void* param_2)

{
    int32_t item_1c = 0xc;
    int32_t item_14 = 0x46;
    int32_t item_18 = *(param_2 + 0xfc);
    int32_t item_10 = 0x46a00000;
    int32_t item_c = DynObj_UpdateDynTree_4(param_2);
    int32_t item_8 = context;
    void* item_4 = param_2;
    return AI_EventBroadcast(&item_1c);
}
