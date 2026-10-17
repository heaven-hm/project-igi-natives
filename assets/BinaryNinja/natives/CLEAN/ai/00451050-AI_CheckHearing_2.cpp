// IGI native provenance: AI_CheckHearing_2 - 0x00451050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451050-AI_CheckHearing_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_2.h"
void* AI_CheckHearing_2(void* context, int32_t* param_2)

{
    param_2[1] = 0;
    *param_2 = 0;
    return Camera_SetFieldOfView_33(context + 0x1508, param_2);
}
