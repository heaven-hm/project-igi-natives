// IGI native provenance: HumanPlayer_InvokeStateAnimation_40AAC0 - 0x0040AAC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040AAC0-HumanPlayer_InvokeStateAnimation_40AAC0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_InvokeStateAnimation_40AAC0.h"

void* HumanPlayer_InvokeStateAnimation_40AAC0(void* arg1, int32_t arg2)

{
    char context_val = *(arg1 + 8);

    if (!(context_val & 4))
    {
        void* edx_1 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1d;
        int32_t ecx_2 = *(edx_1 + 0x74);
        *(arg1 + 0x14) = ecx_2;
        return ecx_2(arg1, arg2);
    }

    if (!(context_val & 1))
        return arg1;

    int32_t* edx_3 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0;
    int32_t ecx_4 = *edx_3;
    *(arg1 + 0x14) = ecx_4;
    return ecx_4(arg1, arg2);
}
