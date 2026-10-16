#include "gi_platform.h"
#include "004ACD10-Camera_ApplyBandFilter_26.h"
char* Camera_ApplyBandFilter_26(char* a1, char a2, int32_t a3)

{
    int32_t i_3 = a3;

    if (!i_3)
        return a1;

    int32_t valA = 0;
    valA = a2;
    char* dstD = a1;

    if (i_3 < 4)
    {
    label_4acd5b: ;
        int32_t i;

        do
        {
            *dstD = valA;
            dstD = &dstD[1];
            i = i_3;
            i_3 -= 1;
        } while (i != 1);
    }
    else
    {
        int32_t i_2 = -(a1) & 3;

        if (i_2)
        {
            i_3 -= i_2;
            int32_t i_1;

            do
            {
                *dstD = valA;
                dstD = &dstD[1];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);
        }

        valA *= 0x1010101;
        int32_t i_4 = i_3;
        i_3 &= 3;
        uint32_t objC4 = i_4 >> 2;

        if (!objC4)
            goto label_4acd5b;

        int32_t objC5;
        dstD = __memfill_u32(dstD, valA, objC4);

        if (i_3)
            goto label_4acd5b;
    }

    return a1;
}
