// IGI native provenance: RenderLight_Invoke7 - 0x00529A70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00529A70-RenderLight_Invoke7.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke7.h"

void* RenderLight_Invoke7(int32_t* arg1)

{
    int32_t result = *arg1;

    if (result >= 0 && result < 0x16)
    {
        arg1[1] = &(&data_54f1a0)[result * 4];
        return &(&data_54f1a0)[result * 4];
    }

    arg1[1] = 0;
    return result;
}
