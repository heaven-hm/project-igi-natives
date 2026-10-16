#include "Sys_AllocateMemory_2.h"
int32_t Sys_AllocateMemory_2(int32_t a1, int32_t a2, char* a3, int32_t a4)

{
    char* objC = nullptr;
    int32_t result = a2 - 1;

    if (result <= 0)
    {
        *a1 = 0;
        return result;
    }

    char* ctxB = a3;

    do
    {
        result = *ctxB;

        if (!result)
            break;

        if (result != 0x2f)
        {
            objC[a1] = result;
            objC = &objC[1];
        }
        else
        {
            result = ctxB[1];
            ctxB = &ctxB[1];

            if (result < 0x30 || result > 0x39)
            {
                objC[a1] = result;
                objC = &objC[1];
            }
            else
            {
                Sys_CheckHeap(&objC[a1], a2 - objC, a4, result - 0x30);
                int32_t dstD1 = a1;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond_0_1 = 0 != *dstD1;
                    dstD1 += 1;
                    i -= 1;

                    if (!cond_0_1)
                        break;
                }

                objC = ~i - 1;
            }
        }

        result = a2 - 1;
        ctxB = &ctxB[1];
    } while (objC < result);

    objC[a1] = 0;
    return result;
}
