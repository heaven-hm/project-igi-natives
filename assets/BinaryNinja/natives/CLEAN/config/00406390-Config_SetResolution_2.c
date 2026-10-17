// IGI native provenance: Config_SetResolution_2 - 0x00406390 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406390-Config_SetResolution_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SetResolution_2.h"
int32_t __fastcall Config_SetResolution_2(int32_t context)

{
    int32_t item_4 = context;
    int32_t context_val = *(Config_GetActivePlayerProfileRecord() + 0x18);

    item_4 = !(context_val & 1) ? context_val & 2 : 1;

    (*((Sys_ReadFileBlock_9() << 2) + &g_a94e84))(&item_4);
    int32_t source_1 = ~context_val;
    App_ContextSetTerrainLightmapsUsed(source_1 >> 2 & 1);
    App_ContextSetLightmapsUsed(source_1 >> 3 & 1);
    int32_t saved_src;

    if (context_val & 0x10)
        saved_src = 0x60;
    else if (!(context_val & 0x20))
        saved_src = 0xa3;
    else
        saved_src = 0x81;

    Render_SetupLighting_4(saved_src);
    int32_t saved_esi_1;

    if (context_val & 0x80)
        saved_esi_1 = 0x40000000;
    else if (!(context_val & 0x40))
        saved_esi_1 = 0x3f800000;
    else
        saved_esi_1 = 0x3fc00000;

    Render_SkinBones_3(saved_esi_1);

    if (!(*(&context_val + 1) & 1))
        return Display_SetGammaRamp_17(1);

    return Display_SetGammaRamp_17(0);
}
