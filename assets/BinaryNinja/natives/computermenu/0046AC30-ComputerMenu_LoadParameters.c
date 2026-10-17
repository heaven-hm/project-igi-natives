// Original IGI.EXE function: ComputerMenu_LoadParameters (VA 0x0046AC30; static CFG gate PASS, CFG score 1.000).
#include "ComputerMenu_LoadParameters.h"
void* ComputerMenu_LoadParameters(float a1)

{
    void* flagP = *(AI_CombatTarget_29() + 0x14);
    int32_t dstD = 0;
    float v_1c = g_c28b44;
    float v_18 = g_c28b48;
    void* result = Level_LoadObjects_7();

    if (!result)
    {
        float srcS1 = a1;

        if (*(srcS1 + 0x38))
        {
            QTask_CleanupTypes(srcS1);
            AI_NoNewFunctionForMenu(*(srcS1 + 0x38));
            *(srcS1 + 0x38) = 0;
        }

        float v_14;

        if (!*(srcS1 + 0x2c))
        {
            int32_t objC1 = *(Config_GetActivePlayerProfileRecord() + 0x538);
            long double x87_r6_1 = *(flagP + 0x1b4);

            if (objC1)
                x87_r6_1 = x87_r6_1 * -1f;

            long double x87_r6_6 = *(flagP + 0x1b0) * v_1c * 0.5f + *(srcS1 + 0x24);
            a1 = x87_r6_6;
            *(srcS1 + 0x24) = x87_r6_6;
            long double x87_r7_6 = x87_r6_1 * v_18 * 0.5f + *(srcS1 + 0x28);
            v_14 = x87_r7_6;
            *(srcS1 + 0x28) = x87_r7_6;
            long double x87_r7_8 = v_1c * 0.0484374985f;
            long double f1_1 = a1;
            x87_r7_8 - f1_1;

            if (*(&((x87_r7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                x87_r7_8 = v_1c - v_1c * 0.0453125015f;
                long double f3_1 = a1;
                x87_r7_8 - f3_1;

                if (!(*(&((x87_r7_8 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_8, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    x87_r7_8 = a1;
            }

            *(srcS1 + 0x24) = x87_r7_8;
            long double x87_r7_14 = v_18 * 0.0541666672f;
            long double f2_1 = v_14;
            x87_r7_14 - f2_1;

            if (*(&((x87_r7_14 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_14, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                x87_r7_14 = v_18 - v_18 * 0.0958333313f;
                long double f4_1 = v_14;
                x87_r7_14 - f4_1;

                if (!(*(&((x87_r7_14 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_14, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_14 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    x87_r7_14 = v_14;
            }

            *(srcS1 + 0x28) = x87_r7_14;
        }

        char valA6 = g_c28f8c;

        if (valA6 & 1)
            dstD = 0x10;

        if (valA6 & 2)
            dstD |= 0x20;

        v_14 = *(srcS1 + 0x24);
        float v_c = v_14;
        int32_t v_4_1 = 0;
        v_14 = *(srcS1 + 0x28);
        float v_8_1 = v_14;
        Physics_CalculateSplineLength_4(*(srcS1 + 0x20), &v_c);
        void** i = *(srcS1 + 8);
        int32_t tmpD4 = ~*(srcS1 + 0x30) & dstD;
        *(srcS1 + 0x30) = dstD;
        *(srcS1 + 0x34) = tmpD4;
        result = *i;

        if (result && i)
        {
            int32_t tmpD5 = g_afa7e0;

            do
            {
                int32_t* srcS2 = *i;
                void* valA10;

                if (!srcS2)
                    valA10 = nullptr;
                else
                {
                    int32_t valA7 = *srcS2;
                    int32_t valA8 = -(valA7);
                    valA10 = (valA8 - valA8) & srcS2;
                }

                *((tmpD5 << 2) + &g_afa6e0) = valA10;
                int32_t tmpD6 = tmpD5 + 1;
                int32_t valA11 = 0;
                g_afa7e0 = tmpD6;
                valA11 = i[7];
                result = *((valA11 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    tmpD6 = g_afa7e0;
                }

                i = *((tmpD6 << 2) + &g_afa6dc);
                tmpD5 = tmpD6 - 1;
                g_afa7e0 = tmpD5;
            } while (i);
        }
    }

    return result;
}
