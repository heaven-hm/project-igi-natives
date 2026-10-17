// IGI native provenance: Sound_Invoke15_4EAC20 - 0x004EAC20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EAC20-Sound_Invoke15_4EAC20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke15_4EAC20.h"

void* Sound_Invoke15_4EAC20(void* arg1, char* arg2)

{
    int32_t ecx_1 = *(arg1 + 0x2c);

    if (!*arg2)
    {
        *(arg1 + 0x2c) = ecx_1 | 2;
        return arg1;
    }

    *(arg1 + 0x2c) = ecx_1 & 0xfffffffd;
    return arg1;
}
