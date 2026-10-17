// IGI native provenance: Camera_ApplyPostProcess_26 - 0x004AD0AE - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD0AE-Camera_ApplyPostProcess_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_26.h"
int32_t Camera_ApplyPostProcess_26(int32_t context)

{
    if (context >= g_c32540)
        return 0;

    int32_t data_1 = context & 0x1f;
    data_1 = *((&g_c32440)[context >> 5] + (data_1 << 3) + 4);
    return data_1 & 0x40;
}
