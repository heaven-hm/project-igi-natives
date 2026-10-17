// Original IGI.EXE function: Sys_DispatchOpcode_26 (VA 0x004BB180; static CFG gate FAIL, CFG score 0.833).
#include "Sys_DispatchOpcode_26.h"
int32_t Sys_DispatchOpcode_26(int32_t* a1, char* a2)

{
    int32_t* valA = &a1[0xb];
    int32_t* dstD = *valA;
    int32_t result = 0;
    int32_t* flagP = *dstD;

    if (!flagP)
    {
    label_4bb1e4:
        int32_t* valA4 = Mem_Alloc(0x88, 4);
        valA4[1] = 0;
        *valA4 = 0;
        Camera_SetFieldOfView_33(valA, valA4);
        char* dstD1 = a2;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC2 = ~i;
        int32_t srcS4;
        int32_t dstD4;
        dstD4 = memcpy(&valA4[2], dstD1 - objC2, objC2 & 0xfffffffc);
        memcpy(dstD4, srcS4, objC2 & 3);
    }
    else
    {
        while (true)
        {
            char* srcS1 = a2;
            char* valA1 = &dstD[2];
            int32_t valA3;

            while (true)
            {
                char tmpD1 = *valA1;
                char f0_1 = *srcS1;
                bool c_1 = tmpD1 < f0_1;

                if (tmpD1 == f0_1)
                {
                    if (!tmpD1)
                    {
                        valA3 = 0;
                        break;
                    }

                    tmpD1 = valA1[1];
                    char f3_1 = srcS1[1];
                    c_1 = tmpD1 < f3_1;

                    if (tmpD1 == f3_1)
                    {
                        valA1 = &valA1[2];
                        srcS1 = &srcS1[2];

                        if (tmpD1)
                            continue;

                        valA3 = 0;
                        break;
                    }
                }

                valA3 = valA1 - valA1 + 1;
                break;
            }

            if (!valA3)
                break;

            dstD = flagP;
            flagP = *flagP;
            result += 1;

            if (!flagP)
                goto label_4bb1e4;
        }

        if (!dstD)
            goto label_4bb1e4;
    }

    return result;
}
