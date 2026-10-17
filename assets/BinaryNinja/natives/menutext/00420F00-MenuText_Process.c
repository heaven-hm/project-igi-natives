// Original IGI.EXE function: MenuText_Process (VA 0x00420F00; static CFG gate PASS, CFG score 1.000).
#include "MenuText_Process.h"
char* MenuText_Process(void* a1)

{
    int32_t* valA = *(a1 + 0x114);

    if (valA)
    {
        Sys_ReadFileBlock_18(valA);
        *(a1 + 0x114) = 0;
    }

    return Script_CallNativeHandler_6(a1 + 0x11c);
}
