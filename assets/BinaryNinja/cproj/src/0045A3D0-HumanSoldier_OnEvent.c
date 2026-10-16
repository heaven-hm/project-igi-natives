#include "gi_platform.h"
#include "0045A3D0-HumanSoldier_OnEvent.h"
uint32_t HumanSoldier_OnEvent(void* a1, float a2)

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0x800));

    if ((*(int32_t*)(uintptr_t)(a1 + 0xcf6)) && (!valA || !(*(int32_t*)(uintptr_t)(valA + 0x3abc))))
    {
        double v_30;
        int32_t objC1 = AI_FireWeapon_23(&v_30, (*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
        double* valA2 = (*(int32_t*)(uintptr_t)(a2 + 4));
        double v_18 = *valA2 - v_30;
        double v_28;
        double v_10_1 = valA2[1] - v_28;
        double v_20;
        double v_8_1 = valA2[2] - v_20;
        long double x87_r7_8 = Sys_OpenFileStream_11(&v_18) - (*(int32_t*)(uintptr_t)(a2 + 0xc)) * 3.0f;
        long double f0_1 = 0.0f;
        x87_r7_8 - f0_1;
        long double x87_r7_10;

        if (!(*(&((x87_r7_8 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            x87_r7_10 = 1.0f - x87_r7_8 / ((*(int32_t*)(uintptr_t)(a2 + 0xc)) * 6.0f);
            long double f1_1 = 0.0f;
            x87_r7_10 - f1_1;

            if (!(*(&((x87_r7_10 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f2_1 = 0.0f;
                x87_r7_10 - f2_1;

                if (!(*(&((x87_r7_10 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_10, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_45a4a5;
            }
        }
        else
        {
            x87_r7_10 = 1.0f;
    label_45a4a5: ;
            int32_t v_48_2 = objC1;
            int32_t v_4c_2 = objC1;
            AI_CheckSector_23((*(int32_t*)(uintptr_t)(a1 + 0x4ec)), x87_r7_10 * 204.800003.0f, x87_r7_10 * 0.0261799395.0f,
                (*(int32_t*)(uintptr_t)(a2 + 0x14)));
        }
        (*(int32_t*)(uintptr_t)(a1 + 0x2e8)) = 0xd;
        int32_t v_44_3 = 1;
        int32_t v_48_5 = FX_FragmentSimulate_14(a1 + 0x254, 0xd);
        void* v_50_2 = a1;
        long double fp0_2;
        fp0_2 = Level_CheckQTaskID_5(a2, a1 + 0x20, (*(int32_t*)(uintptr_t)(a1 + 0xa0)) * 0.333333343.0f);
        long double f3_1 = 0.0f;
        fp0_2 - f3_1;
        valA = (fp0_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f3_1) ? 1 : 0) << 0xa
            | (fp0_2 == f3_1 ? 1 : 0) << 0xe | 0x3800;

        if (!((*(int32_t*)(uintptr_t)(&valA + 1)) & 0x40))
        {
            long double x87_r7_17 = fp0_2 * (*(int32_t*)(uintptr_t)(a1 + 0x2cc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2c8)) = x87_r7_17 + (*(int32_t*)(uintptr_t)(a1 + 0x2c8));
            (*(int32_t*)(uintptr_t)(a1 + 0x254)) = x87_r7_17 + (*(int32_t*)(uintptr_t)(a1 + 0x254));
            int32_t objC4 = (*(int32_t*)(uintptr_t)(a1 + 0x2f4));
            long double x87_r7_18 = x87_r7_17 + (*(int32_t*)(uintptr_t)(a1 + 0xd08));
            (*(int32_t*)(uintptr_t)(a1 + 0xd08)) = x87_r7_18;
            long double x87_r6_11 = (*(int32_t*)(uintptr_t)(a1 + 0x254));
            long double f4 = (*(int32_t*)(uintptr_t)(a1 + 0x258));
            x87_r6_11 - f4;
            valA = (x87_r6_11 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_11, f4) ? 1 : 0) << 0xa
                | (x87_r6_11 == f4 ? 1 : 0) << 0xe | 0x3800;

            if (!((*(int32_t*)(uintptr_t)(&valA + 1)) & 1))
            {
                long double x87_r7_20 = (*(int32_t*)(uintptr_t)(a1 + 0x20));
                (*(int32_t*)(uintptr_t)(a1 + 0xd1c)) = 0;
                objC4 |= 0x20000;
                (*(int32_t*)(uintptr_t)(a1 + 0xd20)) = x87_r7_20 - *(*(int32_t*)(uintptr_t)(a2 + 4));
                valA = (*(int32_t*)(uintptr_t)(a2 + 4));
                (*(int32_t*)(uintptr_t)(a1 + 0xd28)) = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - (*(int32_t*)(uintptr_t)(valA + 8));
                long double x87_r7_25 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - (*(int32_t*)(uintptr_t)(*(a2 + 4) + 0x10));
                (*(int32_t*)(uintptr_t)(a1 + 0xcf5)) = 1;
                (*(int32_t*)(uintptr_t)(a1 + 0xd30)) = x87_r7_25;
            }
            else
            {
                long double f5_1 = (*(int32_t*)(uintptr_t)(a1 + 0xd04));
                x87_r7_18 - f5_1;
                valA = (x87_r7_18 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == f5_1 ? 1 : 0) << 0xe;

                if (!((*(int32_t*)(uintptr_t)(&valA + 1)) & 0x41))
                {
                    uint32_t valA6 = AI_MoveToNode_21(a1, "ai_xplhit_", 3);
                    (*(int32_t*)(uintptr_t)(a1 + 0xd08)) = 0;
                    (*(int32_t*)(uintptr_t)(a1 + 0x2f4)) = objC4 | 0x10000;
                    return valA6;
                }
            }

            (*(int32_t*)(uintptr_t)(a1 + 0x2f4)) = objC4;
        }
    }

    return valA;
}
