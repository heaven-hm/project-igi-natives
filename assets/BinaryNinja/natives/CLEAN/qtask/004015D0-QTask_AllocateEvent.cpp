// IGI native provenance: QTask_AllocateEvent - 0x004015D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004015D0-QTask_AllocateEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_AllocateEvent.h"
int32_t* QTask_AllocateEvent(int32_t* context)

{
    int32_t* result = context;

    if (result[5])
        result = Camera_ApplyHandiCam_33(result);

    return result;
}
