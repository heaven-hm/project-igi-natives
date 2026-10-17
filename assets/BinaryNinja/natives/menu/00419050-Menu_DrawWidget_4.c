// Original IGI.EXE function: Menu_DrawWidget_4 (VA 0x00419050; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_4.h"
void* Menu_DrawWidget_4(void* context)

{
    *(context + 0x20) = 0x384;
    *(context + 0x28) = 0;
    return context;
}
