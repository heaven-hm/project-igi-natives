// Original IGI.EXE function: Script_CallNativeHandler_16 (VA 0x004F4600; static CFG gate FAIL, CFG score 0.667).
#include "Script_CallNativeHandler_16.h"
void* Script_CallNativeHandler_16(void* context)

{
    memset(context + 0x720, 0, 0x20);
    *(context + 0x744) = 0;
    return context;
}
