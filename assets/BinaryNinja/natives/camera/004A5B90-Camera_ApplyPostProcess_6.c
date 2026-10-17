// IGI native provenance: Camera_ApplyPostProcess_6 - 0x004A5B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5B90-Camera_ApplyPostProcess_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_6.h"
void Camera_ApplyPostProcess_6(int32_t* context, int32_t param_2)

{
    for (int32_t* i = context; i < param_2; i = &i[1])
    {
        int32_t data_val = *i;

        if (data_val)
            data_val();
    }
}
