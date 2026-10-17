// Original IGI.EXE function: Menu_FormatScreen_10 (VA 0x00420290; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_10.h"
int32_t Menu_FormatScreen_10(int32_t context)

{
    int32_t data_val = *(context + 0x248);

    if (!data_val)
        return 0;

    return (data_val - 1) * *(context + 0xa0) + 0.5;
}
