// IGI native provenance: HumanPlayer_Invoke12 - 0x0040F100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F100-HumanPlayer_Invoke12.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke12.h"

int32_t HumanPlayer_Invoke12(void* arg1, void* arg2)

{
    int16_t result;
    result = *(arg2 + 0xd44);

    if (result)
    {
        int32_t ecx_1 = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0;
        *(arg1 + 0xc) = ecx_1;
        int32_t ecx_3 = **(arg1 + 4);
        *(arg1 + 0x14) = ecx_3;
        return ecx_3(arg1, arg2);
    }

    long double x87_r7 = *(arg2 + 0x1c8);
    long double temp0 = 0f;
    x87_r7 - temp0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        return result;

    int32_t ecx_4 = *(arg1 + 0x10);
    *(arg1 + 0x10) = 1;
    *(arg1 + 0xc) = ecx_4;
    int32_t ecx_6 = *(*(arg1 + 4) + 4);
    *(arg1 + 0x14) = ecx_6;
    return ecx_6(arg1, arg2);
}
