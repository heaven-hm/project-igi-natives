// Original IGI.EXE function: Config_SaveGraphicOptions (VA 0x00405300; static CFG gate PASS, CFG score 0.952).
#include "Config_SaveGraphicOptions.h"
int32_t Config_SaveGraphicOptions()

{
    int32_t valA6 = g_5382d8;
    g_bc2384 = 0;
    g_bc28c8 = valA6;
    g_bc2380 = 1;
    g_bc28e8 = 1;
    g_bc2388 = 1;
    int32_t objC;
    int32_t tmpD;

    if (Camera_UpdateTransform_6(&g_5c8c20, tmpD, objC, &g_5c8c20, "USA"))
    {
        int32_t valA1 = FX_FragmentSimulate_26();
        int32_t valA2 = -(valA1);
        g_bc238c = -((valA2 - valA2));
        g_bc2390 = !FX_FragmentSimulate_26();
    }
    else
    {
        g_bc238c = 5;
        g_bc2390 = 1;
    }

    int32_t v_28 = 0;
    int32_t v_2c = 0;
    void v_18;
    int32_t result = Config_ResetGraphicOptions(&v_18);
    g_bc25b9 = 1;
    g_bc25bb = 0;
    g_bc25b8 = 1;
    g_bc25ba = 1;
    g_bc25b0 = 0x3f800000;
    g_bc25ac = 0x3f800000;
    g_bc25b4 = 0x3f800000;
    g_bc28bc = 0x1b;
    memcpy(&g_bc25bc, &g_536410, 0x144);
    g_bc28c0 = 1;
    g_bc28c4 = 0x3ecccccd;
    return result;
}
