#include "gi_platform.h"
#include "00422DF0-ModelViewBox_Setup.h"
int32_t ModelViewBox_Setup(void* a1)

{
    QTask_FindType((*(int32_t*)(uintptr_t)(a1 + 0xc4)));
    QTask_FindType((*(int32_t*)(uintptr_t)(a1 + 0x5c)));
    DynObj_CreateMagicObject_7((*(int32_t*)(uintptr_t)(a1 + 0x58)));
    int32_t valA1 = Script_SpawnNewTask_6();
    int32_t objC1 = 0;
    objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    return ((int(*)())(uintptr_t)(*(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0)))(a1);
}
