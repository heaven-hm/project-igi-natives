// Original IGI.EXE function: ScrollListBox_Setup (VA 0x0041C080; static CFG gate PASS, CFG score 1.000).
#include "ScrollListBox_Setup.h"
int32_t ScrollListBox_Setup(int32_t a1)

{
    int32_t srcS = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(srcS + 0x44)) - 8) * 0.125f;
    long double f2 = 0f;
    x87_r7_1 - f2;

    a1 = *(&((x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    int32_t f0 = (*(srcS + 0x2c) - 4) / *(srcS + 0x13f0);
    *(srcS + 0x13f0);
    int32_t valA8 = *(srcS + 0x1254);
    int32_t v_10 = valA8;

    if (valA8 >= f0)
        v_10 = f0;

    int32_t flagP = (g_c28b44 >> 1) + *(srcS + 0x20) - 0x140;
    int32_t v_14 = (g_c28b48 >> 1) + *(srcS + 0x24) - 0xee;
    int32_t valA13;

    if (f0 >= *(srcS + 0x1254))
        valA13 = 0;
    else
        valA13 = Menu_FormatScreen_10(*(srcS + 0x13f4));

    int32_t ctxB = *(srcS + 0x129c);
    int32_t dstD1 = 0;
    *(*(srcS + 0x13f8) + 0x20) = *(srcS + 0x20);
    int32_t ctxB1 = ctxB - valA13;
    *(*(srcS + 0x13f8) + 0x24) = *(srcS + 0x24);

    if (v_10 > 0)
    {
        int32_t* flagP2 = srcS + valA13 * 0x48 + 0x98;

        do
        {
            Sys_FreeMemory_18(*(srcS + 0x12ac), *flagP2);
            long double x87_r7_4 = v_14;
            *(*(srcS + 0x12ac) + 4) = flagP + 4;
            *(*(srcS + 0x12ac) + 8) = x87_r7_4;
            void* valA16 = *(srcS + 0x12ac);
            void* objC9;
            int32_t tmpD9;

            if (dstD1 != ctxB1)
            {
                *(valA16 + 0x14) = g_53b790;
                *(*(srcS + 0x12ac) + 0x18) = g_53b794;
                objC9 = *(srcS + 0x12ac);
                tmpD9 = g_53b798;
            }
            else
            {
                *(valA16 + 0x14) = g_53b7a8;
                *(*(srcS + 0x12ac) + 0x18) = g_53b7ac;
                objC9 = *(srcS + 0x12ac);
                tmpD9 = g_53b7b0;
            }

            *(objC9 + 0x1c) = tmpD9;
            void* valA19 = *(srcS + 0x12ac);
            *(valA19 + 0x24) |= 0x80000;
            *(*(srcS + 0x12ac) + 0x10) = a1;
            int32_t objC14 = Sys_CloseFileStream_18(*(srcS + 0x12ac));

            if (dstD1 == ctxB1)
            {
                int32_t v_40_1 = objC14;
                void* objC15 = *(srcS + 0x13f8);
                void* v_44_1 = objC15;
                void* v_4c_1 = objC15;
                Sys_ExecuteBytecode_14(flagP + 2f, x87_r7_4, *(objC15 + 0x28) - 4f, *(srcS + 0x13f0), 0f, 80f, 0f,
                    a1, 0x80000, 0);
            }

            dstD1 += 1;
            flagP2 = &flagP2[0x12];
            v_14 += *(srcS + 0x13f0);
        } while (dstD1 < v_10);
    }

    if (*(srcS + 0x12a9))
    {
        void* dstD2 = *(srcS + 0x13f4);
        int32_t valA24 = StatusScreen_GetEvent();
        int32_t tmpD13 = 0;
        tmpD13 = *(dstD2 + 0x1c);
        (*(((valA24 * 0x180 + tmpD13) << 2) + &g_a96ae0))(dstD2);
    }

    return Menu_DrawWidget_14(*(srcS + 0x13f8), 0.5f, a1, *(srcS + 0x12aa));
}
