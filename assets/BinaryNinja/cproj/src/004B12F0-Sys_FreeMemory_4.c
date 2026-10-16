#include "gi_platform.h"
#include "004B12F0-Sys_FreeMemory_4.h"
int32_t Script_RegisterNamespace(char* a1, void* a2)

{
    int32_t valA = QFile_DeviceIndex(a2);
    int32_t ctxB = valA;

    if (ctxB)
    {
        char* dstD1 = a1;
        Sys_OpenFileStream_4(dstD1);
        int32_t valA1 = 0;
        int32_t* objC1 = &g_9423c0;

        while (*objC1)
        {
            objC1 = &objC1[0x25];
            valA1 += 1;

            if (objC1 >= 0x943640)
                return valA1;
        }

        int32_t i = 0xffffffff;
        int32_t tmpD2 = valA1 * 0x94;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC3 = ~i;
        int32_t srcS3;
        int32_t dstD4;
        dstD4 = memcpy(tmpD2 + &g_942330, dstD1 - objC3, objC3 & 0xfffffffc);
        memcpy(dstD4, srcS3, objC3 & 3);
        void* dstD5 = a2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD5;
            dstD5 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC7 = ~i_1;
        valA = objC7;
        int32_t srcS6;
        int32_t dstD8;
        dstD8 = memcpy(tmpD2 + &g_942340, dstD5 - objC7, objC7 & 0xfffffffc);
        memcpy(dstD8, srcS6, valA & 3);
        *(tmpD2 + &g_9423c0) = ctxB;
    }

    return valA;
}
