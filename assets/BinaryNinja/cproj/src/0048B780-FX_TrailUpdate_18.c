#include "gi_platform.h"
#include "0048B780-FX_TrailUpdate_18.h"
int32_t* FX_TrailUpdate_18(void* a1, void* a2, int32_t* a3, int32_t a4, int32_t a5)

{
    int32_t valA = a4 * 5;

    if ((*(int32_t*)(uintptr_t)(a2 + ((a5 + (valA << 2)) << 2) + 0x20)) >= 0x19)
    {
        valA = 0;
        return valA;
    }

    int32_t valA2;
    int32_t tmpD1;
    tmpD1 = HIGHD((*(int32_t*)(uintptr_t)(a2 + 0x14)));
    valA2 = LOWD((*(int32_t*)(uintptr_t)(a2 + 0x14)));
    int32_t valA6;
    int32_t tmpD2;
    tmpD2 = HIGHD((*(int32_t*)(uintptr_t)(a2 + 0x18)));
    valA6 = LOWD((*(int32_t*)(uintptr_t)(a2 + 0x18)));
    int32_t v_68 = a5 - ((valA6 - tmpD2) >> 1);
    float v_30;
    Script_EvaluateCondition_23(&v_30, a3, 1);
    double v_48;
    Script_CallNativeHandler_23(&v_48, a3);
    (*(int32_t*)(uintptr_t)(a1 + 0x3ec0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ec4)) = 0;
    long double x87_r7_1 = (a4 - ((valA2 - tmpD1) >> 1)) * 8192.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x3eb0)) = x87_r7_1;
    long double x87_r6_1 = v_68 * 8192.0f;
    v_68 = x87_r6_1;
    (*(int32_t*)(uintptr_t)(a1 + 0x3eb8)) = x87_r6_1;
    long double x87_r6_3 = a3[9] * -4096.0f;
    x87_r7_1 - x87_r6_3;

    if (!(*(&((x87_r7_1 < x87_r6_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, x87_r6_3) ? 1 : 0) << 0xa
        | (x87_r7_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double x87_r6_5 = a3[9] * 4096.0f;
        x87_r7_1 - x87_r6_5;

        if (!(*(&((x87_r7_1 < x87_r6_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r7_1 == x87_r6_5 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0x3eb0)) = x87_r6_5;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0x3eb0)) = x87_r6_3;

    long double x87_r7_6 = a3[9] * -4096.0f;
    long double f1 = v_68;
    x87_r7_6 - f1;

    if (*(&((x87_r7_6 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1) ? 1 : 0) << 0xa
        | (x87_r7_6 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_9 = a3[9] * 4096.0f;
        long double f2_1 = v_68;
        x87_r7_9 - f2_1;

        if (*(&((x87_r7_9 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            (*(int32_t*)(uintptr_t)(a1 + 0x3eb8)) = x87_r7_9;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0x3eb8)) = x87_r7_6;

    int32_t* valA11 = (*(int32_t*)(uintptr_t)(a1 + 0x3ea0));
    float v_2c;
    double v_60 = v_2c * (*(int32_t*)(uintptr_t)(a1 + 0x3eb8)) + v_30 * (*(int32_t*)(uintptr_t)(a1 + 0x3eb0));
    float v_24;
    float v_20;
    double v_58 = v_20 * (*(int32_t*)(uintptr_t)(a1 + 0x3eb8)) + v_24 * (*(int32_t*)(uintptr_t)(a1 + 0x3eb0));
    float v_18;
    float v_14;
    double v_50 = v_14 * (*(int32_t*)(uintptr_t)(a1 + 0x3eb8)) + v_18 * (*(int32_t*)(uintptr_t)(a1 + 0x3eb0));
    long double x87_r7_20 = v_48;
    memcpy(a1 + 0x3eb0, &v_60, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x3eb0)) = x87_r7_20 + (*(int32_t*)(uintptr_t)(a1 + 0x3eb0));
    double v_40;
    (*(int32_t*)(uintptr_t)(a1 + 0x3eb8)) = v_40 + (*(int32_t*)(uintptr_t)(a1 + 0x3eb8));
    double v_38;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ec0)) = v_38 + (*(int32_t*)(uintptr_t)(a1 + 0x3ec0));

    if (valA11)
    {
        AI_MoveToNode_4(valA11, (*(int32_t*)(uintptr_t)(a1 + 0x3ea4)), (*(int32_t*)(uintptr_t)(a1 + 0x3ea8)));
        (*(int32_t*)(uintptr_t)(a1 + 0x3ea0)) = 0;
    }

    int32_t* valA13 = AI_TakeCover_4((*(int32_t*)(uintptr_t)(a1 + 0x3b6c)), *a3, a4, a5);
    (*(int32_t*)(uintptr_t)(a1 + 0x3ea0)) = valA13;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ea4)) = a4;
    (*(int32_t*)(uintptr_t)(a1 + 0x3ea8)) = a5;
    valA13 = 1;
    return valA13;
}
