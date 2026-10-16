#include "Display_SetDisplayMode_14.h"
void Display_SetDisplayMode_14(void** a1)

{
    for (void** i = a1; i; i = *i)
    {
        int32_t valA = i[1];

        if (valA != 0xffffffff)
            (*((valA << 2) + &g_a94e84))(i);
    }
}
