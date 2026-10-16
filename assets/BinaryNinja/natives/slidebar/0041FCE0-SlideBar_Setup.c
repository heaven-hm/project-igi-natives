#include "SlideBar_Setup.h"
int32_t SlideBar_Setup(int32_t a1)

{
    int32_t srcS = a1;
    void* ctxB = *(srcS + 0x98);
    int32_t v_10 = *(srcS + 0x9c);
    a1 = *(srcS + 0xb4);
    long double x87_r7_1 = (Menu_FormatScreen_4(*(srcS + 0x44)) - 8) * 0.125f;
    long double f0 = 0f;
    x87_r7_1 - f0;
    float v_8_1;

    v_8_1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0f : x87_r7_1;

    int32_t flagP1 = *(srcS + 0x20) + 2;
    int32_t dstD1 = *(srcS + 0x24) + 2;
    *(ctxB + 0x20) = flagP1;
    *(ctxB + 0x24) = dstD1;
    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(srcS);

    if (!a1)
    {
        dstD1 = dstD1 + *(ctxB + 0x2c) + 1;
        *(v_10 + 0x20) = flagP1;
        *(v_10 + 0x24) = *(srcS + 0xac) + dstD1 + 1;
    }
    else
    {
        flagP1 = *(ctxB + 0x28) + flagP1 + 1;
        *(v_10 + 0x20) = *(srcS + 0xac) + flagP1 + 1;
        *(v_10 + 0x24) = dstD1;
    }

    void* ctxB4 = *(srcS + 0x98);
    int32_t valA15 = StatusScreen_GetEvent();
    int32_t objC4 = 0;
    objC4 = *(ctxB4 + 0x1c);
    (*(((valA15 * 0x180 + objC4) << 2) + &g_a96ae0))(ctxB4);
    void* ctxB5 = *(srcS + 0x9c);
    int32_t valA20 = StatusScreen_GetEvent();
    int32_t valA21 = 0;
    valA21 = *(ctxB5 + 0x1c);
    (*(((valA20 * 0x180 + valA21) << 2) + &g_a96ae0))(ctxB5);
    void* valA23 = *(srcS + 0x94);
    float ctxB6 = v_8_1;

    if (valA23)
    {
        float v_8_2;

        if (!a1)
        {
            v_8_2 = 0f;
            int32_t valA25 = Sys_ExecuteBytecode_17(valA23);
            v_10 = (*(srcS + 0xac) - valA25) * *(srcS + 0xa0);
            a1 = v_10;
        }
        else
        {
            int32_t valA24 = Sys_CloseFileStream_17(valA23);
            a1 = 0;
            v_8_1 = (*(srcS + 0xac) - valA24) * *(srcS + 0xa0);
            v_8_2 = v_8_1;
        }

        int32_t objC11 = (g_c28b44 >> 1) + flagP1 - 0x140;
        int32_t v_48_1 = objC11;
        int32_t v_4c_1 = objC11;
        Sys_AllocateMemory_15(*(srcS + 0x94), v_8_2 + objC11, a1 + dstD1 + (g_c28b48 >> 1) - 0xf0, 128f,
            128f, 128f, ctxB6, 0x3f800000, 0, 0x80000, 0);
    }

    return Menu_DrawWidget_14(srcS, 0.5f, ctxB6, *(srcS + 0x4d));
}
