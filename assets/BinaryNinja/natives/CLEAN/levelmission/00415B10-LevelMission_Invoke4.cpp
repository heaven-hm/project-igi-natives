// IGI native provenance: LevelMission_Invoke4 - 0x00415B10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00415B10-LevelMission_Invoke4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelMission_Invoke4.h"

int32_t LevelMission_Invoke4(char* arg1)

{
    g_539560 = Camera_ResetMatrix_4(arg1);
    return FX_TrailUpdate_24(0);
}
