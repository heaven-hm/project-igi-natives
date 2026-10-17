// Original IGI.EXE function: Script_ParseEnumInt32_10 (VA 0x004F1D80; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_10.h"
int32_t* Script_ParseEnumInt32_10(int32_t* context)

{
    int32_t* result = context;
    int32_t* i_1 = *result;

    for (int32_t* i = *i_1; i; i = *i)
    {
        Camera_ApplyHandiCam_33(i_1);
        result = Sys_ExecuteBytecode_2(i_1);
        i_1 = i;
    }

    return result;
}
