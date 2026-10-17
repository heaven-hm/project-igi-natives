// IGI native provenance: FX_DebrisSpawn_15 - 0x0048A320 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048A320-FX_DebrisSpawn_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_15.h"
void* FX_DebrisSpawn_15(void* context)

{
    *(context + 0x64c) = 1;
    return context;
}
