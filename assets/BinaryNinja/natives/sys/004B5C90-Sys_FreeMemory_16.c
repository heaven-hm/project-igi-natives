#include "Sys_FreeMemory_16.h"
int32_t Sys_FreeMemory_16(int32_t* a1)

{
    int32_t result = a1[9];
    int32_t* tmpD1;
    int32_t srcS1;

    switch (result)
    {
        case 0:
        {
            int32_t* i_1 = a1[5];

            for (int32_t* i = *i_1; i; i = *i)
            {
                Sys_FreeMemory_16(i_1[2]);
                i_1 = i;
            }

            Camera_ApplyHandiCam_33(a1);
            Sys_OpenFileStream_5(a1[0xd]);
            goto label_4b5cf2;
        }
        case 1:
        case 4:
        {
            Camera_ApplyHandiCam_33(&a1[2]);
            goto label_4b5ced;
        }
        case 2:
        {
            Sys_OpenFileStream_5(a1[0xd]);
        label_4b5ced:
            Camera_ApplyHandiCam_33(a1);
        label_4b5cf2:
            tmpD1 = g_943e34;
            result = g_943e28 - 1;
            srcS1 = *(tmpD1 + a1);
            g_943e28 = result;

            if (srcS1 != result)
                goto label_4b5d30;
            break;
        }
        case 3:
        {
            Camera_ApplyHandiCam_33(a1);
            tmpD1 = g_943e34;
            result = g_943e28 - 1;
            srcS1 = *(tmpD1 + a1);
            g_943e28 = result;

            if (srcS1 != result)
            {
            label_4b5d30:
                int32_t objC2 = g_943e24;
                result = *(objC2 + (result << 2)) * g_943e30 + g_943e20;
                int32_t dstD2 = *(objC2 + (srcS1 << 2));
                int32_t tmpD2 = *(tmpD1 + result);
                *(objC2 + (srcS1 << 2)) = *(objC2 + (tmpD2 << 2));
                *(g_943e24 + (tmpD2 << 2)) = dstD2;
                *(g_943e34 + result) = srcS1;
            }
            break;
        }
    }

    return result;
}
