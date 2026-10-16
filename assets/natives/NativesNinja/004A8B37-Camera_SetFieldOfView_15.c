#include "004A8B37-Camera_SetFieldOfView_15.h"
/* 0x004a8b37 Camera_SetFieldOfView_15 full linked: callers=2 callees=0 */
🌐  int32_t __fastcall __trandisp2(int32_t a1, void* a2, void* a3 @ ebp, long double a4 @ st0, long double a5 @ st1)

{
    int16_t ebx;

    if (*(a2 + 0xe) != 5)
        ebx = 0x133f;
    else
    {
        ebx = *(a3 - 0xa4);
        *(&ebx + 1) |= 2;
        *(&ebx + 1) &= 0xfe;
        ebx = 0x3f;
    }

    *(a3 - 0xa2) = ebx;
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
    int32_t eax;
    eax = *(&a1 + 1);
    eax &= 0xf;
    eax = *(&g_5443cd + eax);
    *(&eax + 1) = eax;
    a1 <<= 1;
    a1 s>>= 1;
    a1 = ROLB(a1, 1);
    eax = a1;
    eax &= 0xf;
    eax = *(&g_5443cd + eax);
    *(&eax + 1) <<= 1;
    *(&eax + 1) <<= 1;
❓    /* jump -> *(a2 + (eax | *(&eax + 1)) + 0x10) */
}
