#include "gi_platform.h"
#include "004BB030-Sys_CloseFileStream_26.h"
int32_t Sys_CloseFileStream_26(void* a1, void* a2)

{
    int32_t result = 0;
    char v_800;
    Sys_ExecuteBytecode_26(&v_800, a2);
    int32_t* flagP = (*(int32_t*)(uintptr_t)(a1 + 0x38));
    int32_t* dstD = *flagP;

    if (!dstD)
    {
    label_4bb0b3: ;
        int32_t* valA5 = Mem_Alloc(0x808, 4);
        valA5[1] = 0;
        *valA5 = 0;
        Camera_SetFieldOfView_33(a1 + 0x38, valA5);
        void* dstD1 = &v_800;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC2 = ~i;
        int32_t srcS4;
        int32_t dstD4;
        dstD4 = memcpy(&valA5[2], dstD1 - objC2, objC2 & 0xfffffffc);
        memcpy(dstD4, srcS4, objC2 & 3);
    }
    else
    {
        while (true)
        {
            char* srcS1 = &v_800;
            char* valA2 = &flagP[2];
            int32_t valA4;

            while (true)
            {
                char tmpD1 = *valA2;
                char f0_1 = *srcS1;
                bool c_1 = tmpD1 < f0_1;

                if (tmpD1 == f0_1)
                {
                    if (!tmpD1)
                    {
                        valA4 = 0;
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

                        valA4 = 0;
                        break;
                    }
                }

                valA4 = valA2 - valA2 + 1;
                break;
            }

            if (!valA4)
                break;

            flagP = dstD;
            dstD = *dstD;
            result += 1;

            if (!dstD)
                goto label_4bb0b3;
        }

        if (!flagP)
            goto label_4bb0b3;
    }

    return result;
}
