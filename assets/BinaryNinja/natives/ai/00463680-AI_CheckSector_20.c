// IGI native provenance: AI_CheckSector_20 - 0x00463680 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00463680-AI_CheckSector_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckSector_20.h"
int32_t AI_CheckSector_20(void* context)

{
    int32_t* entity_val = *(context + 0x768);

    if (!entity_val)
        return 0;

    return *entity_val;
}
