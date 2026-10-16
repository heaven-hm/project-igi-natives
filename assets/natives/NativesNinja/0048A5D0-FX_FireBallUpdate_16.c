#include "0048A5D0-FX_FireBallUpdate_16.h"
/* 0x0048a5d0 FX_FireBallUpdate_16 full linked: callers=3 callees=5 */
int32_t sub_48a5d0(void* a1)

{
    char ebx = g_bcadf8;
    char esi = g_bcadf0;
    char edi = g_bcadf4;
    Display_SetBackgroundColourFn(0, 0, 0);
    sub_491a30();
    Display_SetBackgroundColourFn(esi, edi, ebx);
    sub_4983d0(a1 + 0x10);
    return sub_4b0d10(a1);
}
