// IGI native provenance: FX_FireBallUpdate_2 - 0x00481360 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00481360-FX_FireBallUpdate_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FireBallUpdate_2.h"
int32_t FX_FireBallUpdate_2(void* context, float param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9)

{
    *(context + 0x1f8) = param_3;
    *(context + 0x1f0) = param_2;
    *(context + 0x1fc) = param_4;
    *(context + 0x204) = param_5;
    *(context + 0x200) = param_5;
    *(context + 0x208) = param_6;
    *(context + 0x20c) = param_7;
    int32_t dest_val = param_9;
    *(context + 0x210) = param_8;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t result = ~i;
    int32_t source_1;
    int32_t dest_3;
    dest_3 = memcpy(context + 0x214, dest_val - result, result & 0xfffffffc);
    memcpy(dest_3, source_1, result & 3);
    return result;
}
