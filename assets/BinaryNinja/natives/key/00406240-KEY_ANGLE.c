#include "KEY_ANGLE.h"
int32_t KEY_ANGLE(int32_t a1, int32_t* a2, void** a3)

{
    int32_t result = a1;

    if (a3)
        *a3 = &g_536998[result * 0x24];

    if (a2)
    {
        result *= 9;
        *a2 = *((result << 2) + &g_5369b8);
    }

    return result;
}
