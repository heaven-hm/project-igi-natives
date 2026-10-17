// Original IGI.EXE function: Display_OpenDevice_16 (VA 0x00498350; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice_16.h"
int32_t Display_OpenDevice_16()

{
    int32_t result = Sys_PopStack_2(g_6e5bb8);
    g_6e5bbc = 0;
    return result;
}
