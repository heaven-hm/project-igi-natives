#include "gi_platform.h"
#include "004F0CF0-Config_Compile.h"
int32_t Config_Compile(int32_t a1, void* a2, char a3)

// Sig: int Config_Compile(int context, char* cfgName, int flags)
// Note: Compiles a CONFIG script: validates context, then loads its compiled
// QVM via QvmLoad (0x4B80B0); references the Task_New name during task-table
// wiring. Params: context = config context id, cfgName = config path/name,
// flags = compile flags. Use when (re)loading game configuration
// programmatically.
{
    Script_SetSymbolContext("Task_New", a1);
    int32_t* valA = Qvm_Load(a2);

    if (!valA)
        return 0;

    Script_Init(a2, 1, 0, a3);
    Qvm_Execute(valA);
    Qvm_Cleanup(valA);
    return g_a758a8;
}
