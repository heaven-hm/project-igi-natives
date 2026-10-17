// IGI native provenance: SCamera_Cleanup_2 - 0x00442070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00442070-SCamera_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Cleanup_2.h"
int32_t* SCamera_Cleanup_2(void* context)

{
    int32_t* data_val = *(context + 0x25c4);

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        *(context + 0x25c4) = 0;
    }

    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), context);
    DynObj_TryingToRemoveUnrigi(g_57c18c, context);
    Render_SetupLighting_14(context);
    DynObj_RegisterSymbol_9(*(context + 0x68), context);
    return FX_TrailUpdate_13(context + 0x188);
}
