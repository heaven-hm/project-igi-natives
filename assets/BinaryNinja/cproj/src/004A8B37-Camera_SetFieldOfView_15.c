#include "gi_platform.h"
#include "004A8B37-Camera_SetFieldOfView_15.h"
🌐  int32_t __fastcall __trandisp2(int32_t a1, void* a2, void* a3 , long double a4 , long double a5 )

{
    int16_t ctxB;

    if ((*(int32_t*)(uintptr_t)(a2 + 0xe)) != 5)
        ctxB = 0x133f;
    else
    {
        ctxB = (*(int32_t*)(uintptr_t)(a3 - 0xa4));
        (*(int32_t*)(uintptr_t)(&ctxB + 1)) |= 2;
        (*(int32_t*)(uintptr_t)(&ctxB + 1)) &= 0xfe;
        ctxB = 0x3f;
    }

    (*(int32_t*)(uintptr_t)(a3 - 0xa2)) = ctxB;
    int16_t x87control;
    int16_t x87status;
    x87control = __fldcw_memmem16((*(int32_t*)(uintptr_t)(a3 - 0xa2)));
    bool c0;
    bool c1;
    bool c2;
    bool c3;
    c0 = __fxam(a4);
    (*(int32_t*)(uintptr_t)(a3 - 0x94)) = a2;
    (*(int32_t*)(uintptr_t)(a3 - 0xa0)) =
        (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    (*(int32_t*)(uintptr_t)(a3 - 0x90)) = 0;
    a1 = (*(int32_t*)(uintptr_t)(a3 - 0x9f));
    bool c0_1;
    bool c1_1;
    bool c2_1;
    bool c3_1;
    c0_1 = __fxam(a5);
    (*(int32_t*)(uintptr_t)(a3 - 0xa0)) =
        (c0_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe;
    (*(int32_t*)(uintptr_t)(&a1 + 1)) = (*(int32_t*)(uintptr_t)(a3 - 0x9f));
    (*(int32_t*)(uintptr_t)(&a1 + 1)) <<= 1;
    (*(int32_t*)(uintptr_t)(&a1 + 1)) s>>= 1;
    (*(int32_t*)(uintptr_t)(&a1 + 1)) = ROLB((*(int32_t*)(uintptr_t)(&a1 + 1)), 1);
    int32_t valA;
    valA = (*(int32_t*)(uintptr_t)(&a1 + 1));
    valA &= 0xf;
    valA = (*(int32_t*)(uintptr_t)(&g_5443cd + valA));
    (*(int32_t*)(uintptr_t)(&valA + 1)) = valA;
    a1 <<= 1;
    a1 s>>= 1;
    a1 = ROLB(a1, 1);
    valA = a1;
    valA &= 0xf;
    valA = (*(int32_t*)(uintptr_t)(&g_5443cd + valA));
    (*(int32_t*)(uintptr_t)(&valA + 1)) <<= 1;
    (*(int32_t*)(uintptr_t)(&valA + 1)) <<= 1;
    /* jump -> (*(int32_t*)(uintptr_t)(a2 + (valA | *(&valA + 1)) + 0x10)) */
}
