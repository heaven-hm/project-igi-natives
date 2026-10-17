// IGI native provenance: Script_SpawnNewTask_27 - 0x004FA890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA890-Script_SpawnNewTask_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_27.h"
float* Script_SpawnNewTask_27(void* context, float* param_2)

{
    Sys_ResolveSymbol_4(*(context + 4));
    void item_8;
    Resource_Unpack(*(context + 4), &item_8, 5);
    float* result = param_2;
    float item_7;
    *result = item_7;
    result = 1;
    return result;
}
