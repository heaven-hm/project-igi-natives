#include "gi_platform.h"
#include "0041AD20-TextBox_Process.h"
char* TextBox_Process(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x94));

    if (valA)
    {
        Sys_ReadFileBlock_18(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0x94)) = 0;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x21a0)) = 0;
    Script_CallNativeHandler_6(a1 + 0x21a4);
    return Script_CallNativeHandler_6(a1 + 0x21f4);
}
