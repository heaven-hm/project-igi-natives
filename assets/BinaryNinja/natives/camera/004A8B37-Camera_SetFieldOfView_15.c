// Original IGI.EXE function: Camera_SetFieldOfView_15 (VA 0x004A8B37; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_15.h"
🌐  int32_t __fastcall __trandisp2(int32_t a1, void* a2, void* a3 @ flagP, long double a4 @ fp0, long double a5 @ fp1)

{
    int16_t ctxB;

    if (*(a2 + 0xe) != 5)
        ctxB = 0x133f;
    else
    {
        ctxB = *(a3 - 0xa4);
        *(&ctxB + 1) |= 2;
        *(&ctxB + 1) &= 0xfe;
        ctxB = 0x3f;
    }

    *(a3 - 0xa2) = ctxB;
    int16_t x87control;
    int16_t x87status;
    x87control = __fldcw_memmem16(*(a3 - 0xa2));
    bool c0;
    bool c1;
    bool c2;
    bool c3;
    c0 = __fxam(a4);
    *(a3 - 0x94) = a2;
    *(a3 - 0xa0) =
        (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    *(a3 - 0x90) = 0;
    a1 = *(a3 - 0x9f);
    bool c0_1;
    bool c1_1;
    bool c2_1;
    bool c3_1;
    c0_1 = __fxam(a5);
    *(a3 - 0xa0) =
        (c0_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe;
    *(&a1 + 1) = *(a3 - 0x9f);
    *(&a1 + 1) <<= 1;
    *(&a1 + 1) s>>= 1;
    *(&a1 + 1) = ROLB(*(&a1 + 1), 1);
    int32_t valA;
    valA = *(&a1 + 1);
    valA &= 0xf;
    valA = *(&g_5443cd + valA);
    *(&valA + 1) = valA;
    a1 <<= 1;
    a1 s>>= 1;
    a1 = ROLB(a1, 1);
    valA = a1;
    valA &= 0xf;
    valA = *(&g_5443cd + valA);
    *(&valA + 1) <<= 1;
    *(&valA + 1) <<= 1;
❓    /* jump -> *(a2 + (valA | *(&valA + 1)) + 0x10) */
}
