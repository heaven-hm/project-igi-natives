// Original IGI.EXE function: Display_RestoreDevice (VA 0x00490370; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice.h"
int32_t Timer_Now()

{
    return GetTickCount() - g_tick_base;
}
