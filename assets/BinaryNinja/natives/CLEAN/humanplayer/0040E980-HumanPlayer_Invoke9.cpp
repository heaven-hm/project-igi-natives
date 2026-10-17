// IGI native provenance: HumanPlayer_Invoke9 - 0x0040E980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040E980-HumanPlayer_Invoke9.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke9.h"

int32_t HumanPlayer_Invoke9(void* arg1, void* arg2)

{
    char result = *(arg2 + 0xd44);

    if (result)
        return result;

    int32_t ecx_1 = *(arg1 + 0x10);
    *(arg1 + 0x10) = 1;
    *(arg1 + 0xc) = ecx_1;
    int32_t ecx_3 = *(*(arg1 + 4) + 4);
    *(arg1 + 0x14) = ecx_3;
    return ecx_3(arg1, arg2);
}
