// Original IGI.EXE function: Particle2DDynCubeObjTask_Setup (VA 0x004FDD70; static CFG gate PASS, CFG score 1.000).
#include "Particle2DDynCubeObjTask_Setup.h"
int32_t Particle2DDynCubeObjTask_Setup(void* a1)

{
    Sys_ExecuteBytecode_2(*(a1 + 0x68));
    void* objC = *(a1 + 0x6c);
    *(a1 + 0x68) = 0;
    Sys_ExecuteBytecode_2(objC);
    void* tmpD = *(a1 + 0x70);
    *(a1 + 0x6c) = 0;
    Sys_ExecuteBytecode_2(tmpD);
    void* valA1 = *(a1 + 0x7c);
    *(a1 + 0x70) = 0;
    Sys_ExecuteBytecode_2(valA1);
    void* objC1 = *(a1 + 0x74);
    *(a1 + 0x7c) = 0;
    Sys_ExecuteBytecode_2(objC1);
    void* tmpD1 = *(a1 + 0x78);
    *(a1 + 0x74) = 0;
    Sys_ExecuteBytecode_2(tmpD1);
    int32_t valA2 = *(a1 + 0xb8);
    *(a1 + 0x78) = 0;
    DynObj_RegisterSymbol_9(valA2, a1);
    int32_t srcS1 = *(a1 + 0xf8);
    g_a7a4d0 += 0xffffff00 - srcS1 * 0x58;
    return 0xffffff00 - srcS1 * 0x58;
}
