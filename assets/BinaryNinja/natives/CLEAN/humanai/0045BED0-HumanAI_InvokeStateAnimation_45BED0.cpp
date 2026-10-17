// IGI native provenance: HumanAI_InvokeStateAnimation_45BED0 - 0x0045BED0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045BED0-HumanAI_InvokeStateAnimation_45BED0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_InvokeStateAnimation_45BED0.h"

void* HumanAI_InvokeStateAnimation_45BED0(void* arg1, int32_t arg2)

{
    int32_t context_val = *(arg1 + 8);

    if (!(context_val & 4))
    {
        void* edx_1 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1d;
        int32_t ecx_2 = *(edx_1 + 0x74);
        *(arg1 + 0x14) = ecx_2;
        return ecx_2(arg1, arg2);
    }

    if (context_val & 0x20000)
    {
        void* edx_3 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x21;
        int32_t ecx_4 = *(edx_3 + 0x84);
        *(arg1 + 0x14) = ecx_4;
        return ecx_4(arg1, arg2);
    }

    if (!(context_val & 1))
        return arg1;

    void* edx_5 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0x1a;
    int32_t ecx_6 = *(edx_5 + 0x68);
    *(arg1 + 0x14) = ecx_6;
    return ecx_6(arg1, arg2);
}
