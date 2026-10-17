// IGI native provenance: AI_UpdatePatrol_3 - 0x00451380 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451380-AI_UpdatePatrol_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_3.h"
int32_t AI_UpdatePatrol_3(void* context, void* param_2)

{
    memcpy(context, DynObj_UpdateDynTree_4(**(*(param_2 + 0x3aa8) + 0xc)), 0x18);
    char result = AI_MoveToNode_19(**(*(param_2 + 0x3aa8) + 0xc));
    long double fpu7 = *(context + 0x10);

    if (!result)
    {
        *(context + 0x10) = fpu7 + 2048.0;
        return result;
    }

    *(context + 0x10) = fpu7 + 1024.0;
    return result;
}
