// IGI native provenance: Light_UpdateGlobalLight_6 - 0x00528460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00528460-Light_UpdateGlobalLight_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_UpdateGlobalLight_6.h"
void Light_UpdateGlobalLight_6(float context)

{
    void* entity_2 = g_a8437c;

    if (!entity_2)
        return;

    long double fpu_val_7_1 = context;
    long double f0_1 = *(entity_2 + 0x194);
    fpu_val_7_1 - f0_1;

    if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        *(entity_2 + 0x194) = context;
        Light_RenderLensflare_6(g_a8437c);
    }
}
