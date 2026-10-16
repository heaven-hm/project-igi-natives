#include "gi_platform.h"
#include "004B7850-Sys_FreeMemory_21.h"
char* Sys_FreeMemory_21(char* a1, void* a2)

{
    char* flagP = a1;
    void* objC = a2;
    int32_t tmpD = *(flagP + 4);
    char* dstD = &flagP[0x10];
    char* result = tmpD * objC + dstD;
    a1 = dstD;

    if (objC >= 1)
    {
        int32_t i = 0;

        if (*(flagP + 6) - objC > 0)
        {
            a1 = result;
            int16_t* v_8_1 = objC * 2;

            do
            {
                int32_t valA3 = *(flagP + 0xc);
                int16_t ctxB4 = *(v_8_1 + valA3);
                *(valA3 + (i << 1)) = ctxB4;

                if (tmpD > 0)
                {
                    char* valA4 = dstD;
                    int32_t v_4_1 = tmpD;
                    bool cond_4_1;

                    do
                    {
                        ctxB4 = (*(int32_t*)(uintptr_t)(a1 - dstD + valA4));
                        *valA4 = ctxB4;
                        valA4 = &valA4[1];
                        cond_4_1 = v_4_1 != 1;
                        v_4_1 -= 1;
                    } while (cond_4_1);
                    objC = a2;
                }

                dstD = &dstD[tmpD];
                i += 1;
                a1 = &a1[tmpD];
                v_8_1 = &v_8_1[1];
                result = *(flagP + 6) - objC;
            } while (i < result);

            a1 = dstD;
        }

        while (i < *(flagP + 6))
        {
            result = *(flagP + 0xc);
            *(result + (i << 1)) = 0;

            if (tmpD > 0)
            {
                result = nullptr;
                __builtin_memset(__builtin_memset(dstD, 0, tmpD & 0xfffffffc), 0, tmpD & 3);
                dstD = a1;
            }

            dstD = &dstD[tmpD];
            i += 1;
            a1 = dstD;
        }
    }

    return result;
}
