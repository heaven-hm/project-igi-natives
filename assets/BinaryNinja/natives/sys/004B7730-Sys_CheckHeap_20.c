#include "Sys_CheckHeap_20.h"
void* Sys_CheckHeap_20(int32_t* a1, void* a2)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    void* valA = a1[2];
    int32_t dstD = a1[1];
    int32_t objC1 = *(valA + 8);
    int32_t srcS = 0;
    int16_t flagP = 0;
    int32_t objC3 = *a1;

    if (!objC3)
    {
        int32_t valA1 = Sys_CloseFileStream_17(valA);
        char* objC4 = nullptr;

        if (dstD > 0)
        {
            do
            {
                if (!*(objC4 + dstD * a2 + a1 + 0x10))
                    srcS += valA1;
                else
                {
                    srcS += valA1;
                    flagP = srcS;
                }

                objC4 = &objC4[1];
            } while (objC4 < dstD);
        }

        int32_t valA2 = a1[3];
        *(valA2 + (a2 << 1)) = flagP;
        return valA2;
    }

    if (objC3 == 1)
    {
        int32_t valA3 = Sys_DispatchOpcode_17(valA);
        char* tmpD3 = nullptr;

        if (dstD > 0)
        {
            do
            {
                char objC8 = *(tmpD3 + dstD * a2 + a1 + 0x10);

                if (!objC8)
                    srcS += valA3;
                else
                {
                    srcS += *(objC1 + objC8 * 0x24 - 0x14);
                    flagP = srcS;
                }

                tmpD3 = &tmpD3[1];
            } while (tmpD3 < dstD);
        }

        valA = a2;
        *(a1[3] + (valA << 1)) = flagP;
    }

    return valA;
}
