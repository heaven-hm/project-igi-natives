// IGI native provenance: Script_SpawnNewTask_23 - 0x004F92E0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F92E0-Script_SpawnNewTask_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_23.h"
double* Script_SpawnNewTask_23(double* context, void* param_2)

{
    if (!*(param_2 + 0x64))
    {
        memcpy(context, param_2 + 0x20, 0x18);
        return param_2;
    }

    void* temp_val = *(param_2 + 0x14);
    memcpy(context, param_2 + 0x20, 0x18);
    double item_20 = *(temp_val + 0x78) * context[2] + *(temp_val + 0x74) * context[1] + *(temp_val + 0x70) * *context;
    double item_18 = *(temp_val + 0x84) * context[2] + *(temp_val + 0x80) * context[1] + *(temp_val + 0x7c) * *context;
    double item_10 = *(temp_val + 0x90) * context[2] + *(temp_val + 0x8c) * context[1] + *(temp_val + 0x88) * *context;
    memcpy(context, &item_20, 0x18);
    *context = *(temp_val + 0x20) + *context;
    context[1] = *(temp_val + 0x28) + context[1];
    context[2] = *(temp_val + 0x30) + context[2];
    return context;
}
