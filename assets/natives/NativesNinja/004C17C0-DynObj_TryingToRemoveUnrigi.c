#include "004C17C0-DynObj_TryingToRemoveUnrigi.h"
/* 0x004c17c0 DynObj_TryingToRemoveUnrigi full linked: callers=36 callees=1 */
int32_t sub_4c17c0(int32_t* a1, int32_t a2)

{
    int32_t result = 0;
    int32_t ecx = *a1;

    if (ecx > 0)
    {
        int32_t* edx_1 = &a1[2];

        do
        {
            if (*edx_1 == a2)
            {
                *a1 = ecx - 1;
                a1[result + 2] = a1[ecx + 1];
                return result;
            }

            result += 1;
            edx_1 = &edx_1[1];
        } while (result < ecx);
    }

    Error_Show("Trying to remove unrigistered QTask from QTaskList");

    while (true)
        /* nop */
}
