#include "gi_platform.h"
#include "0041D330-InputBox_Setup.h"
int32_t InputBox_Setup(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x19c));

    if (valA)
    {
        Sys_ReadFileBlock_18(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0x19c)) = 0;
    }

    Script_CallNativeHandler_6(a1 + 0xa4);
    Script_CallNativeHandler_6(a1 + 0xf4);
    Script_CallNativeHandler_6(a1 + 0x144);
    int32_t valA2 = Script_SpawnNewTask_6();
    int32_t objC1 = 0;
    objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    return ((int(*)())(uintptr_t)(*(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0)))(a1);
}
