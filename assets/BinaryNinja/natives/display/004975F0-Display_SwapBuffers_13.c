// Original IGI.EXE function: Display_SwapBuffers_13 (VA 0x004975F0; static CFG gate PASS, CFG score 1.000).
#include "Display_SwapBuffers_13.h"
int32_t Display_SwapBuffers_13(void* context)

{
    Sys_ExecuteBytecode_2(*(context + 0x48));
    void* entity_val = *(context + 0x44);
    *(context + 0x48) = 0;
    int32_t result = Sys_ExecuteBytecode_2(entity_val);
    *(context + 0x44) = 0;
    return result;
}
