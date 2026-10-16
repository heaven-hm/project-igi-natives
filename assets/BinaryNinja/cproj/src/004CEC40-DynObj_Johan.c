#include "gi_platform.h"
#include "004CEC40-DynObj_Johan.h"
void* DynObj_Johan(char* a1)

{
    int32_t ctxB;
    int32_t v_4 = ctxB;
    Camera_UpdateViewCone_6(a1, "johan");
    int32_t flagP = g_a4edec;
    int32_t dstD = 0;

    if (flagP > 0)
    {
        char* tmpD1 = &g_a443b4;

        while (true)
        {
            char* valA = a1;
            char* srcS1 = tmpD1;
            int32_t valA2;

            while (true)
            {
                char ctxB1 = *valA;
                char f0_1 = *srcS1;
                bool c_1 = ctxB1 < f0_1;

                if (ctxB1 == f0_1)
                {
                    if (!ctxB1)
                    {
                        valA2 = 0;
                        break;
                    }

                    ctxB1 = valA[1];
                    char f3_1 = srcS1[1];
                    c_1 = ctxB1 < f3_1;

                    if (ctxB1 == f3_1)
                    {
                        valA = &valA[2];
                        srcS1 = &srcS1[2];

                        if (ctxB1)
                            continue;

                        valA2 = 0;
                        break;
                    }
                }

                valA2 = valA - valA + 1;
                break;
            }

            if (!valA2)
            {
                int32_t valA4 = dstD * 0x48;

                if (*(valA4 + &g_a443dc))
                    return valA4 + &g_a443a0;

                goto label_4ced39;
            }

            dstD += 1;
            tmpD1 = &tmpD1[0x48];

            if (dstD >= flagP)
                break;
        }
    }

    if (flagP < 0x258)
    {
        char* dstD1 = a1;
        int32_t i = 0xffffffff;

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
        dstD4 = memcpy(flagP * 0x48 + &g_a443b4, dstD1 - objC3, objC3 & 0xfffffffc);
        memcpy(dstD4, srcS3, objC3 & 3);
        DynObj_Johan_2(g_a4edec * 0x48 + &g_a443a0);
        int32_t valA8 = g_a4edec;

        if (*(valA8 * 0x48 + &g_a443dc))
        {
            g_a4edec = valA8 + 1;
            return flagP * 0x48 + &g_a443a0;
        }
    label_4ced39: ;
        return 0;
    }

    int32_t v_14_1 = 0x258;
    Error_Show("MTP_nLODVirModel >= %d");

    while (true)
        /* nop */
}
