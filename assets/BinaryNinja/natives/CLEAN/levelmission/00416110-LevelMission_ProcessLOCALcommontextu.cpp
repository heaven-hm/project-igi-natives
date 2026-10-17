// IGI native provenance: LevelMission_ProcessLOCALcommontextu - 0x00416110 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416110-LevelMission_ProcessLOCALcommontextu.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelMission_ProcessLOCALcommontextu.h"

void* LevelMission_ProcessLOCALcommontextu(void* arg1)

{
    void* result = arg1;
    result = *(result + 1);
    g_57b1a0 = result;

    if (result)
        result = SoundSys_Update3DPosition_11("Raining:\n");

    return result;
}
