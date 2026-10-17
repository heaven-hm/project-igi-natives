// Original IGI.EXE function: Menu_FormatScreen_16 (VA 0x004258E0; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_16.h"
int32_t Menu_FormatScreen_16(int32_t context) {
    if (context != 7 && context != 6)
        return 0;

    return 1;
}
