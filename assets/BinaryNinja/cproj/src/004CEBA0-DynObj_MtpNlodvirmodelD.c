#include "gi_platform.h"
#include "004CEBA0-DynObj_MtpNlodvirmodelD.h"
void* DynObj_MtpNlodvirmodelD(int32_t a1)

{
    int32_t dstD = a1;

    if (!dstD)
        return 0;

    int32_t valA1 = g_a4edec;

    if (valA1 < 0x258)
    {
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD;
            dstD += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC = ~i;
        int32_t srcS1;
        int32_t dstD3;
        dstD3 = memcpy(valA1 * 0x48 + &g_a443b4, dstD - objC, objC & 0xfffffffc);
        memcpy(dstD3, srcS1, objC & 3);
        g_a4edec += 1;
        return valA1 * 0x48 + &g_a443a0;
    }

    int32_t saved_obj = 0x258;
    Error_Show("MTP_nLODVirModel >= %d");

    while (true)
        /* nop */
}
