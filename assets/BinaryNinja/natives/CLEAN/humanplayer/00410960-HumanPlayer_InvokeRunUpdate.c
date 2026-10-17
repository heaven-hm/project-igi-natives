// IGI native provenance: HumanPlayer_InvokeRunUpdate - 0x00410960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00410960-HumanPlayer_InvokeRunUpdate.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_InvokeRunUpdate.h"

void* HumanPlayer_InvokeRunUpdate(int32_t arg1, void* arg2)

{
    if (!*(arg1 + 0x250))
    {
        __builtin_memcpy(arg1 + 0x110, arg1 + 0x1b0, 0xa0);
        __builtin_memcpy(arg1 + 0x1b0, *(arg2 + 4), 0xa0);
    }

    return HumanPlayer_RunUpdate(arg1);
}
