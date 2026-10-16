#include "MenuTextConditional_Process.h"
char* MenuTextConditional_Process(void* a1)

{
    int32_t* valA = *(a1 + 0x114);

    if (valA)
    {
        Sys_ReadFileBlock_18(valA);
        *(a1 + 0x114) = 0;
    }

    Script_CallNativeHandler_6(a1 + 0x11c);
    Script_CallNativeHandler_6(a1 + 0x16c);
    return Script_CallNativeHandler_6(a1 + 0x1bc);
}
