// Original IGI.EXE function: ModelViewBox_Setup (VA 0x00422DF0; static CFG gate PASS, CFG score 1.000).
#include "ModelViewBox_Setup.h"
int32_t ModelViewBox_Setup(void* context)

{
    QTask_FindType(*(context + 0xc4));
    QTask_FindType(*(context + 0x5c));
    DynObj_CreateMagicObject_7(*(context + 0x58));
    int32_t data_1 = Script_SpawnNewTask_6();
    int32_t entity_1 = 0;
    entity_1 = *(context + 0x1c);
    return (*(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0))(context);
}
