// Original IGI.EXE function: Menu_FormatScreen_5 (VA 0x004190D0; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_5.h"
void* Menu_FormatScreen_5(void* context)

{
    *(context + 0x26c4) = 1;
    return context;
}
