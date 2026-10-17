// IGI native provenance: Binocular_Setup - 0x004707D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004707D0-Binocular_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Binocular_Setup.h"
int32_t Binocular_Setup(void* context)

{
    Binocular_Process(context);
    Qtask_UpdateList(*(context + 0x1c0));
    return (*((Weapon_ComputeAccuracy_5() << 2) + &g_a976e0))(context);
}
