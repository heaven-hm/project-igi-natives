// IGI native provenance: Light_ComputeDirectionalLight_3 - 0x00523900 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00523900-Light_ComputeDirectionalLight_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_ComputeDirectionalLight_3.h"
void* Light_ComputeDirectionalLight_3(int32_t* context)

{
    Qhash_Init(1);
    Struct_Clear36(context);
    memset(context, 0, 0x24);
    return Qhash_Reset();
}
