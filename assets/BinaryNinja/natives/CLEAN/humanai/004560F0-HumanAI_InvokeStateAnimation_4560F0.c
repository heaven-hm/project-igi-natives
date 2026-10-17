// IGI native provenance: HumanAI_InvokeStateAnimation_4560F0 - 0x004560F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004560F0-HumanAI_InvokeStateAnimation_4560F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_InvokeStateAnimation_4560F0.h"

void* HumanAI_InvokeStateAnimation_4560F0(void* arg1, int32_t arg2)

{
    int32_t context_val = *(arg1 + 8);

    if (!(context_val & 4))
    {
        void* edx_1 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0xb;
        int32_t ecx_2 = *(edx_1 + 0x2c);
        *(arg1 + 0x14) = ecx_2;
        return ecx_2(arg1, arg2);
    }

    if (context_val & 0x20000)
    {
        void* edx_3 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0xd;
        int32_t ecx_4 = *(edx_3 + 0x34);
        *(arg1 + 0x14) = ecx_4;
        return ecx_4(arg1, arg2);
    }

    if (!(context_val & 1))
        return arg1;

    void* edx_5 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 7;
    int32_t ecx_6 = *(edx_5 + 0x1c);
    *(arg1 + 0x14) = ecx_6;
    return ecx_6(arg1, arg2);
}
