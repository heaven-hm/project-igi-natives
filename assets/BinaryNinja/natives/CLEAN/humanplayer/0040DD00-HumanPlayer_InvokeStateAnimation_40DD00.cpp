// IGI native provenance: HumanPlayer_InvokeStateAnimation_40DD00 - 0x0040DD00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040DD00-HumanPlayer_InvokeStateAnimation_40DD00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_InvokeStateAnimation_40DD00.h"

void* HumanPlayer_InvokeStateAnimation_40DD00(void* arg1, void* arg2)

{
    int32_t result_val = *(arg2 + 0xd64);

    if (result_val < *(arg2 + 0xd60))
        *(arg2 + 0xd64) = result_val + 1;

    int32_t edx_1 = *(arg1 + 8);

    if (!(edx_1 & 1))
    {
        if (edx_1 & 0x20000)
            *(arg2 + 0xd92) = 1;

        return arg1;
    }

    *(arg2 + 0xd92) = 1;
    *(arg1 + 0xc) = *(arg1 + 0x10);
    void* edx_3 = *(arg1 + 4);
    *(arg1 + 0x10) = 0x1d;
    int32_t edx_4 = *(edx_3 + 0x74);
    *(arg1 + 0x14) = edx_4;
    return edx_4(arg1, arg2);
}
