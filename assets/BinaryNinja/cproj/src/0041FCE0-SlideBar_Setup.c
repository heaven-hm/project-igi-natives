#include "gi_platform.h"
#include "0041FCE0-SlideBar_Setup.h"
int32_t SlideBar_Setup(int32_t a1)

{
    int32_t srcS = a1;
    void* ctxB = (*(int32_t*)(uintptr_t)(srcS + 0x98));
    int32_t v_10 = (*(int32_t*)(uintptr_t)(srcS + 0x9c));
    a1 = (*(int32_t*)(uintptr_t)(srcS + 0xb4));
    long double x87_r7_1 = (Menu_FormatScreen_4((*(int32_t*)(uintptr_t)(srcS + 0x44))) - 8) * 0.125.0f;
    long double f0 = 0.0f;
    x87_r7_1 - f0;
    float v_8_1;

    v_8_1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.0f : x87_r7_1;

    int32_t flagP1 = (*(int32_t*)(uintptr_t)(srcS + 0x20)) + 2;
    int32_t dstD1 = (*(int32_t*)(uintptr_t)(srcS + 0x24)) + 2;
    (*(int32_t*)(uintptr_t)(ctxB + 0x20)) = flagP1;
    (*(int32_t*)(uintptr_t)(ctxB + 0x24)) = dstD1;
    ((int(*)())(uintptr_t)(*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0)))(srcS);

    if (!a1)
    {
        dstD1 = dstD1 + (*(int32_t*)(uintptr_t)(ctxB + 0x2c)) + 1;
        *(v_10 + 0x20) = flagP1;
        *(v_10 + 0x24) = (*(int32_t*)(uintptr_t)(srcS + 0xac)) + dstD1 + 1;
    }
    else
    {
        flagP1 = (*(int32_t*)(uintptr_t)(ctxB + 0x28)) + flagP1 + 1;
        *(v_10 + 0x20) = (*(int32_t*)(uintptr_t)(srcS + 0xac)) + flagP1 + 1;
        *(v_10 + 0x24) = dstD1;
    }

    void* ctxB4 = (*(int32_t*)(uintptr_t)(srcS + 0x98));
    int32_t valA15 = StatusScreen_GetEvent();
    int32_t objC4 = 0;
    objC4 = *(ctxB4 + 0x1c);
    ((int(*)())(uintptr_t)(*(((valA15 * 0x180 + objC4) << 2) + &g_a96ae0)))(ctxB4);
    void* ctxB5 = (*(int32_t*)(uintptr_t)(srcS + 0x9c));
    int32_t valA20 = StatusScreen_GetEvent();
    int32_t valA21 = 0;
    valA21 = *(ctxB5 + 0x1c);
    ((int(*)())(uintptr_t)(*(((valA20 * 0x180 + valA21) << 2) + &g_a96ae0)))(ctxB5);
    void* valA23 = (*(int32_t*)(uintptr_t)(srcS + 0x94));
    float ctxB6 = v_8_1;

    if (valA23)
    {
        float v_8_2;

        if (!a1)
        {
            v_8_2 = 0.0f;
            int32_t valA25 = Sys_ExecuteBytecode_17(valA23);
            v_10 = ((*(int32_t*)(uintptr_t)(srcS + 0xac)) - valA25) * (*(int32_t*)(uintptr_t)(srcS + 0xa0));
            a1 = v_10;
        }
        else
        {
            int32_t valA24 = Sys_CloseFileStream_17(valA23);
            a1 = 0;
            v_8_1 = ((*(int32_t*)(uintptr_t)(srcS + 0xac)) - valA24) * (*(int32_t*)(uintptr_t)(srcS + 0xa0));
            v_8_2 = v_8_1;
        }

        int32_t objC11 = (g_c28b44 >> 1) + flagP1 - 0x140;
        int32_t v_48_1 = objC11;
        int32_t v_4c_1 = objC11;
        Sys_AllocateMemory_15((*(int32_t*)(uintptr_t)(srcS + 0x94)), v_8_2 + objC11, a1 + dstD1 + (g_c28b48 >> 1) - 0xf0, 128.0f,
            128.0f, 128.0f, ctxB6, 0x3f800000, 0, 0x80000, 0);
    }

    return Menu_DrawWidget_14(srcS, 0.5.0f, ctxB6, (*(int32_t*)(uintptr_t)(srcS + 0x4d)));
}
