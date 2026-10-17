// Original IGI.EXE function: Display_SwapBuffers_13 (VA 0x004975F0; static CFG gate PASS, CFG score 1.000).
#include "Display_SwapBuffers_13.h"
int32_t Display_SwapBuffers_13(void* a1)

{
    Sys_ExecuteBytecode_2(*(a1 + 0x48));
    void* objC = *(a1 + 0x44);
    *(a1 + 0x48) = 0;
    int32_t result = Sys_ExecuteBytecode_2(objC);
    *(a1 + 0x44) = 0;
    return result;
}
