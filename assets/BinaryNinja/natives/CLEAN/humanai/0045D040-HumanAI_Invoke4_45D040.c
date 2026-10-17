// IGI native provenance: HumanAI_Invoke4_45D040 - 0x0045D040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045D040-HumanAI_Invoke4_45D040.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke4_45D040.h"

int32_t HumanAI_Invoke4_45D040(int32_t arg1, void* arg2)

{
    if (!*(arg1 + 0x250))
    {
        __builtin_memcpy(arg1 + 0x110, arg1 + 0x1b0, 0xa0);
        __builtin_memcpy(arg1 + 0x1b0, *(arg2 + 4), 0xa0);
    }

    return AI_SpeedZMS2F_4(arg1);
}
