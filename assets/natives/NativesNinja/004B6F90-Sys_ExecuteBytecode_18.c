#include "004B6F90-Sys_ExecuteBytecode_18.h"
/* 0x004b6f90 Sys_ExecuteBytecode_18 full linked: callers=1 callees=2 */
int32_t sub_4b6f90(int32_t a1, float* a2)

{
    int32_t* esi = a1;
    *a2 = esi[1];
    a2[1] = esi[2];
    a2[2] = sub_4b7df0(esi);
    int32_t result = sub_4b7e00(esi);
    a2[3] = result;
    return result;
}
