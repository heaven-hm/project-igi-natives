// Original IGI.EXE function: Display_SetDisplayMode_15 (VA 0x00497E60; static CFG gate PASS, CFG score 1.000).
#include "Display_SetDisplayMode_15.h"
void* Display_SetDisplayMode_15(void* context, float param_2)

{
    *(context + 0x5c) = param_2;
    return context;
}
