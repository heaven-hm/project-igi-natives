// Original IGI.EXE function: Script_ParseEnumReal32 (VA 0x004F0C90; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32.h"
int32_t Script_ParseEnumReal32(int32_t* a1)

{
    Qtask_UpdateList(a1[2]);
    Camera_ApplyHandiCam_33(a1);
    return Sys_ExecuteBytecode_2(a1);
}
