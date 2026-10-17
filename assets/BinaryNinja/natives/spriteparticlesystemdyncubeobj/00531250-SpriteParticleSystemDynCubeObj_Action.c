// Original IGI.EXE function: SpriteParticleSystemDynCubeObj_Action (VA 0x00531250; static CFG gate PASS, CFG score 1.000).
#include "SpriteParticleSystemDynCubeObj_Action.h"
int32_t SpriteParticleSystemDynCubeObj_Action(int32_t a1, int32_t* a2)

{
    DynObj_RegisterSymbol_9(a1, a2);
    int32_t* srcS = g_afa814;
    int32_t objC1 = *(a2[0x1e] + srcS);
    int32_t valA1 = g_afa808 - 1;
    g_afa808 = valA1;

    if (objC1 != valA1)
    {
        int32_t tmpD1 = g_afa804;
        int32_t valA4 = *(tmpD1 + (valA1 << 2)) * g_afa810 + g_afa800;
        int32_t dstD2 = *(tmpD1 + (objC1 << 2));
        int32_t srcS1 = *(srcS + valA4);
        *(tmpD1 + (objC1 << 2)) = *(tmpD1 + (srcS1 << 2));
        *(g_afa804 + (srcS1 << 2)) = dstD2;
        *(g_afa814 + valA4) = objC1;
    }

    return QTask_FindType(a2);
}
