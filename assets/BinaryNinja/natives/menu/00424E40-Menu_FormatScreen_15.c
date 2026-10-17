// Original IGI.EXE function: Menu_FormatScreen_15 (VA 0x00424E40; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_15.h"
int32_t Menu_FormatScreen_15(void* context, int32_t param_2)

{
    *(context + 0x34) = param_2;
    return param_2;
}
