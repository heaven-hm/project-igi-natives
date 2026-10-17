// Original IGI.EXE function: Menu_DrawWidget_16 (VA 0x00425B70; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_16.h"
int32_t Menu_DrawWidget_16(void* context)

{
    return *(context + 0x4c) + 0x20;
}
