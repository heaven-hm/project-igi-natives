// Original IGI.EXE function: Config_Compile (VA 0x004F0CF0; static CFG gate PASS, CFG score 1.000).
#include "Config_Compile.h"
int32_t Config_Compile(int32_t context, void* param_2, char param_3)

// Sig: int Config_Compile(int context, char* cfgName, int flags)
// Note: Compiles a CONFIG script: validates context, then loads its compiled
// QVM via QvmLoad (0x4B80B0); references the Task_New name during task-table
// wiring. Params: context = config context id, cfgName = config path/name,
// flags = compile flags. Use when (re)loading game configuration
// programmatically.
{
    Script_SetSymbolContext("Task_New", context);
    int32_t* data_val = Qvm_Load(param_2);

    if (!data_val)
        return 0;

    Script_Init(param_2, 1, 0, param_3);
    Qvm_Execute(data_val);
    Qvm_Cleanup(data_val);
    return g_a758a8;
}
