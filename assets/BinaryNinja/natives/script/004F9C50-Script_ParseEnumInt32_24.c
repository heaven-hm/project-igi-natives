// Original IGI.EXE function: Script_ParseEnumInt32_24 (VA 0x004F9C50; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_24.h"
int32_t Script_ParseEnumInt32_24(int32_t* context)

{
    Script_ParseEnumReal32_24(Script_ExecuteLevelScript_23(context[5], context[2]), context);
    Script_ParseEnumReal32_24(Script_ExecuteLevelScript_23(context[5], context[3]), context);
    void* data_4 = context[5];
    *(data_4 + 0x60) -= 1;
    Camera_ApplyHandiCam_33(context);
    return Sys_ExecuteBytecode_2(context);
}
