// IGI native provenance: HumanAI_InvokeSpeedZMS2F - 0x00455070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00455070-HumanAI_InvokeSpeedZMS2F.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_InvokeSpeedZMS2F.h"

int32_t HumanAI_InvokeSpeedZMS2F(int32_t arg1, void* arg2)

{
    if (!*(arg1 + 0x250))
    {
        __builtin_memcpy(arg1 + 0x110, arg1 + 0x1b0, 0xa0);
        __builtin_memcpy(arg1 + 0x1b0, *(arg2 + 4), 0xa0);
    }

    return AI_SpeedZMS2F(arg1);
}
