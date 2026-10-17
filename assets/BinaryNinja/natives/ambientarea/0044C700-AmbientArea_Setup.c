// Original IGI.EXE function: AmbientArea_Setup (VA 0x0044C700; static CFG gate PASS, CFG score 1.000).
#include "AmbientArea_Setup.h"
char* AmbientArea_Setup(void* context)

{
    int32_t* data_val = *(context + 0x1b8);

    if (data_val)
        Qtask_UpdateList(data_val);

    return Script_CallNativeHandler_6(context + 0x1bc);
}
