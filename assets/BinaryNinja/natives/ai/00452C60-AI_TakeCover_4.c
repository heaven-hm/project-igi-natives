// Original IGI.EXE function: AI_TakeCover_4 (VA 0x00452C60; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_4.h"
int32_t* AI_TakeCover_4(void* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t* result = AI_FireWeapon_4(*(context + 0x50), param_2);

    if (!result)
    {
        result = g_58a9e8;

        if (*result)
        {
            Camera_ApplyHandiCam_33(result);
            result[1] = 0;
            *result = 0;
            Camera_SetFieldOfView_33(&g_57d768, result);
            void* data_2 = Script_ExecuteLevelScript_23(context, param_2);
            result[4] = 0;
            result[2] = *(context + 0x50);
            result[3] = param_2;
            result[5] = *(data_2 + 0x28) * 0.5f;
            result[6] = *(data_2 + 0x28) * 0.5f;
        }

        if (!*result || !result)
            return 0;
    }

    result[4] += 1;
    AI_CheckHearing_4(result, param_3, param_4, 1);
    return result;
}
