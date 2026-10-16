#include "gi_platform.h"
#include "0051DBF0-FlatSky_Cleanup.h"
int32_t FlatSky_Cleanup(void* a1)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x260));
    long double f0 = 0.0f;
    fpu7 - f0;
    long double x87_r7_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x260));
        long double f1_1 = 1.0f;
        x87_r7_2 - f1_1;

        if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x260));
        else
            x87_r7_1 = 1.0f;
    }
    else
        x87_r7_1 = 0.0f;

    (*(int32_t*)(uintptr_t)(a1 + 0x260)) = x87_r7_1;
    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x264));
    long double f2 = 0.0f;
    x87_r7_3 - f2;
    long double x87_r7_4;

    if (!(*(&((x87_r7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2) ? 1 : 0) << 0xa
        | (x87_r7_3 == f2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x264));
        long double f3_1 = 1.0f;
        x87_r7_5 - f3_1;

        if (*(&((x87_r7_5 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x264));
        else
            x87_r7_4 = 1.0f;
    }
    else
        x87_r7_4 = 0.0f;

    (*(int32_t*)(uintptr_t)(a1 + 0x264)) = x87_r7_4;
    long double x87_r7_6 = (*(int32_t*)(uintptr_t)(a1 + 0x268));
    long double f4 = 0.0f;
    x87_r7_6 - f4;
    long double x87_r7_7;

    if (!(*(&((x87_r7_6 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f4) ? 1 : 0) << 0xa
        | (x87_r7_6 == f4 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_8 = (*(int32_t*)(uintptr_t)(a1 + 0x268));
        long double f5_1 = 1.0f;
        x87_r7_8 - f5_1;

        if (*(&((x87_r7_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_7 = (*(int32_t*)(uintptr_t)(a1 + 0x268));
        else
            x87_r7_7 = 1.0f;
    }
    else
        x87_r7_7 = 0.0f;

    (*(int32_t*)(uintptr_t)(a1 + 0x268)) = x87_r7_7;
    char* v_210 = a1 + 0x148;
    char* v_214 = &g_567c74;
    char v_200;
    Game_DataSymbolLoad(&v_200, "LOCAL:%s%s");

    if ((*(int32_t*)(uintptr_t)(a1 + 0x148)))
    {
        char* dstD1 = a1 + 0x48;
        char* valA3 = Camera_UpdateViewCone_6(dstD1, a1 + 0x148);
        int32_t i;
        int32_t i_1;

        if (valA3)
        {
            i = 0xffffffff;

            while (i)
            {
                bool cond_0_1 = 0 != *dstD1;
                dstD1 = &dstD1[1];
                i -= 1;

                if (!cond_0_1)
                    break;
            }

            char* dstD2 = a1 + 0x148;
            i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond_1_1 = 0 != *dstD2;
                dstD2 = &dstD2[1];
                i_1 -= 1;

                if (!cond_1_1)
                    break;
            }
        }

        if (!valA3 || ~i_1 - 1 != ~i - 1)
        {
            char* valA4 = Camera_UpdateViewCone_6(a1 + 0x148, "File not found");
            int32_t valA5;

            if (!valA4)
                valA5 = Sys_AllocateMemory_16(&v_200);

            if (valA4 || !valA5)
                Game_DataSymbolLoad(a1 + 0x148, "File not found");
            else
            {
                if ((*(int32_t*)(uintptr_t)(a1 + 0x44)))
                {
                    Struct_Clear36(a1 + 0x20);
                    (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 0;
                }

                Sys_SIsNotAValidTextureF(a1 + 0x20, 0, &v_200);
                (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 1;
            }
        }
    }

    return Game_DataSymbolLoad(a1 + 0x48, a1 + 0x148);
}
