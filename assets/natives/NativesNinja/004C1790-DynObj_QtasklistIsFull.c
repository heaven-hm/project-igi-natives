#include "004C1790-DynObj_QtasklistIsFull.h"
/* 0x004c1790 DynObj_QtasklistIsFull full linked: callers=38 callees=1 */
int32_t* sub_4c1790(int32_t* a1, int32_t a2)

{
    int32_t ecx = *a1;

    if (ecx < a1[1])
    {
        a1[ecx + 2] = a2;
        *a1 += 1;
        return a1;
    }

    Error_Show("QTaskList is full");

    while (true)
        /* nop */
}
