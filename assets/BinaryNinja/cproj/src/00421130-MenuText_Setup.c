#include "gi_platform.h"
#include "00421130-MenuText_Setup.h"
int32_t MenuText_Setup(int32_t a1)

{
    int32_t srcS = a1;
    void* dstD = (*(int32_t*)(uintptr_t)(srcS + 0x114));
    int32_t valA1 = Menu_FormatScreen_4((*(int32_t*)(uintptr_t)(srcS + 0x44)));
    long double x87_r7_1 = (valA1 - 8) * 0.125.0f;
    long double f0 = 0.0f;
    x87_r7_1 - f0;

    a1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    int32_t result = ((int(*)())(uintptr_t)(*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0)))(srcS);

    if (dstD)
    {
        int32_t result_1;

        if (valA1 == 0x10)
            result_1 = 1;

        if (valA1 != 0x10 || !(*(int32_t*)(uintptr_t)(srcS + 0x4d)))
            result_1 = 0;

        int32_t valA9 = ((*(int32_t*)(uintptr_t)(srcS + 0x118)) & 0xf) * 3;
        float* v_c_1;
        float* ctxB1;
        float* flagP3;
        long double x87_r7_11;

        if (!result_1)
        {
            int32_t valA12 = valA9 << 2;
            ctxB1 = valA12 + 0x53b778;
            flagP3 = valA12 + 0x53b77c;
            (*(int32_t*)(uintptr_t)(dstD + 0x14)) = *(valA12 + 0x53b778);
            (*(int32_t*)(uintptr_t)(dstD + 0x18)) = *flagP3;
            x87_r7_11 = *(valA12 + 0x53b780);
            v_c_1 = valA12 + 0x53b780;
        }
        else
        {
            int32_t valA10 = valA9 << 2;
            ctxB1 = valA10 + 0x53b778;
            flagP3 = valA10 + 0x53b77c;
            v_c_1 = valA10 + 0x53b780;
            (*(int32_t*)(uintptr_t)(dstD + 0x14)) = *(valA10 + 0x53b778) * 0.5.0f + 64.0f;
            (*(int32_t*)(uintptr_t)(dstD + 0x18)) = *flagP3 * 0.5.0f + 64.0f;
            x87_r7_11 = *(valA10 + 0x53b780) * 0.5.0f + 64.0f;
        }

        (*(int32_t*)(uintptr_t)(dstD + 0x1c)) = x87_r7_11;
        long double x87_r7_14 = a1;

        if ((*(int32_t*)(uintptr_t)(srcS + 0x118)) & 0x10)
            x87_r7_14 = x87_r7_14 * 0.5.0f;

        int32_t tmpD2 = (*(int32_t*)(uintptr_t)(dstD + 0x24));
        (*(int32_t*)(uintptr_t)(dstD + 0x10)) = x87_r7_14;
        (*(int32_t*)(uintptr_t)(dstD + 0x24)) = tmpD2 | 0x80000;
        (*(int32_t*)(uintptr_t)(*(srcS + 0x114) + 4)) = (g_c28b44 >> 1) + (*(int32_t*)(uintptr_t)(srcS + 0x20)) - 320.0f;
        (*(int32_t*)(uintptr_t)(*(srcS + 0x114) + 8)) = (g_c28b48 >> 1) + (*(int32_t*)(uintptr_t)(srcS + 0x24)) - 240.0f;
        Sys_CloseFileStream_18((*(int32_t*)(uintptr_t)(srcS + 0x114)));
        result = result_1;

        if (result)
        {
            float v_10_1 =
                (g_c28b44 >> 1) + (*(int32_t*)(uintptr_t)(srcS + 0x20)) - 0x140 - (*(int32_t*)(uintptr_t)(srcS + 0x28)) * 0.400000006.0f;
            a1 = (*(int32_t*)(uintptr_t)(srcS + 0x2c));
            int32_t objC5 = (g_c28b48 >> 1) + (*(int32_t*)(uintptr_t)(srcS + 0x24)) - 0xf0;
            int32_t v_30_1 = objC5;
            float v_8_2 = objC5 - a1 * 0.200000003.0f;
            float v_4_1 = (*(int32_t*)(uintptr_t)(srcS + 0x28)) * 1.79999995.0f + v_10_1;
            a1 = a1 * 1.39999998.0f + v_8_2;
            int32_t v_34_1 = objC5;
            int32_t v_38_1 = objC5;
            return Sys_FreeMemory_15((*(int32_t*)(uintptr_t)(srcS + 0x16c)), v_10_1, v_8_2, v_4_1, v_8_2, v_10_1, a1,
                v_4_1, a1, *ctxB1 * 0.200000003.0f, *flagP3 * 0.200000003.0f,
                *v_c_1 * 0.200000003.0f, 0, 8, 0);
        }
    }

    return result;
}
