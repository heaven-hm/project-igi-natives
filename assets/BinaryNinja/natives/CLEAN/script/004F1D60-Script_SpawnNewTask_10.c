// IGI native provenance: Script_SpawnNewTask_10 - 0x004F1D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1D60-Script_SpawnNewTask_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_10.h"
int32_t** Script_SpawnNewTask_10(int32_t** context, int32_t param_2)

{
    context[3] = param_2;
    *context = &context[1];
    context[2] = context;
    context[1] = 0;
    return context;
}
