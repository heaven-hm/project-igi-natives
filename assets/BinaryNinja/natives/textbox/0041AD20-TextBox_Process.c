// Original IGI.EXE function: TextBox_Process (VA 0x0041AD20; static CFG gate PASS, CFG score 1.000).
#include "TextBox_Process.h"
char* TextBox_Process(void* context)

{
    int32_t* data_val = *(context + 0x94);

    if (data_val)
    {
        Sys_ReadFileBlock_18(data_val);
        *(context + 0x94) = 0;
    }

    *(context + 0x21a0) = 0;
    Script_CallNativeHandler_6(context + 0x21a4);
    return Script_CallNativeHandler_6(context + 0x21f4);
}
