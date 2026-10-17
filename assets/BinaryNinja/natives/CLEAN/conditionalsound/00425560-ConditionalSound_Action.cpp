// IGI native provenance: ConditionalSound_Action - 0x00425560 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00425560-ConditionalSound_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalSound_Action.h"
int32_t* ConditionalSound_Action(void* context)

{
    int32_t* result = ConditionalSound_Stop(context);
    result = 0;
    *(context + 0xb0) = 0;
    *(context + 0xb1) = 0;
    return result;
}
