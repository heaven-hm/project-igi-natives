#include "gi_platform.h"
#include "004640B0-AI_AlertAllies_21.h"
int32_t AI_AlertAllies_21(float a1)

{
    int32_t* dstD = a1;
    int32_t* srcS = *dstD;
    uint32_t valA1 = Weapon_CheckAmmo_8();
    int32_t tmpD = 0;
    tmpD = (*(int32_t*)(uintptr_t)(*srcS + 0x1c));
    int32_t result = valA1 * 0x180 + tmpD;

    if (*((result << 2) + &g_a96ae0))
    {
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(dstD + 8)) - (*(int32_t*)(uintptr_t)(dstD + 0x20));
        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(dstD + 0x10)) - (*(int32_t*)(uintptr_t)(dstD + 0x28));
        long double x87_r5_2 = (*(int32_t*)(uintptr_t)(dstD + 0x18)) - (*(int32_t*)(uintptr_t)(dstD + 0x30));
        long double x87_r4_1 = srcS[0xe];
        long double f1_1 = 0.0f;
        x87_r4_1 - f1_1;
        result = (x87_r4_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r4_1 == f1_1 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 0x40))
        {
    label_464126: ;
            long double x87_r4_4 = srcS[0x10];
            long double x87_r3_1 = srcS[0xf];
            long double x87_r2_1 = srcS[0xe];
            long double x87_r4_6 =
                1.0 / sqrtl(x87_r2_1 * x87_r2_1 + x87_r3_1 * x87_r3_1 + x87_r4_4 * x87_r4_4);
            srcS[0xe] = srcS[0xe] * x87_r4_6;
            srcS[0xf] = srcS[0xf] * x87_r4_6;
            srcS[0x10] = srcS[0x10] * x87_r4_6;
        }
        else
        {
            long double x87_r4_2 = srcS[0xf];
            long double f2_1 = 0.0f;
            x87_r4_2 - f2_1;
            result = (x87_r4_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_2, f2_1) ? 1 : 0) << 0xa
                | (x87_r4_2 == f2_1 ? 1 : 0) << 0xe | 0x2800;

            if (!(*(&result + 1) & 0x40))
                goto label_464126;

            long double x87_r4_3 = srcS[0x10];
            long double f4_1 = 0.0f;
            x87_r4_3 - f4_1;
            result = (x87_r4_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_3, f4_1) ? 1 : 0) << 0xa
                | (x87_r4_3 == f4_1 ? 1 : 0) << 0xe | 0x2800;

            if (!(*(&result + 1) & 0x40))
                goto label_464126;
        }

        long double x87_r7_4 = x87_r5_2 * srcS[0x10] + x87_r6_2 * srcS[0xf] + x87_r7_2 * srcS[0xe];
        long double f3_1 = 0.0f;
        x87_r7_4 - f3_1;
        result = (x87_r7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            a1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 204.800003.0f + 102.400002.0f;
            uint32_t valA6 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
            float valA10;

            if (!valA6)
                valA10 = g_5bdb14 + 0x18;
            else if (valA6 != 1)
                valA10 = a1;
            else
                valA10 = g_5bdb04 + 0x18;

            int32_t* v_10 = srcS;
            void* srcS1 = *srcS;
            float v_8_1 = valA10;
            int32_t v_c_1 = 0;
            float v_4_1 = a1;
            uint32_t valA12 = Weapon_CheckAmmo_8();
            int32_t objC3 = 0;
            objC3 = *(srcS1 + 0x1c);
            return ((int(*)())(uintptr_t)(*(((valA12 * 0x180 + objC3) << 2) + &g_a96ae0)))(srcS1, &v_10);
        }
    }

    return result;
}
