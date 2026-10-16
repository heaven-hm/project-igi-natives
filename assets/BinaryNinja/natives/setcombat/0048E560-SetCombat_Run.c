#include "SetCombat_Run.h"
int32_t* SetCombat_Run(void* a1, int32_t* a2)

{
    void* dstD = *(a1 + 0x14);
    char* v_30 = "Set Combat";
    int32_t v_34 = 0xffffffff;
    void* v_38 = a1;
    void* srcS1 = a2[0xa] + 8;
    int32_t v_1c = 7;
    int32_t v_18 = AI_CombatTarget_19(dstD);
    int32_t v_14 = 0;
    int32_t v_10 = 0;
    void* v_c = srcS1;
    int32_t v_4 = 0;
    int32_t v_8 = 0;
    int32_t* valA1 = *(srcS1 + 0x1c);

    if (valA1)
    {
        int32_t valA2 = *valA1;

        if (valA2)
            int32_t v_4_1 = valA2;
    }

    int32_t* srcS2 = *(srcS1 + 0x18);

    if (srcS2)
    {
        int32_t srcS3 = *srcS2;

        if (srcS3)
            int32_t v_8_1 = srcS3;
    }

    AI_TakeCover(a1, &v_1c);
    return AI_CombatTarget_2(a1, a2);
}
