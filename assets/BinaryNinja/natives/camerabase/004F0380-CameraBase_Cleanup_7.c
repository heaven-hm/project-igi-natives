// IGI native provenance: CameraBase_Cleanup_7 - 0x004F0380 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0380-CameraBase_Cleanup_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Cleanup_7.h"
int32_t* CameraBase_Cleanup_7(int32_t context, int32_t* param_2)

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

    *param_2 = ~i;
    return param_2;
}
