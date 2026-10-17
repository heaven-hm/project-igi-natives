// IGI native provenance: Physics_CheckHullCollision_11 - 0x0050A6A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A6A0-Physics_CheckHullCollision_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CheckHullCollision_11.h"
int32_t Physics_CheckHullCollision_11(void* context)

{
    int32_t result = Sys_ExecuteBytecode_2(*(context + 8));
    *(context + 8) = 0;
    return result;
}
