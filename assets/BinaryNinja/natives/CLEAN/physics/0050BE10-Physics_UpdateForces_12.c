// IGI native provenance: Physics_UpdateForces_12 - 0x0050BE10 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0050BE10-Physics_UpdateForces_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_UpdateForces_12.h"
void* Physics_UpdateForces_12(int32_t* context)

{
    void* flagP = *context;
    void* result = Mem_Alloc(context[3] * context[7], 4);
    *(flagP + 0xc) = result;
    int32_t entity_1 = context[3] * context[7];
    int32_t source_1;
    int32_t dest_1;
    dest_1 = memcpy(result, context[0xb], entity_1 & 0xfffffffc);
    memcpy(dest_1, source_1, entity_1 & 3);
    result = context[6];
    *(flagP + 4) = result;
    *(flagP + 6) = context[7];
    *(flagP + 8) = context[3];
    result = context[8];
    *(flagP + 0xa) = result;
    return result;
}
