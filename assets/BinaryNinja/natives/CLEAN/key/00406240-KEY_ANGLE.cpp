// IGI native provenance: KEY_ANGLE - 0x00406240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406240-KEY_ANGLE.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "KEY_ANGLE.h"
int32_t KEY_ANGLE(int32_t context, int32_t* param_2, void** param_3)

{
    int32_t result = context;

    if (param_3)
        *param_3 = &g_536998[result * 0x24];

    if (param_2)
    {
        result *= 9;
        *param_2 = *((result << 2) + &g_5369b8);
    }

    return result;
}
