#include "Config_Moveleft.h"
int32_t Config_Moveleft(int32_t a1, int32_t* a2, void** a3)

{
    int32_t result = a1;

    if (a3)
        *a3 = &"MoveLeft"[result * 4];

    if (a2)
    {
        result *= 9;
        *a2 = *((result << 2) + &g_536578);
    }

    return result;
}
