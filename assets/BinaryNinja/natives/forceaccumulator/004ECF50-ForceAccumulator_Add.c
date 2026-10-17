// IGI native provenance: ForceAccumulator_Add - 0x004ECF50 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004ECF50-ForceAccumulator_Add.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ForceAccumulator_Add.h"
void* ForceAccumulator_Add(void* context, int32_t param_2)

{
    memcpy(*(context + 0x54) + *(context + 0x5c) * 0x18, param_2, 0x18);
    *(context + 0x5c) += 1;
    return context;
}
