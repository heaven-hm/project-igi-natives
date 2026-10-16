#include "SCamera_Cleanup_2.h"
int32_t* SCamera_Cleanup_2(void* a1)

{
    int32_t* valA = *(a1 + 0x25c4);

    if (valA)
    {
        Qtask_UpdateList(valA);
        *(a1 + 0x25c4) = 0;
    }

    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), a1);
    DynObj_TryingToRemoveUnrigi(g_57c18c, a1);
    Render_SetupLighting_14(a1);
    DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
    return FX_TrailUpdate_13(a1 + 0x188);
}
