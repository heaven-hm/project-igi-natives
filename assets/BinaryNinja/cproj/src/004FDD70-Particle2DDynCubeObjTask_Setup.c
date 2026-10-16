#include "gi_platform.h"
#include "004FDD70-Particle2DDynCubeObjTask_Setup.h"
int32_t Particle2DDynCubeObjTask_Setup(void* a1)

{
    Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 0x68)));
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 0;
    Sys_ExecuteBytecode_2(objC);
    void* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x70));
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0;
    Sys_ExecuteBytecode_2(tmpD);
    void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x7c));
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0;
    Sys_ExecuteBytecode_2(valA1);
    void* objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x74));
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = 0;
    Sys_ExecuteBytecode_2(objC1);
    void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x78));
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
    Sys_ExecuteBytecode_2(tmpD1);
    int32_t valA2 = (*(int32_t*)(uintptr_t)(a1 + 0xb8));
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
    DynObj_RegisterSymbol_9(valA2, a1);
    int32_t srcS1 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
    g_a7a4d0 += 0xffffff00 - srcS1 * 0x58;
    return 0xffffff00 - srcS1 * 0x58;
}
