// IGI native provenance: Camera_ResetMatrix_11 - 0x004A7EC7 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7EC7-Camera_ResetMatrix_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_11.h"
int32_t* Camera_ResetMatrix_11(char* context, int32_t* param_2, int32_t* param_3, int32_t* param_4)

{
    int32_t* i = param_2;
    int32_t* i_1 = param_2 - 1;

    if (i > 0)
    {
        char* source_1 = context;

        do
        {
            int32_t data_val = *source_1;
            source_1 = &source_1[1];
            i = Camera_ApplyPostProcess_11(data_val, param_3, param_4);

            if (*param_4 == 0xffffffff)
                break;

            i = i_1;
            i_1 -= 1;
        } while (i > 0);
    }

    return i;
}
