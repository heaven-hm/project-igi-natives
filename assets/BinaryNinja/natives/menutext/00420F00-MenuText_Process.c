// Original IGI.EXE function: MenuText_Process (VA 0x00420F00; static CFG gate PASS, CFG score 1.000).
#include "MenuText_Process.h"
char* MenuText_Process(void* context)

{
    int32_t* data_val = *(context + 0x114);

    if (data_val)
    {
        Sys_ReadFileBlock_18(data_val);
        *(context + 0x114) = 0;
    }

    return Script_CallNativeHandler_6(context + 0x11c);
}
