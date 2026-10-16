#include "gi_platform.h"
#include "004F1D80-Script_ParseEnumInt32_10.h"
int32_t* Script_ParseEnumInt32_10(int32_t* a1)

{
    int32_t* result = a1;
    int32_t* i_1 = *result;

    for (int32_t* i = *i_1; i; i = *i)
    {
        Camera_ApplyHandiCam_33(i_1);
        result = Sys_ExecuteBytecode_2(i_1);
        i_1 = i;
    }

    return result;
}
