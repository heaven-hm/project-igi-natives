// IGI native provenance: LevelMission_GetParam_416AB0 - 0x00416AB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416AB0-LevelMission_GetParam_416AB0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelMission_GetParam_416AB0.h"

bool* LevelMission_GetParam_416AB0(int32_t arg1, bool* arg2)

{
    *arg2 = arg1 != *(arg2 + 4);
    return arg2;
}
