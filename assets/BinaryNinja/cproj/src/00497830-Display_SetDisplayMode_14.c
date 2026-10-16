#include "gi_platform.h"
#include "00497830-Display_SetDisplayMode_14.h"
void Display_SetDisplayMode_14(void** a1)

{
    for (void** i = a1; i; i = *i)
    {
        int32_t valA = i[1];

        if (valA != 0xffffffff)
            ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)((valA << 2) + &g_a94e84))))(i);
    }
}
