// Original IGI.EXE function: __allshl (VA 0x005309A0; static CFG gate PASS, CFG score 1.000).
#include "__allshl.h"

int32_t __allshl(int32_t pThis, int32_t param, char flags) {
    if (flags >= 0x40)
        return 0;

    if (flags >= 0x20)
        return 0;

    return pThis << (flags & 0x1f);
}
