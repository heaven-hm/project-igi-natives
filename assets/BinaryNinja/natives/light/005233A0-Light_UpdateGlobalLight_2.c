#include "Light_UpdateGlobalLight_2.h"
int32_t Light_UpdateGlobalLight_2(void* a1)

{
    Sys_ExecuteBytecode_2(*(a1 + 0x34));
    void* objC = *(a1 + 0x30);
    *(a1 + 0x34) = 0;
    Sys_ExecuteBytecode_2(objC);
    void* tmpD = *(a1 + 0x1c);
    *(a1 + 0x30) = 0;
    Sys_ExecuteBytecode_2(tmpD);
    void* valA1 = *(a1 + 8);
    *(a1 + 0x1c) = 0;
    Sys_ExecuteBytecode_2(valA1);
    *(a1 + 8) = 0;
    int32_t* srcS = a1 + 0xc;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        Sys_ExecuteBytecode_2(srcS[5]);
        srcS[5] = 0;
        Sys_ExecuteBytecode_2(*srcS);
        *srcS = 0;
        srcS = &srcS[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return Sys_ExecuteBytecode_2(a1);
}
