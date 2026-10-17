// IGI native provenance: MenuUI_UpdateState_424420 - 0x00424420 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424420-MenuUI_UpdateState_424420.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_UpdateState_424420.h"

char* MenuUI_UpdateState_424420(void* arg1, char* arg2)

{
    void* data_val = *(arg2 + 0x14);
    void* ecx_1;

    if (!*arg2)
    {
        ecx_1 = arg1;

        if (*(ecx_1 + 0x3c) == 1)
            *(ecx_1 + 0x20) = ((*(data_val + 0x28) - *(ecx_1 + 0x28)) >> 1) + *(data_val + 0x20);
    }
    else
    {
        ecx_1 = arg1;
        *(ecx_1 + 0x20) = *(arg2 + 4);
        *(arg2 + 4) += *(ecx_1 + 0x28) + *(arg2 + 0xc);
    }

    if (!arg2[1])
    {
        if (*(ecx_1 + 0x40) == 1)
            *(ecx_1 + 0x24) = ((*(data_val + 0x2c) - *(ecx_1 + 0x2c)) >> 1) + *(data_val + 0x24);

        arg2[2] = 1;
        return arg2;
    }

    *(ecx_1 + 0x24) = *(arg2 + 8);
    int32_t edx_2 = *(arg2 + 8);
    int32_t ecx_3 = *(ecx_1 + 0x2c) + *(arg2 + 0x10);
    arg2[2] = 1;
    *(arg2 + 8) = edx_2 + ecx_3;
    return arg2;
}
