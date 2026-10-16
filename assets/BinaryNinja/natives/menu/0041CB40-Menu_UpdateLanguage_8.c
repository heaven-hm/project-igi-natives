#include "Menu_UpdateLanguage_8.h"
int32_t Menu_UpdateLanguage_8(int32_t* a1, char* a2 @ 0xc, int32_t a3)

{
    int32_t objC;
    int32_t v_4 = objC;
    char* dstD = a2;
    int32_t result = 0;
    char* flagP = dstD;

    if (!dstD)
        return 0;

    char i = *dstD;

    if (i)
    {
        int32_t ctxB;
        int32_t v_10_1 = ctxB;

        do
        {
            char* srcS1 = dstD;

            if (i)
            {
                while (i != 0x20)
                {
                    if (i == 9)
                        break;

                    if (i == 0xa)
                        break;

                    i = srcS1[1];
                    srcS1 = &srcS1[1];

                    if (!i)
                        break;
                }
            }

            char ctxB1 = *srcS1;
            *srcS1 = 0;
            Sys_FreeMemory_18(a1, flagP);
            *srcS1 = ctxB1;

            if (Sys_CheckHeap_21(a1) > a3 && dstD != flagP)
            {
                dstD[0xffffffff] = 0;
                flagP = dstD;
                result += 1;
            }

            int32_t valA6 = *srcS1;

            if (valA6 <= 0x20)
            {
                int32_t tmpD1 = 0;
                tmpD1 = lookup_table_41cc1c[valA6];

                switch (tmpD1)
                {
                    case 0:
                    {
                        dstD = srcS1;
                        result += 1;
                        break;
                    }
                    case 1:
                    {
                        dstD = &srcS1[1];
                        break;
                    }
                    case 2:
                    {
                        dstD = &srcS1[1];
                        *srcS1 = 0;
                        result += 1;
                        flagP = dstD;
                        break;
                    }
                }
            }

            i = *dstD;
        } while (i);
    }

    return result;
}
