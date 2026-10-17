// IGI native provenance: PhysicsTerrain_ProcessLOCALgrab_4EE5E0 - 0x004EE5E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE5E0-PhysicsTerrain_ProcessLOCALgrab_4EE5E0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_ProcessLOCALgrab_4EE5E0.h"

int32_t PhysicsTerrain_ProcessLOCALgrab_4EE5E0(void* arg1)

{
    char result = SoundSys_SetFrequency_19();

    if (result)
        result = SoundSys_LocalGrab(*(arg1 + 0x20));

    return result;
}
