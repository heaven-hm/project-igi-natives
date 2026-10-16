#include "gi_platform.h"
#include "0041CDF0-AsciiBox_Setup.h"
int32_t AsciiBox_Setup(int32_t a1)

{
    int32_t srcS = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4((*(int32_t*)(uintptr_t)(srcS + 0x44))) - 8) * 0.125.0f;
    long double f2 = 0.0f;
    x87_r7_1 - f2;

    a1 = *(&((x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    int32_t v_20 = 0;
    Menu_UpdateLanguage_10((*(int32_t*)(uintptr_t)(srcS + 0xf4)), (*(int32_t*)(uintptr_t)(srcS + 0x28)) + (*(int32_t*)(uintptr_t)(srcS + 0x20)) - 0x13, (*(int32_t*)(uintptr_t)(srcS + 0x24)),
        (*(int32_t*)(uintptr_t)(srcS + 0x2c)), (*(int32_t*)(uintptr_t)(srcS + 0xe4)));
    ((int(*)())(uintptr_t)(*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0)))(srcS);
    void* dstD3 = (*(int32_t*)(uintptr_t)(srcS + 0xf4));
    int32_t valA9 = StatusScreen_GetEvent();
    int32_t objC3 = 0;
    objC3 = *(dstD3 + 0x1c);
    ((int(*)())(uintptr_t)(*(((valA9 * 0x180 + objC3) << 2) + &g_a96ae0)))(dstD3);

    if ((*(int32_t*)(uintptr_t)(srcS + 0xd4)) && (*(int32_t*)(uintptr_t)(srcS + 0xdc)))
    {
        char* dstD4 = (*(int32_t*)(uintptr_t)(srcS + 0xe0));
        int32_t f0_1 = ((*(int32_t*)(uintptr_t)(srcS + 0x2c)) - 4) / (*(int32_t*)(uintptr_t)(srcS + 0xec));
        (*(int32_t*)(uintptr_t)(srcS + 0xec));
        int32_t objC5 = (*(int32_t*)(uintptr_t)(srcS + 0xe4)) - (*(int32_t*)(uintptr_t)(srcS + 0xe8));
        int32_t ctxB2 = f0_1;

        if (f0_1 >= objC5)
            ctxB2 = objC5;

        int32_t objC6 = (g_c28b44 >> 1) + (*(int32_t*)(uintptr_t)(srcS + 0x20)) - 0x13c;
        int32_t flagP1 = (g_c28b48 >> 1) + (*(int32_t*)(uintptr_t)(srcS + 0x24)) - 0xec;
        int32_t v_c_1 = flagP1;

        if (ctxB2 > 0)
        {
            int32_t v_8_2 = ctxB2;
            bool cond_2_1;

            do
            {
                Sys_FreeMemory_18((*(int32_t*)(uintptr_t)(srcS + 0xd8)), dstD4);
                (*(int32_t*)(uintptr_t)(*(srcS + 0xd8) + 4)) = objC6;
                (*(int32_t*)(uintptr_t)(*(srcS + 0xd8) + 8)) = v_c_1;
                (*(int32_t*)(uintptr_t)(*(srcS + 0xd8) + 0x14)) = 0x43000000;
                (*(int32_t*)(uintptr_t)(*(srcS + 0xd8) + 0x18)) = 0x43000000;
                (*(int32_t*)(uintptr_t)(*(srcS + 0xd8) + 0x1c)) = 0x43000000;
                void* valA24 = (*(int32_t*)(uintptr_t)(srcS + 0xd8));
                *(valA24 + 0x24) |= 0x80000;
                (*(int32_t*)(uintptr_t)(*(srcS + 0xd8) + 0x10)) = a1;
                Sys_CloseFileStream_18((*(int32_t*)(uintptr_t)(srcS + 0xd8)));

                if (*dstD4)
                {
                    char i;

                    do
                    {
                        i = dstD4[1];
                        dstD4 = &dstD4[1];
                    } while (i);
                }

                dstD4 = &dstD4[1];
                flagP1 += (*(int32_t*)(uintptr_t)(srcS + 0xec));
                cond_2_1 = v_8_2 != 1;
                v_c_1 = flagP1;
                v_8_2 -= 1;
            } while (cond_2_1);
        }
    }

    (*(int32_t*)(uintptr_t)(srcS + 0x28)) -= 0x14;
    Menu_DrawWidget_14(srcS, 0.5.0f, a1, 0);
    int32_t result = (*(int32_t*)(uintptr_t)(srcS + 0x28)) + 0x14;
    (*(int32_t*)(uintptr_t)(srcS + 0x28)) = result;
    return result;
}
