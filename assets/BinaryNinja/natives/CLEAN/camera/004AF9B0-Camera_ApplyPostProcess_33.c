// IGI native provenance: Camera_ApplyPostProcess_33 - 0x004AF9B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AF9B0-Camera_ApplyPostProcess_33.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_33.h"
int32_t Camera_ApplyPostProcess_33(int32_t* context)

{
    int32_t result = 0;
    int32_t* i = **context;

    while (i)
    {
        i = *i;
        result += 1;
    }

    return result;
}
