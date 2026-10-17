// IGI native provenance: Level_LoadObjects_8 - 0x00416FC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416FC0-Level_LoadObjects_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_LoadObjects_8.h"
int32_t Level_LoadObjects_8()

{
    void* entity_val = g_57babc;
    int32_t result = *(entity_val + 0xe4);
    *(entity_val + 0xe4) = result + 1;
    return result;
}
