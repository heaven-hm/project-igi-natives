// IGI native provenance: Task_DeclareParameters - 0x004F0740 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F0740-Task_DeclareParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Task_DeclareParameters.h"
int32_t Task_DeclareParameters(int32_t context)

// Sig: void Task_DeclareParameters(...)
// Note: Declares the parameter list of the task currently being defined inside
// a .qsc task block (OpenIGI TaskScriptCommands implements it reading a type
// name + parameter names). Call as FIRST statement of a task definition; argc
// unknown (parser context).
{
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
