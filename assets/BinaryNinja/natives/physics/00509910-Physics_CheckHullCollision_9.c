// IGI native provenance: Physics_CheckHullCollision_9 - 0x00509910 - CFG score 52.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00509910-Physics_CheckHullCollision_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CheckHullCollision_9.h"
int32_t Physics_CheckHullCollision_9()

{
    Physics_ApplyImpulse_12();
    /* tailcall */
    return Physics_ApplyImpulse_11();
}
