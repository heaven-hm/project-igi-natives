// Original IGI.EXE function: DynObj_InsertHashItem_2 (VA 0x004C04B0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InsertHashItem_2.h"
uint32_t DynObj_InsertHashItem_2(int32_t* a1, int32_t** a2, char* a3)

{
    uint32_t valA1 = DynObj_LookupHashItem_2(a3, a1[1]);
    int32_t* flagP = *(*a1 + valA1 * 0xc);
    int32_t* dstD = *flagP;

    if (dstD)
    {
        while (true)
        {
            char* srcS1 = flagP[2];
            char* valA2 = a3;

            while (true)
            {
                char tmpD1 = *valA2;
                char f0_1 = *srcS1;
                bool c_1 = tmpD1 < f0_1;

                if (tmpD1 == f0_1)
                {
                    if (!tmpD1)
                    {
                        valA1 = 0;
                        break;
                    }

                    tmpD1 = valA2[1];
                    char f3_1 = srcS1[1];
                    c_1 = tmpD1 < f3_1;

                    if (tmpD1 == f3_1)
                    {
                        valA2 = &valA2[2];
                        srcS1 = &srcS1[2];

                        if (tmpD1)
                            continue;

                        valA1 = 0;
                        break;
                    }
                }

                valA1 = valA2 - valA2 + 1;
                break;
            }

            if (!valA1)
            {
                int32_t** valA4 = a2;
                *valA4 = flagP;
                valA4 = 1;
                return valA4;
            }

            flagP = dstD;
            dstD = *dstD;

            if (!dstD)
                break;
        }
    }

    *a2 = nullptr;
    valA1 = 0;
    return valA1;
}
