// IGI native provenance: Script_SpawnNewTask_32 - 0x004FEAC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FEAC0-Script_SpawnNewTask_32.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_32.h"
void* Script_SpawnNewTask_32(void* context, int32_t param_2)

{
    *(context + 0x120) = param_2;
    *(context + 0x20) = 0;
    return context;
}
