#include "Sys_FreeMemory_2.h"
int32_t Sys_FreeMemory_2(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t valA = a4;

    if (valA < 4)
        valA = 4;

    a1[5] = a2;
    int32_t dstD1 = (a2 + valA + 3) & ~(valA - 1);
    void* valA1 = Mem_Alloc((dstD1 + 4) * a3, valA);
    *a1 = valA1;
    int32_t result = 0;
    a1[1] = dstD1 * a3 + valA1;
    a1[3] = a3;
    a1[4] = dstD1;
    a1[2] = 0;

    if (a3 > 0)
    {
        do
        {
            *(a1[1] + (result << 2)) = result;
            result += 1;
        } while (result < a3);
    }

    return result;
}
