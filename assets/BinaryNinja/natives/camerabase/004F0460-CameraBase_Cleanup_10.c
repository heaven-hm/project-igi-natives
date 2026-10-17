// IGI native provenance: CameraBase_Cleanup_10 - 0x004F0460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0460-CameraBase_Cleanup_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Cleanup_10.h"
int32_t CameraBase_Cleanup_10(int32_t* context, int32_t* param_2)

{
    Script_TooFewParametersInLi(param_2, 1);
    int32_t i = 0xffffffff;
    char* temp_val = *context;
    char* dest_val = temp_val;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val = &dest_val[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    Sys_ResolveSymbol_23(param_2[1], *param_2, temp_val, ~i - 1);
    int32_t result = *param_2 + 1;
    *param_2 = result;
    return result;
}
