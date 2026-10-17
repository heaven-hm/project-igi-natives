// Original IGI.EXE function: AI_TakeCover_4 (VA 0x00452C60; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_4.h"
int32_t* AI_TakeCover_4(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t* result = AI_FireWeapon_4(*(a1 + 0x50), a2);

    if (!result)
    {
        result = g_58a9e8;

        if (*result)
        {
            Camera_ApplyHandiCam_33(result);
            result[1] = 0;
            *result = 0;
            Camera_SetFieldOfView_33(&g_57d768, result);
            void* valA2 = Script_ExecuteLevelScript_23(a1, a2);
            result[4] = 0;
            result[2] = *(a1 + 0x50);
            result[3] = a2;
            result[5] = *(valA2 + 0x28) * 0.5f;
            result[6] = *(valA2 + 0x28) * 0.5f;
        }

        if (!*result || !result)
            return 0;
    }

    result[4] += 1;
    AI_CheckHearing_4(result, a3, a4, 1);
    return result;
}
