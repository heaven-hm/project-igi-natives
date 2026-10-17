// Original IGI.EXE function: Display_OpenDevice_7 (VA 0x004946D0; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice_7.h"
int32_t Display_OpenDevice_7()

{
    *(g_bcade8 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    return 0xffffffff;
}
