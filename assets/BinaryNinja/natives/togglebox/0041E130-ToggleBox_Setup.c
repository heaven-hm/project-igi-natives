// Original IGI.EXE function: ToggleBox_Setup (VA 0x0041E130; static CFG gate PASS, CFG score 1.000).
#include "ToggleBox_Setup.h"
int32_t ToggleBox_Setup(int32_t a1)

{
    int32_t srcS = a1;
    void* v_10;
    void* dstD;

    if (!*(srcS + 0xa4))
    {
        void* valA1 = *(srcS + 0x98);
        v_10 = valA1;
        dstD = valA1;
    }
    else
    {
        dstD = *(srcS + 0x94);
        v_10 = dstD;
    }

    long double x87_r7_1 = (Menu_FormatScreen_4(*(srcS + 0x44)) - 8) * 0.125f;
    long double f0 = 0f;
    x87_r7_1 - f0;

    a1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(srcS);
    int32_t* valA8 = *(srcS + 0x9c);

    if (valA8 && *(srcS + 0xa0))
    {
        int32_t valA9 = Sys_AllocateMemory_22(valA8);
        int32_t valA11;
        int32_t tmpD2;
        tmpD2 = HIGHD(*(srcS + 0x2c) - valA9);
        valA11 = LOWD(*(srcS + 0x2c) - valA9);
        int32_t ctxB5 = ((valA11 - tmpD2) >> 1) + *(srcS + 0x24);
        int32_t valA14;
        int32_t tmpD4;
        tmpD4 = HIGHD(Sys_CheckHeap_21(*(srcS + 0x9c)));
        valA14 = LOWD(Sys_CheckHeap_21(*(srcS + 0x9c)));
        int32_t valA17;
        int32_t tmpD5;
        tmpD5 = HIGHD(*(srcS + 0x28));
        valA17 = LOWD(*(srcS + 0x28));
        int32_t dstD4 = ((valA17 + (tmpD5 & 3)) >> 2) - ((valA14 - tmpD4) >> 1) + *(srcS + 0x20);
        int32_t valA21;
        int32_t tmpD8;
        tmpD8 = HIGHD(Sys_CheckHeap_21(*(srcS + 0xa0)));
        valA21 = LOWD(Sys_CheckHeap_21(*(srcS + 0xa0)));
        int32_t valA25;
        int32_t tmpD9;
        tmpD9 = HIGHD(*(srcS + 0x28) * 3);
        valA25 = LOWD(*(srcS + 0x28) * 3);
        int32_t valA27 = dstD4 + (g_c28b44 >> 1) - 0x140;
        int32_t tmpD14 = (g_c28b44 >> 1) + ((valA25 + (tmpD9 & 3)) >> 2)
            - ((valA21 - tmpD8) >> 1) + *(srcS + 0x20) - 0x140;
        int32_t objC10 = ctxB5 + (g_c28b48 >> 1) - 0xf0;
        *(*(srcS + 0x9c) + 0x14) = 0;
        *(*(srcS + 0x9c) + 0x18) = 0;
        *(*(srcS + 0x9c) + 0x1c) = 0;
        void* valA31 = *(srcS + 0x9c);
        *(valA31 + 0x24) |= 0x80000;
        *(*(srcS + 0x9c) + 0x10) = a1;
        *(*(srcS + 0x9c) + 4) = valA27;
        long double x87_r7_4 = objC10;
        *(*(srcS + 0x9c) + 8) = x87_r7_4;
        Sys_CloseFileStream_18(*(srcS + 0x9c));
        *(*(srcS + 0xa0) + 0x14) = 0;
        *(*(srcS + 0xa0) + 0x18) = 0;
        *(*(srcS + 0xa0) + 0x1c) = 0;
        void* valA35 = *(srcS + 0xa0);
        *(valA35 + 0x24) |= 0x80000;
        *(*(srcS + 0xa0) + 0x10) = a1;
        *(*(srcS + 0xa0) + 4) = tmpD14;
        *(*(srcS + 0xa0) + 8) = x87_r7_4;
        Sys_CloseFileStream_18(*(srcS + 0xa0));
        dstD = v_10;
    }

    char valA38 = *(srcS + 0x4d);
    float v_10_1 = 64f;

    if (!valA38)
        v_10_1 = 0f;

    float v_c_2 = 64f;

    if (!valA38)
        v_c_2 = 0f;

    float ctxB6 = a1;
    float v_3c = v_10_1;
    float v_40 = v_10_1;
    int32_t objC17 = *(dstD + 0x24);
    int32_t v_44 = objC17;
    int32_t objC18 = *(dstD + 0x20);
    int32_t v_48 = objC18;
    Sys_DispatchOpcode_14((g_c28b44 >> 1) + objC18 - 0x140, (g_c28b48 >> 1) + objC17 - 0xf0,
        *(dstD + 0x28), *(dstD + 0x2c), v_c_2, 128f, v_10_1, ctxB6, 0x3f800000, 0x80000, 0);
    return Menu_DrawWidget_14(srcS, 0.5f, ctxB6, *(srcS + 0x4d));
}
