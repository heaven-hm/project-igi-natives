// IGI native provenance: AnimSpline_Invoke4_50A4D0 - 0x0050A4D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A4D0-AnimSpline_Invoke4_50A4D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_Invoke4_50A4D0.h"

int32_t AnimSpline_Invoke4_50A4D0(void* arg1, void* arg2, int32_t arg3)

{
    enum SET_FILE_POINTER_MOVE_METHOD var_4_1;

    if (!arg3)
        var_4_1 = FILE_BEGIN;
    else if (arg3 == 1)
        var_4_1 = FILE_CURRENT;
    else
    {
        if (arg3 != 2)
            return arg3 - 2;

        var_4_1 = FILE_END;
    }

    return Camera_ApplyLineFilter_4(*(arg1 + 0x98), arg2, var_4_1);
}
