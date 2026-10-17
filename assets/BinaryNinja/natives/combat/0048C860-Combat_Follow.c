// Original IGI.EXE function: Combat_Follow (VA 0x0048C860; static CFG gate PASS, CFG score 1.000).
#include "Combat_Follow.h"
int32_t* Combat_Follow(int32_t* a1, int32_t* a2)

{
    int32_t* flagP = a2;
    char* v_40 = "Combat - Follow";
    int32_t v_44 = 0xffffffff;
    int32_t* v_48 = a1;
    void* dstD1 = flagP[0xa] + 8;
    a1[0xf37] = 0x3f800000;
    FX_SmokeEmit_17(a1, dstD1);

    if (!a1[0xf79])
        return AI_CombatTarget_2(a1, flagP);

    if (a1[0xf7a] == 0xffffffff)
        return FX_FireBallUpdate_18(a1, flagP, flagP[7], 0);

    void* valA4 = AI_SelectTarget_3(a1);
    int32_t v_44_3 = a1[0xf7a];
    char* v_48_2 = "Tracking target at node #%d";
    int32_t v_4c_2 = 0xffffffff;
    int32_t* v_50_1 = a1;
    valA4 = a1[0xf7c];

    if (valA4)
    {
        void* tmpD1 = a1[0xf79];
        a2 = nullptr;
        valA4 = *(tmpD1 + 0x29);
        FX_FindfreepositionStac(&a2, a1, valA4, 5);
        int32_t* valA5 = a2;

        if (valA5)
        {
            int32_t valA6 = *valA5;

            if (valA6 != a1[0xf8b])
            {
                a1[0xf7a] = valA6;
                *(dstD1 + 0x18) = 0;
            }
        }

        a1[0xf7c] = 0;
    }

    if (AI_MoveToNode_3(a1, a1[0xf7a], &a1[0xfac], 0))
    {
        a1[0xf7a] = 0xffffffff;
        FX_FireBallUpdate_18(a1, flagP, flagP[7], 0);
        return Combat_SetAimMode(a1[0xeaa], a1, 0xffffffff);
    }

    if (*(a1[0xf79] + 0x29))
    {
        void* valA11 = a1[0xeaa];
        double v_30 = *(valA11 + 0x110) - *(a1 + 0x20);
        double v_28_1 = *(valA11 + 0x118) - *(a1 + 0x28);
        double v_20_1 = *(valA11 + 0x120) - *(a1 + 0x30);
        double v_18_1 = a1[0x1f];
        double v_10_1 = a1[0x22];
        double v_8_1 = a1[0x25];
        Sys_FreeMemory_11(&v_30);
        long double x87_r7_13 = v_8_1 * v_20_1 + v_10_1 * v_28_1 + v_18_1 * v_30;
        long double f0_1 = 0.95999999999999996;
        x87_r7_13 - f0_1;

        if (!(*(&((x87_r7_13 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            if (AI_UpdateOrders_2(a1[0xeaa], 0) >= 4 && AI_TakeCover_2(a1[0xeaa], a1))
                return Combat_SetAimMode(a1[0xeaa], a1, 2);

            void* tmpD5 = a1[0xeaa];
            a1[0xf23] = 0x3f800000;
            return Combat_SetAimMode(tmpD5, a1, 0);
        }
    }

    return Combat_SetAimMode(a1[0xeaa], a1, 0xffffffff);
}
