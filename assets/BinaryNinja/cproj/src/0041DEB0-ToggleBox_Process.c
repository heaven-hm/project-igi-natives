#include "gi_platform.h"
#include "0041DEB0-ToggleBox_Process.h"
int32_t ToggleBox_Process(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    if (valA)
        Sys_ReadFileBlock_18(valA);

    int32_t* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));

    if (valA1)
        Sys_ReadFileBlock_18(valA1);

    QTask_FindType((*(int32_t*)(uintptr_t)(a1 + 0x94)));
    QTask_FindType((*(int32_t*)(uintptr_t)(a1 + 0x98)));
    Script_CallNativeHandler_6(a1 + 0xac);
    Script_CallNativeHandler_6(a1 + 0xfc);
    int32_t valA4 = Script_SpawnNewTask_6();
    int32_t tmpD1 = 0;
    tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    return ((int(*)())(uintptr_t)(*(((valA4 * 0x180 + tmpD1) << 2) + &g_a96ae0)))(a1);
}
