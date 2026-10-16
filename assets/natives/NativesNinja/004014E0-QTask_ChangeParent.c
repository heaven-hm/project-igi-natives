#include "004014E0-QTask_ChangeParent.h"
/* 0x004014e0 QTask_ChangeParent full linked: callers=1 callees=0 */
int32_t QTask_ChangeParent(int16_t a1)

{
    int32_t result = 0;

    for (int32_t i = 0; i < 0x10; i += 1)
    {
        char edx_1 = *(i + &g_54ff24);

        if (edx_1 != 0xff)
        {
            uint32_t edx_5 = edx_1 * 0x180 + a1;
            edx_5 = *((edx_5 << 2) + &g_a96ae0);
            edx_5 = edx_5;
            result |= edx_5 << (i & 0x1f);
        }
    }

    *(&result + 1) |= 0x80;
    return result;
}
