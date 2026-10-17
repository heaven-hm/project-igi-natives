// Original IGI.EXE function: HumanPlayer_CheckCollision_7 (VA 0x0040F280; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckCollision_7.h"
int32_t HumanPlayer_CheckCollision_7(void* context, int32_t* param_2)

{
    char result = AI_CheckSector_22(param_2[0x13b]);

    if (result)
    {
        int32_t* data_1 = HumanPlayer_UpdateMotion_11(param_2, param_2[0x353]);

        if (data_1)
            Script_ExecuteLevelScript_12(&param_2[0x131], nullptr, data_1);

        param_2[0x353] = 0xffffffff;
        HumanPlayer_CheckCollision_9(param_2, 1.40129846e-44.0f);
        result = AI_SelectTarget_22(param_2[0x13b], 0.0f, 0, 0x3d6e4bae, 0x3d082b3f);
        *(context + 0x14) = HumanPlayer_ApplyRecoil_7;
    }

    return result;
}
