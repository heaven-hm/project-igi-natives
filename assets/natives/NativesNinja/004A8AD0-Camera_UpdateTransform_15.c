#include "004A8AD0-Camera_UpdateTransform_15.h"
/* 0x004a8ad0 Camera_UpdateTransform_15 full linked: callers=2 callees=0 */
🌐  int32_t __fastcall __trandisp1(int32_t a1, void* a2, void* a3 @ ebp, long double a4 @ st0)

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
    a1 <<= 1;
    a1 s>>= 1;
    a1 = ROLB(a1, 1);
    int32_t eax;
    eax = a1;
    eax &= 0xf;
❓    /* jump -> *(a2 + *(&g_5443cd + eax) + 0x10) */
}
