// IGI native provenance: RenderLight_Invoke14 - 0x005320D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005320D0-RenderLight_Invoke14.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke14.h"

int32_t RenderLight_Invoke14(float* arg1, float* arg2)

{
    long double x87_r7 = *arg1;
    long double temp0 = *arg2;
    x87_r7 - temp0;
    int32_t result_val;
    result_val = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result_val + 1) & 0x41))
        return result_val | 0xffffffff;

    long double x87_r7_1 = *arg1;
    long double temp1 = *arg2;
    x87_r7_1 - temp1;

    if (!(*(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1 ? 1 : 0) << 0xe) + 1) & 1))
        return 0;

    return 1;
}
