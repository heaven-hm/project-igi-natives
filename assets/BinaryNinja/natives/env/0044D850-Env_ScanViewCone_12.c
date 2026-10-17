// IGI native provenance: Env_ScanViewCone_12 - 0x0044D850 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044D850-Env_ScanViewCone_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_ScanViewCone_12.h"
int32_t* Env_ScanViewCone_12(int32_t context)

{
    int32_t* result = **&g_5bda60;

    if (*result)
        memcpy(context, &result[4], 0x18);

    return result;
}
