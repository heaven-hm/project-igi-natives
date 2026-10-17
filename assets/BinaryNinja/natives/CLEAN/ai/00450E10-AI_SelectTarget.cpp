// IGI native provenance: AI_SelectTarget - 0x00450E10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450E10-AI_SelectTarget.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget.h"
void* AI_SelectTarget(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t* data_val = AI_ActionstackFull(g_5bda58);
    data_val[1] = 0;
    *data_val = 0;
    int32_t temp_val = g_5bda64;
    data_val[6] = 0;
    data_val[2] = temp_val;
    data_val[4] = param_3;
    data_val[7] = 0;
    data_val[8] = 0;
    data_val[9] = 0;
    data_val[5] = context;
    data_val[0xa] = param_2;
    data_val[0xb] = 1;
    return Camera_SetFieldOfView_33(g_5bda5c, data_val);
}
