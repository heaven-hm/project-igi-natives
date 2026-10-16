#include "004F1B20-Script_UnableToAllocatePara_2.h"
/* 0x004f1b20 Script_UnableToAllocatePara_2 full linked: callers=6 callees=1 */
int32_t sub_4f1b20()

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
