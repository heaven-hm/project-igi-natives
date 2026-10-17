// IGI native provenance: HumanAI_ProcessStep_4601A0 - 0x004601A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004601A0-HumanAI_ProcessStep_4601A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_ProcessStep_4601A0.h"

void* HumanAI_ProcessStep_4601A0(void* arg1, double* arg2)

{
    void* result = *(arg1 + 0x4ec);

    if (*(result + 0xd9))
    {
        int32_t* ecx_2 = *(result + 0x70) + 0x1ae8;
        float edx_2 = ecx_2[1];
        float ecx_3 = ecx_2[2];
        *arg2 = *ecx_2 + *(result + 0x20);
        arg2[1] = edx_2 + *(result + 0x28);
        arg2[2] = ecx_3 + *(result + 0x30);
        __builtin_memcpy(&arg2[3], *(result + 0x70) + 0x1af4, 0x28);
    }

    return result;
}
