// Original IGI.EXE function: Light_UpdateGlobalLight_6 (VA 0x00528460; static CFG gate PASS, CFG score 1.000).
#include "Light_UpdateGlobalLight_6.h"
void Light_UpdateGlobalLight_6(float a1)

{
    void* objC2 = g_a8437c;

    if (!objC2)
        return;

    long double x87_r7_1 = a1;
    long double f0_1 = *(objC2 + 0x194);
    x87_r7_1 - f0_1;

    if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        *(objC2 + 0x194) = a1;
        Light_RenderLensflare_6(g_a8437c);
    }
}
