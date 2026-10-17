// IGI native provenance: LevelMission_Invoke11 - 0x00416A90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416A90-LevelMission_Invoke11.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelMission_Invoke11.h"

char* LevelMission_Invoke11(int32_t arg1, char* arg2)

{
    if (arg1 != *(arg2 + 4) && arg1 != *(arg2 + 8) && arg1 != *(arg2 + 0xc))
    {
        *arg2 = 1;
        return arg2;
    }

    *arg2 = 0;
    return arg2;
}
