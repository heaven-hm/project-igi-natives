// Original IGI.EXE function: Menu_FormatScreen_15 (VA 0x00424E40; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_15.h"
int32_t Menu_FormatScreen_15(void* a1, int32_t a2)

{
    *(a1 + 0x34) = a2;
    return a2;
}
