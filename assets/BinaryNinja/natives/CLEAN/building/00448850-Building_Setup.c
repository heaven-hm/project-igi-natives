// IGI native provenance: Building_Setup - 0x00448850 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00448850-Building_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Building_Setup.h"
int32_t Building_Setup(void* context)

{
    DynObj_RegisterSymbol_9(*(context + 0x68), context);
    return (*((Render_ComputeNormals_15() << 2) + &g_a976e0))(context);
}
