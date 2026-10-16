#include "gi_platform.h"
#include "004CFB30-DynObj_FindSymbol_15.h"
int32_t DynObj_FindSymbol_15(int32_t* a1)

{
    if (a1[4])
    {
        Sys_ExecuteBytecode_2(a1[5]);
        a1[5] = 0;
    }

    int32_t tmpD = a1[2];
    int32_t v_8 = a1[3];
    int32_t v_4 = tmpD;

    if (*((DynObj_LookupHashItem_13() << 2) + &g_a94e84))
        ((int(*)())(uintptr_t)(*((DynObj_LookupHashItem_13() << 2) + &g_a94e84)))(&v_8);

    Resource_Flush(a1[2]);
    Camera_ApplyHandiCam_33(a1);
    return Sys_ExecuteBytecode_2(a1);
}
