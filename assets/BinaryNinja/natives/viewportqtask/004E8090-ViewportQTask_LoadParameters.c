// IGI native provenance: ViewportQTask_LoadParameters - 0x004E8090 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8090-ViewportQTask_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ViewportQTask_LoadParameters.h"
int32_t ViewportQTask_LoadParameters(void* context)

{
    DynObj_CreateMagicObject_4(*(context + 0xc4));
    g_a5ec60 -= 1;
    Display_SwapBuffers_13(context + 0x54);
    return Terrain_UpdateWaterWaves_8(*(context + 0xac));
}
