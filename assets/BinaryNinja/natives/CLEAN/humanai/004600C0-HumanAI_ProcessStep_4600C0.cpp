// IGI native provenance: HumanAI_ProcessStep_4600C0 - 0x004600C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004600C0-HumanAI_ProcessStep_4600C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_ProcessStep_4600C0.h"

int32_t* HumanAI_ProcessStep_4600C0(void* arg1, int32_t* arg2)

{
    void* data_val = *(arg1 + 0x4ec);

    if (*arg2 && *(data_val + 0xd9))
    {
        int32_t* ecx_2 = *(data_val + 0x70) + 0x1a4;
        float esi_2 = ecx_2[1];
        float ecx_3 = ecx_2[2];
        *(arg2 + 8) = *ecx_2 + *(data_val + 0x20);
        *(arg2 + 0x10) = esi_2 + *(data_val + 0x28);
        *(arg2 + 0x18) = ecx_3 + *(data_val + 0x30);
        __builtin_memcpy(&arg2[8], *(data_val + 0x70) + 0x1b0, 0x28);
        return arg2;
    }

    int32_t* edx_2 = *(arg1 + 0x70) + 0xb70;
    float esi_6 = edx_2[1];
    float edx_3 = edx_2[2];
    *(arg2 + 8) = *edx_2 + *(arg1 + 0x20);
    *(arg2 + 0x10) = esi_6 + *(arg1 + 0x28);
    *(arg2 + 0x18) = edx_3 + *(arg1 + 0x30);
    __builtin_memcpy(&arg2[8], *(arg1 + 0x70) + 0xb7c, 0x28);
    *arg2 = 0;
    return arg2;
}
