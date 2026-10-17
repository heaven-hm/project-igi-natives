// Original IGI.EXE function: Script_FormatString_17 (VA 0x004F4910; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_17.h"
int32_t Script_FormatString_17(int32_t context, int32_t param_2, int32_t param_3) {
    int32_t data_val = param_3;

    if (data_val < 0)
        data_val = 0;

    if (data_val < param_2)
        return context + (data_val << 3);

    return context + (param_2 << 3) - 8;
}
