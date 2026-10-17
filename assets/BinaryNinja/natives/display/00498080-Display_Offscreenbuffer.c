// IGI native provenance: Display_Offscreenbuffer - 0x00498080 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498080-Display_Offscreenbuffer.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_Offscreenbuffer.h"
int32_t Display_Offscreenbuffer()

{
    g_6e5bb8 = Sys_RendermodeFailedToCr("OffscreenBuffer");
    int32_t data_1 = Display_SetDisplayMode_5();
    Sys_CheckHeap_2(g_6e5bb8, data_1, sub_498230);
    int32_t data_3 = Display_SyncVSync_5();
    Sys_CheckHeap_2(g_6e5bb8, data_3, AIGraph_LoadParameters);
    int32_t data_4 = Display_SetGammaRamp_5();
    Sys_CheckHeap_2(g_6e5bb8, data_4, sub_498260);
    int32_t data_5 = Display_CheckCapabilities_5();
    Sys_CheckHeap_2(g_6e5bb8, data_5, AIGraph_LoadParameters);
    int32_t data_7 = Display_CreateSurface_4();
    Sys_CheckHeap_2(g_6e5bb8, data_7, sub_498290);
    int32_t data_8 = Display_SetGammaRamp_4();
    int32_t result = Sys_CheckHeap_2(g_6e5bb8, data_8, sub_498140);
    g_6e5bbc = 1;
    return result;
}
