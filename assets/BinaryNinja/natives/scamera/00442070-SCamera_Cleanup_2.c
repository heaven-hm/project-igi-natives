// Original IGI.EXE function: SCamera_Cleanup_2 (VA 0x00442070; static CFG gate PASS, CFG score 1.000).
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
