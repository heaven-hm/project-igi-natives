// IGI native provenance: Physics_InterpolateWaypoint_9 - 0x00509890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509890-Physics_InterpolateWaypoint_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_InterpolateWaypoint_9.h"
int32_t Physics_InterpolateWaypoint_9(void* context, int32_t param_2)

{
    int32_t result = param_2;
    result = *(context + 0x30) & result;
    return result;
}
