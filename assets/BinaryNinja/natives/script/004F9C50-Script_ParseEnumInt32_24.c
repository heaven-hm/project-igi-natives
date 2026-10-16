#include "Script_ParseEnumInt32_24.h"
int32_t Script_ParseEnumInt32_24(int32_t* a1)

{
    Script_ParseEnumReal32_24(Script_ExecuteLevelScript_23(a1[5], a1[2]), a1);
    Script_ParseEnumReal32_24(Script_ExecuteLevelScript_23(a1[5], a1[3]), a1);
    void* valA4 = a1[5];
    *(valA4 + 0x60) -= 1;
    Camera_ApplyHandiCam_33(a1);
    return Sys_ExecuteBytecode_2(a1);
}
