// IGI native provenance: Light_CalculateAttenuation_9 - 0x0052D030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D030-Light_CalculateAttenuation_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_CalculateAttenuation_9.h"
int32_t Light_CalculateAttenuation_9(void* context)

{
    g_a84568 = 0;
    int32_t* data_val = *(context + 0x50);
    (*(*data_val + 8))(data_val);
    return Sys_ExecuteBytecode_2(context);
}
