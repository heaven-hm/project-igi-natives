// Original IGI.EXE function: Sys_PushStack (VA 0x004B08A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack.h"
int32_t Sys_PushStack(int32_t* context, int32_t* param_2, char* param_3, int32_t param_4, int32_t param_5)

{
    if (!Camera_UpdateViewCone_33(0x93aae0, 0x936280, param_3))
        return 0;

    return Sys_AllocateMemory(context, param_2, param_4, 0x93aae0, 0x936280, param_5);
}
