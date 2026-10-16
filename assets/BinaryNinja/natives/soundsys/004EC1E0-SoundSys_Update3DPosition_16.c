#include "SoundSys_Update3DPosition_16.h"
int32_t SoundSys_Update3DPosition_16(void* a1, int32_t a2)

{
    void* valA = *(a1 + 8);
    int32_t ctxB = *(a1 + 0x18);
    int32_t v_4 = ctxB;
    (*a1)(a1, a2);
    int32_t dstD = 0;
    *(a1 + 0x1c) = 0xffffffff;

    if (ctxB > 0)
    {
        char* objC1 = a1 + 0x24;

        do
        {
            ctxB = *objC1;
            int32_t tmpD1 = *(a1 + 0x20);
            char* tmpD2 = tmpD1 + (dstD << 3);
            int32_t* valA4 = *(tmpD1 + (dstD << 3) + 4) + ctxB * 0xc;

            if (*valA4)
            {
                int32_t valA5 = valA4[2];

                if ((valA5 & valA) != valA5)
                    goto label_4ec27a;

                goto label_4ec257;
            }

            if (valA4[2] & valA)
            {
            label_4ec27a:

                if (ctxB)
                {
                    char valA10 = objC1[1];
                    objC1[1] = valA10 - 1;

                    if (valA10 == 1)
                    {
                        *objC1 = 0;
                        objC1[1] = 0;
                    }
                }
            }
            else
            {
            label_4ec257:
                char valA6 = ctxB + 1;
                *objC1 = valA6;
                ctxB = *tmpD2;

                if (valA6 != ctxB)
                    objC1[1] = *(*(tmpD2 + 4) + valA6 * 0xc + 4);
                else
                {
                    *(a1 + 0x1c) = dstD;
                    *objC1 = 0;
                    objC1[1] = 0;
                }
            }

            dstD += 1;
            objC1 = &objC1[2];
        } while (dstD < v_4);
    }

    return (*(a1 + 0x14))(a1, a2);
}
