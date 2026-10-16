#include "gi_platform.h"
#include "004E3F80-SplineObjSegment_LoadParameters.h"
void* SplineObjSegment_LoadParameters(void* a1)

{
    DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0xf0)), a1);
    int32_t* srcS1 = a1 + 0x5a0;
    int32_t i_1 = 2;
    void* result;
    int32_t i;

    do
    {
        result = *srcS1;

        if (result)
        {
            result = Sys_ExecuteBytecode_2(result);
            *srcS1 = 0;
        }

        srcS1 = &srcS1[2];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
