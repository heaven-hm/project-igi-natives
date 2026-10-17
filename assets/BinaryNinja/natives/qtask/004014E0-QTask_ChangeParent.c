// Original IGI.EXE function: QTask_ChangeParent (VA 0x004014E0; static CFG gate PASS, CFG score 1.000).
#include "QTask_ChangeParent.h"
int32_t QTask_ChangeParent(int16_t a1)

{
    int32_t result = 0;

    for (int32_t i = 0; i < 0x10; i += 1)
    {
        char tmpD1 = *(i + &g_54ff24);

        if (tmpD1 != 0xff)
        {
            uint32_t tmpD5 = tmpD1 * 0x180 + a1;
            tmpD5 = *((tmpD5 << 2) + &g_a96ae0);
            tmpD5 = tmpD5;
            result |= tmpD5 << (i & 0x1f);
        }
    }

    *(&result + 1) |= 0x80;
    return result;
}
