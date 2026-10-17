// IGI native provenance: Binocular_Cleanup - 0x00470840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470840-Binocular_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Binocular_Cleanup.h"
int32_t Binocular_Cleanup(void* context)

{
    Binocular_Process(context);
    *(context + 0x1b0) = 0;
    *(context + 0x1b8) = 1;
    return (*(((Weapon_ComputeAccuracy_5() + Script_SpawnNewTask_12() * 0x180) << 2) + &g_a96ae0))(context);
}
