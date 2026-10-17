// IGI native provenance: Camera_UpdateViewCone_11 - 0x004A7E96 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7E96-Camera_UpdateViewCone_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_11.h"
int32_t* Camera_UpdateViewCone_11(int32_t context, int32_t* param_2, int32_t* param_3, int32_t* param_4)

{
    int32_t* i = param_2;
    int32_t* i_1 = param_2 - 1;

    while (i > 0)
    {
        i = Camera_ApplyPostProcess_11(context, param_3, param_4);

        if (*param_4 == 0xffffffff)
            break;

        i = i_1;
        i_1 -= 1;
    }

    return i;
}
