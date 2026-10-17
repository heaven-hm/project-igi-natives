// IGI native provenance: Physics_ApplyImpulse_6 - 0x00507E90 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00507E90-Physics_ApplyImpulse_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ApplyImpulse_6.h"
int32_t Physics_ApplyImpulse_6(int32_t* context, int32_t param_2)

{
    *context = param_2;
    memset(&context[1], 0, 0x1c);
    memset(&context[8], 0, 0x40);
    return 0;
}
