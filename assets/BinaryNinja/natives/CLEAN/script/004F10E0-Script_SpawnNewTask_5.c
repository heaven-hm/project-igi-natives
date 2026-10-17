// IGI native provenance: Script_SpawnNewTask_5 - 0x004F10E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F10E0-Script_SpawnNewTask_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_5.h"
int32_t Script_SpawnNewTask_5(int32_t context)

{
    int32_t result = Qtask_UpdateList(*((context << 2) + &g_a71890));
    *((context << 2) + &g_a71890) = 0;
    return result;
}
