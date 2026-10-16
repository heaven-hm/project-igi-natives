#include "gi_platform.h"
#include "005233A0-Light_UpdateGlobalLight_2.h"
int32_t Light_UpdateGlobalLight_2(void* a1)

{
    Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 0x34)));
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x30));
    (*(int32_t*)(uintptr_t)(a1 + 0x34)) = 0;
    Sys_ExecuteBytecode_2(objC);
    void* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    (*(int32_t*)(uintptr_t)(a1 + 0x30)) = 0;
    Sys_ExecuteBytecode_2(tmpD);
    void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 8));
    (*(int32_t*)(uintptr_t)(a1 + 0x1c)) = 0;
    Sys_ExecuteBytecode_2(valA1);
    (*(int32_t*)(uintptr_t)(a1 + 8)) = 0;
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
