// Original IGI.EXE function: Particle2DDynCubeObjTask_Setup (VA 0x004FDD70; static CFG gate PASS, CFG score 1.000).
#include "Particle2DDynCubeObjTask_Setup.h"
int32_t Particle2DDynCubeObjTask_Setup(void* context)

{
    Sys_ExecuteBytecode_2(*(context + 0x68));
    void* entity_val = *(context + 0x6c);
    *(context + 0x68) = 0;
    Sys_ExecuteBytecode_2(entity_val);
    void* temp_val = *(context + 0x70);
    *(context + 0x6c) = 0;
    Sys_ExecuteBytecode_2(temp_val);
    void* data_1 = *(context + 0x7c);
    *(context + 0x70) = 0;
    Sys_ExecuteBytecode_2(data_1);
    void* entity_1 = *(context + 0x74);
    *(context + 0x7c) = 0;
    Sys_ExecuteBytecode_2(entity_1);
    void* temp_1 = *(context + 0x78);
    *(context + 0x74) = 0;
    Sys_ExecuteBytecode_2(temp_1);
    int32_t data_2 = *(context + 0xb8);
    *(context + 0x78) = 0;
    DynObj_RegisterSymbol_9(data_2, context);
    int32_t source_1 = *(context + 0xf8);
    g_a7a4d0 += 0xffffff00 - source_1 * 0x58;
    return 0xffffff00 - source_1 * 0x58;
}
