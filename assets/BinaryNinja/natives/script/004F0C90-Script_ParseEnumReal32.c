// Original IGI.EXE function: Script_ParseEnumReal32 (VA 0x004F0C90; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32.h"
int32_t Script_ParseEnumReal32(int32_t* context)

{
    Qtask_UpdateList(context[2]);
    Camera_ApplyHandiCam_33(context);
    return Sys_ExecuteBytecode_2(context);
}
