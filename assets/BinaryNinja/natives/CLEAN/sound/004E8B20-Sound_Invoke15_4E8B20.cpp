// IGI native provenance: Sound_Invoke15_4E8B20 - 0x004E8B20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8B20-Sound_Invoke15_4E8B20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke15_4E8B20.h"

float Sound_Invoke15_4E8B20(void* arg1, float* arg2) __location("result_val")

{
    long double x87_r7 = *arg2;
    long double temp0 = 0f;
    x87_r7 - temp0;
    float result;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        result = *arg2;
        *(arg1 + 0xc4) = result;
    }

    long double x87_r7_1 = arg2[1];
    long double temp1 = 0f;
    x87_r7_1 - temp1;
    result = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
        *(arg1 + 0xc8) = arg2[1];

    return result;
}
