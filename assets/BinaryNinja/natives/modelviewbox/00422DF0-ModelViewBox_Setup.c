// Original IGI.EXE function: ModelViewBox_Setup (VA 0x00422DF0; static CFG gate PASS, CFG score 1.000).
#include "ModelViewBox_Setup.h"
int32_t ModelViewBox_Setup(void* a1)

{
    QTask_FindType(*(a1 + 0xc4));
    QTask_FindType(*(a1 + 0x5c));
    DynObj_CreateMagicObject_7(*(a1 + 0x58));
    int32_t valA1 = Script_SpawnNewTask_6();
    int32_t objC1 = 0;
    objC1 = *(a1 + 0x1c);
    return (*(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0))(a1);
}
