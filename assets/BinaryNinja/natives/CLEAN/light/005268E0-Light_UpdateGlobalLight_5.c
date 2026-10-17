// IGI native provenance: Light_UpdateGlobalLight_5 - 0x005268E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005268E0-Light_UpdateGlobalLight_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_UpdateGlobalLight_5.h"
int32_t* Light_UpdateGlobalLight_5(int32_t context)

{
    int32_t entity_3 = g_a83d00;
    int32_t* result = *(g_a83cfc + (entity_3 << 2)) * g_a83d08 + g_a83cf8;
    *(g_a83d0c + result) = entity_3;
    g_a83d00 += 1;
    *result = context;
    return result;
}
