#include "gi_platform.h"
#include "00420F00-MenuText_Process.h"
char* MenuText_Process(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x114));

    if (valA)
    {
        Sys_ReadFileBlock_18(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0x114)) = 0;
    }

    return Script_CallNativeHandler_6(a1 + 0x11c);
}
