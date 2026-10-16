#include "004F0740-Task_DeclareParameters.h"
/* 0x004f0740 Task_DeclareParameters full linked: callers=0 callees=1 */
int32_t Task_DeclareParameters(int32_t a1)

// Sig: void Task_DeclareParameters(...)
// Note: Declares the parameter list of the task currently being defined inside
// a .qsc task block (OpenIGI TaskScriptCommands implements it reading a type
// name + parameter names). Call as FIRST statement of a task definition; argc
// unknown (parser context).
{
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
