#include "004C7290-DynObj_InvalidCategory.h"
/* 0x004c7290 DynObj_InvalidCategory full linked: callers=2 callees=1 */
int32_t sub_4c7290(int32_t a1, int16_t a2)

{
    uint32_t eax_1 = a2 << 2;
    int32_t edx;

    if (*(eax_1 + &g_a982e0) || *(eax_1 + &g_a988e0) || *(eax_1 + &g_a9c4e0)
            || *(eax_1 + &g_a9cae0))
        edx = 1;
    else
        edx = 0;

    int32_t eax_2;

    if (*(eax_1 + &g_a9ace0) || *(eax_1 + &g_a9a0e0) || *(eax_1 + &g_a9a6e0)
            || *(eax_1 + &g_a99ae0))
        eax_2 = 1;
    else
        eax_2 = 0;

    if (a1 == 4)
        return a1;

    if (a1 == 8)
        return 5;

    if (a1 == 2)
    {
        if (edx)
        {
            int32_t eax_5 = -(eax_2);
            return eax_5 - eax_5 + a1;
        }

        int32_t eax_8 = -(eax_2);
        int32_t eax_9 = eax_8 - eax_8;
        eax_9 &= 0xfe;
        return eax_9 + 3;
    }

    if (a1 == 1)
        return 0;

    Error_Show("Invalid category");

    while (true)
        /* nop */
}
