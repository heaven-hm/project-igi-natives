// IGI native provenance: CameraBase_Cleanup_11 - 0x004F04D0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F04D0-CameraBase_Cleanup_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Cleanup_11.h"
int32_t CameraBase_Cleanup_11(int32_t context, int32_t* param_2)

{
    int32_t dest_val = context;
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
    dest_3 = memcpy(*param_2, dest_val - result, result & 0xfffffffc);
    memcpy(dest_3, source_1, result & 3);
    return result;
}
