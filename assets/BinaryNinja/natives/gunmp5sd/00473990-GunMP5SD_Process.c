// IGI native provenance: GunMP5SD_Process - 0x00473990 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473990-GunMP5SD_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunMP5SD_Process.h"
int32_t GunMP5SD_Process(void* context)

{
    *(context + 0x1b0) = 0;
    return (*(((Weapon_ComputeAccuracy_5() + Script_SpawnNewTask_12() * 0x180) << 2) + &g_a96ae0))(context);
}
