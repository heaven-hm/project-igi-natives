#include "Script_UnableToAllocatePara_2.h"
int32_t Script_UnableToAllocatePara_2()

{
    for (int32_t i = 0; i < 0x10; i += 1)
    {
        if (!*(i + &g_a758c8))
        {
            *(i + &g_a758c8) = 1;
            return i;
        }
    }

    Error_Show("Unable to allocate parameter event");

    while (true)
        /* nop */
}
