// Original IGI.EXE function: HumanPlayer_LoadParameters_9 (VA 0x0040F370; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_LoadParameters_9.h"
void* HumanPlayer_LoadParameters_9(void* context, void* param_2)

{
    HumanPlayer_CheckCollision_9(param_2, 1.40129846e-45.0f);
    AI_AlertAllies_20(param_2);
    void* entity_val = *(param_2 + 0x2f0);
    *(param_2 + 0x2f8) = *(param_2 + 0x2fc);
    *(param_2 + 0x2fc) = 0x2c;
    int32_t data_1 = *(entity_val + 0xb0);
    *(param_2 + 0x300) = data_1;
    data_1(param_2 + 0x2ec, param_2);
    void* result = AI_SelectTarget_22(*(param_2 + 0x4ec), -0.610865235f, 0xbeb2b8c3, 0x3d6e4bae, 0x3d082b3f);
    *(context + 0x14) = sub_40f3f0;
    return result;
}
