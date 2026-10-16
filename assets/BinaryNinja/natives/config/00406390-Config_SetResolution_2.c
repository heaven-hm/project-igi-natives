#include "Config_SetResolution_2.h"
int32_t __fastcall Config_SetResolution_2(int32_t a1)

{
    int32_t v_4 = a1;
    int32_t ctxB = *(Config_GetActivePlayerProfileRecord() + 0x18);

    v_4 = !(ctxB & 1) ? ctxB & 2 : 1;

    (*((Sys_ReadFileBlock_9() << 2) + &g_a94e84))(&v_4);
    int32_t srcS1 = ~ctxB;
    App_ContextSetTerrainLightmapsUsed(srcS1 >> 2 & 1);
    App_ContextSetLightmapsUsed(srcS1 >> 3 & 1);
    int32_t saved_src;

    if (ctxB & 0x10)
        saved_src = 0x60;
    else if (!(ctxB & 0x20))
        saved_src = 0xa3;
    else
        saved_src = 0x81;

    Render_SetupLighting_4(saved_src);
    int32_t __saved_esi_1;

    if (ctxB & 0x80)
        __saved_esi_1 = 0x40000000;
    else if (!(ctxB & 0x40))
        __saved_esi_1 = 0x3f800000;
    else
        __saved_esi_1 = 0x3fc00000;

    Render_SkinBones_3(__saved_esi_1);

    if (!(*(&ctxB + 1) & 1))
        return Display_SetGammaRamp_17(1);

    return Display_SetGammaRamp_17(0);
}
