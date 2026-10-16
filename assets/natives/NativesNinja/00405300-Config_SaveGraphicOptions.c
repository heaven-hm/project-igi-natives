#include "00405300-Config_SaveGraphicOptions.h"
/* 0x00405300 Config_SaveGraphicOptions full linked: callers=2 callees=7 */
int32_t Config_SaveGraphicOptions()

{
    int32_t eax_6 = g_5382d8;
    g_bc2384 = 0;
    g_bc28c8 = eax_6;
    g_bc2380 = 1;
    g_bc28e8 = 1;
    g_bc2388 = 1;
    int32_t ecx;
    int32_t edx;

    if (sub_4a5980(&g_5c8c20, edx, ecx, &g_5c8c20, "USA"))
    {
        int32_t eax_1 = sub_48f2c0();
        int32_t eax_2 = -(eax_1);
        g_bc238c = -((eax_2 - eax_2));
        g_bc2390 = !sub_48f2c0();
    }
    else
    {
        g_bc238c = 5;
        g_bc2390 = 1;
    }

    int32_t var_28 = 0;
    int32_t var_2c = 0;
    void var_18;
    int32_t result = Config_ResetGraphicOptions(&var_18);
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
