// IGI native provenance: HumanPlayer_ProcessNoactiveplayerpr - 0x004123F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004123F0-HumanPlayer_ProcessNoactiveplayerpr.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ProcessNoactiveplayerpr.h"

void* HumanPlayer_ProcessNoactiveplayerpr(int32_t* arg1)

{
    int32_t result = *arg1;

    if (result >= 0 && result < 0x28)
    {
        arg1[1] = &(&data_538720)[result * 4];
        return &(&data_538720)[result * 4];
    }

    arg1[1] = 0;
    return result;
}
