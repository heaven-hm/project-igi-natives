// Original IGI.EXE function: MenuTextConditional_Setup (VA 0x004208F0; static CFG gate PASS, CFG score 1.000).
#include "MenuTextConditional_Setup.h"
int32_t MenuTextConditional_Setup(int32_t a1)

{
    int32_t srcS = a1;
    void* dstD = *(srcS + 0x114);
    int32_t valA1 = Menu_FormatScreen_4(*(srcS + 0x44));
    long double x87_r7_1 = (valA1 - 8) * 0.125f;
    long double f0 = 0f;
    x87_r7_1 - f0;

    a1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    int32_t result = *(srcS + 0x214);

    if (result)
    {
        result = (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(srcS);

        if (dstD)
        {
            int32_t result_1;

            if (valA1 == 0x10)
                result_1 = 1;

            if (valA1 != 0x10 || !*(srcS + 0x4d))
                result_1 = 0;

            int32_t valA9 = (*(srcS + 0x118) & 0xf) * 3;
            float* v_c_1;
            float* ctxB1;
            float* flagP4;
            long double x87_r7_11;

            if (!result_1)
            {
                int32_t valA12 = valA9 << 2;
                ctxB1 = valA12 + 0x53b708;
                flagP4 = valA12 + 0x53b70c;
                *(dstD + 0x14) = *(valA12 + 0x53b708);
                *(dstD + 0x18) = *flagP4;
                x87_r7_11 = *(valA12 + 0x53b710);
                v_c_1 = valA12 + 0x53b710;
            }
            else
            {
                int32_t valA10 = valA9 << 2;
                ctxB1 = valA10 + 0x53b708;
                flagP4 = valA10 + 0x53b70c;
                v_c_1 = valA10 + 0x53b710;
                *(dstD + 0x14) = *(valA10 + 0x53b708) * 0.5f + 64f;
                *(dstD + 0x18) = *flagP4 * 0.5f + 64f;
                x87_r7_11 = *(valA10 + 0x53b710) * 0.5f + 64f;
            }

            *(dstD + 0x1c) = x87_r7_11;
            int32_t valA14 = 0;
            long double x87_r7_14 = a1;
            valA14 = !*(srcS + 0x210);

            if (valA14 | (*(srcS + 0x118) & 0x10))
                x87_r7_14 = x87_r7_14 * 0.5f;

            int32_t objC5 = *(dstD + 0x24);
            *(dstD + 0x10) = x87_r7_14;
            *(dstD + 0x24) = objC5 | 0x80000;
            *(*(srcS + 0x114) + 4) = (g_c28b44 >> 1) + *(srcS + 0x20) - 320f;
            *(*(srcS + 0x114) + 8) = (g_c28b48 >> 1) + *(srcS + 0x24) - 240f;
            Sys_CloseFileStream_18(*(srcS + 0x114));
            result = result_1;

            if (result)
            {
                float v_10_1 =
                    (g_c28b44 >> 1) + *(srcS + 0x20) - 0x140 - *(srcS + 0x28) * 0.400000006f;
                a1 = *(srcS + 0x2c);
                float* v_30_1 = v_c_1;
                float v_8_2 = (g_c28b48 >> 1) + *(srcS + 0x24) - 0xf0 - a1 * 0.200000003f;
                float v_4_1 = *(srcS + 0x28) * 1.79999995f + v_10_1;
                a1 = a1 * 1.39999998f + v_8_2;
                float* v_34_1 = v_c_1;
                float* v_38_1 = v_c_1;
                return Sys_FreeMemory_15(*(srcS + 0x20c), v_10_1, v_8_2, v_4_1, v_8_2, v_10_1,
                    a1, v_4_1, a1, *ctxB1 * 0.200000003f, *flagP4 * 0.200000003f,
                    *v_c_1 * 0.200000003f, 0, 8, 0);
            }
        }
    }

    return result;
}
