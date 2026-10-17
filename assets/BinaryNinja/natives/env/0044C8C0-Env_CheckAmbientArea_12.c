// IGI native provenance: Env_CheckAmbientArea_12 - 0x0044C8C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044C8C0-Env_CheckAmbientArea_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_CheckAmbientArea_12.h"
void* Env_CheckAmbientArea_12()

{
    int32_t* entity_val = **&g_5bda60;
    int32_t data_val = *entity_val;
    int32_t data_1 = -(data_val);
    return (data_1 - data_1) & entity_val;
}
