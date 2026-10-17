// IGI native provenance: Script_SpawnNewTask_8 - 0x004F1A40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1A40-Script_SpawnNewTask_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_8.h"
int32_t Script_SpawnNewTask_8(int32_t context)

{
    *(context * 0x4c + &g_a75928) = 0;
    return context;
}
