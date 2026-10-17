// IGI native provenance: Camera_ApplyPostProcess_11 - 0x004A7E61 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7E61-Camera_ApplyPostProcess_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_11.h"
int32_t* Camera_ApplyPostProcess_11(int32_t context, int32_t* param_2, int32_t* param_3)

{
    int32_t f0 = param_2[1];
    param_2[1] -= 1;
    uint32_t data_1;

    if (f0 - 1 < 0)
    {
        int32_t item_c_1 = context;
        data_1 = Camera_ApplyHandiCam_11(param_2);
    }
    else
    {
        char data_val = context;
        **param_2 = data_val;
        *param_2 += 1;
        data_1 = data_val;
    }

    if (data_1 != 0xffffffff)
    {
        *param_3 += 1;
        return param_3;
    }

    *param_3 = 0xffffffff;
    return param_3;
}
