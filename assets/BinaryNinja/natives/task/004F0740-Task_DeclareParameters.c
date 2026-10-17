// Original IGI.EXE function: Task_DeclareParameters (VA 0x004F0740; static CFG gate FAIL, CFG score 0.667).
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
