// IGI native provenance: Physics_ApplyImpulse_2 - 0x00503D50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00503D50-Physics_ApplyImpulse_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ApplyImpulse_2.h"
int32_t Physics_ApplyImpulse_2(void* context, char param_2)

{
    *(context + 0x60) = param_2;
    return param_2;
}
