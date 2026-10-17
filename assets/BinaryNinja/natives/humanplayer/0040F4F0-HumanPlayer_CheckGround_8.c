// Original IGI.EXE function: HumanPlayer_CheckGround_8 (VA 0x0040F4F0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckGround_8.h"
int32_t HumanPlayer_CheckGround_8(void* context, void* param_2)

{
    int32_t flagP = *(param_2 + 0x4ec);
    void* data_1;
    int32_t entity_val;
    data_1 = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t temp_val;
    void* data_2 = HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1);
    Bones_PlayAnimation(flagP + 0x68, 0, *(data_2 + 0x684), 0, 0.0f);
    long double fpu_val_7_1 = **(SoundSys_EvaluateTrigger_18(data_2 + 0x61c) + 0x2d4) * 30.0f;
    *(param_2 + 0x4d8) = 0;
    *(param_2 + 0x4e0) = 0;
    *(param_2 + 0x4e4) = 0;
    int32_t result = fpu_val_7_1;
    *(param_2 + 0x4dc) = result;
    *(context + 0x14) = HumanPlayer_GrenadeTick1;
    return result;
}
