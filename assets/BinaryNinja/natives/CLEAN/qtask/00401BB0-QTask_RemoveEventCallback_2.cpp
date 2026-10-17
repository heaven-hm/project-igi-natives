// IGI native provenance: QTask_RemoveEventCallback_2 - 0x00401BB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401BB0-QTask_RemoveEventCallback_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_RemoveEventCallback_2.h"
void* QTask_RemoveEventCallback_2(int32_t* context, void* param_2)

{
    int32_t context_val = *(param_2 + 0x14);
    QTask_AllocateEvent(context);
    void* result = Camera_ApplyWideScreen_33(param_2, context);
    context[5] = context_val;
    return result;
}
