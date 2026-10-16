#include "gi_platform.h"
#include "00468690-AI_SelectTarget_25.h"
int32_t AI_SelectTarget_25(void* a1)

{
    int32_t ctxB = 0;
    char* dstD = a1 + 0x8c;
    (*(int32_t*)(uintptr_t)(a1 + 0x18c)) = 0;
    int32_t result;

    do
    {
        result = *dstD;

        if (!result)
            break;

        result = result - 0x20;

        if (result > 0x19)
        {
            ctxB = 0;
            dstD = &dstD[1];
        }
        else
        {
            int32_t objC1 = 0;
            objC1 = lookup_table_468778[result];

            switch (objC1)
            {
                case 0:
                {
                    dstD = &dstD[1];
                    break;
                }
                case 1:
                {
                    ctxB = 1;
                    dstD = &dstD[1];
                    break;
                }
                case 2:
                {
                    int32_t tmpD1 = Camera_ResetMatrix_4(dstD);

                    if (ctxB)
                    {
                        int32_t valA2 = (*(int32_t*)(uintptr_t)(a1 + 0x18c));

                        if (valA2)
                        {
                            int32_t valA4 = (*(int32_t*)(uintptr_t)(a1 + (valA2 << 2) + 0x18c)) + 1;

                            while (valA4 < tmpD1)
                            {
                                int32_t objC2 = (*(int32_t*)(uintptr_t)(a1 + 0x18c));

                                if (objC2 >= 0x40)
                                    break;

                                (*(int32_t*)(uintptr_t)(a1 + (objC2 << 2) + 0x190)) = valA4;
                                valA4 += 1;
                                (*(int32_t*)(uintptr_t)(a1 + 0x18c)) += 1;
                            }

                            ctxB = 0;
                        }
                    }

                    result = (*(int32_t*)(uintptr_t)(a1 + 0x18c));
                    (*(int32_t*)(uintptr_t)(a1 + (result << 2) + 0x190)) = tmpD1;
                    (*(int32_t*)(uintptr_t)(a1 + 0x18c)) += 1;

                    if (tmpD1)
                    {
                        int32_t i;

                        do
                        {
                            dstD = &dstD[1];
                            int32_t tmpD2;
                            tmpD2 = HIGHD(0x66666667 * tmpD1);
                            result = LOWD(0x66666667 * tmpD1);
                            i = tmpD2 >> 2;
                            tmpD1 s/= 0xa;
                        } while (i != -((i >> 0x1f)));
                    }
                    break;
                }
                case 3:
                {
                    ctxB = 0;
                    dstD = &dstD[1];
                    break;
                }
            }
        }
    } while ((*(int32_t*)(uintptr_t)(a1 + 0x18c)) < 0x40);

    return result;
}
