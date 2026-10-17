// Original IGI.EXE function: TextBox_Process (VA 0x0041AD20; static CFG gate PASS, CFG score 1.000).
#include "TextBox_Process.h"
char* TextBox_Process(void* a1)

{
    int32_t* valA = *(a1 + 0x94);

    if (valA)
    {
        Sys_ReadFileBlock_18(valA);
        *(a1 + 0x94) = 0;
    }

    *(a1 + 0x21a0) = 0;
    Script_CallNativeHandler_6(a1 + 0x21a4);
    return Script_CallNativeHandler_6(a1 + 0x21f4);
}
