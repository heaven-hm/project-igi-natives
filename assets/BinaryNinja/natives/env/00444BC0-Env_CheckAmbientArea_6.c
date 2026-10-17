// IGI native provenance: Env_CheckAmbientArea_6 - 0x00444BC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00444BC0-Env_CheckAmbientArea_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_CheckAmbientArea_6.h"
void* Env_CheckAmbientArea_6(void* context)

{
    char entity_val = *(context + 0x1c4);
    *(context + 0x1c4) = 1;
    *(context + 0x1c5) = entity_val;
    *(context + 0x1c8) = *(g_bc2360 + 0x68);
    return context;
}
