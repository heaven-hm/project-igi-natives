#include "gi_platform.h"
#include "004C7290-DynObj_InvalidCategory.h"
int32_t DynObj_InvalidCategory(int32_t a1, int16_t a2)

{
    uint32_t valA1 = a2 << 2;
    int32_t tmpD;

    if (*(valA1 + &g_a982e0) || *(valA1 + &g_a988e0) || *(valA1 + &g_a9c4e0)
            || *(valA1 + &g_a9cae0))
        tmpD = 1;
    else
        tmpD = 0;

    int32_t valA2;

    if (*(valA1 + &g_a9ace0) || *(valA1 + &g_a9a0e0) || *(valA1 + &g_a9a6e0)
            || *(valA1 + &g_a99ae0))
        valA2 = 1;
    else
        valA2 = 0;

    if (a1 == 4)
        return a1;

    if (a1 == 8)
        return 5;

    if (a1 == 2)
    {
        if (tmpD)
        {
            int32_t valA5 = -(valA2);
            return valA5 - valA5 + a1;
        }

        int32_t valA8 = -(valA2);
        int32_t valA9 = valA8 - valA8;
        valA9 &= 0xfe;
        return valA9 + 3;
    }

    if (a1 == 1)
        return 0;

    Error_Show("Invalid category");

    while (true)
        /* nop */
}
