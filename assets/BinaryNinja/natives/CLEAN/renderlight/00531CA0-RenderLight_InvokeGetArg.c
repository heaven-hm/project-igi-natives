// IGI native provenance: RenderLight_InvokeGetArg - 0x00531CA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531CA0-RenderLight_InvokeGetArg.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_InvokeGetArg.h"

int32_t RenderLight_InvokeGetArg(void* arg1, char* arg2)

{
    int32_t result_val = *(arg2 + 4);

    if (arg1 != result_val && *(arg1 + 0x118) != result_val)
    {
        *arg2 = 1;
        return 1;
    }

    *arg2 = 0;
    return 0;
}
