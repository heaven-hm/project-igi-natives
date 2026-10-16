#include "DynObj_RemoveSymbol_2.h"
void* DynObj_RemoveSymbol_2(void* a1)

{
    void* result = a1;
    int32_t* i_1 = *(result + 8);

    for (int32_t* i = *i_1; i; i = *i)
    {
        Camera_ApplyHandiCam_33(i_1);
        result = Sys_ExecuteBytecode_2(i_1);
        i_1 = i;
    }

    return result;
}
