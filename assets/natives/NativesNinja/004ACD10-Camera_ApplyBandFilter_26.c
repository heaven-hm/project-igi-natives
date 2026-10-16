#include "004ACD10-Camera_ApplyBandFilter_26.h"
/* 0x004acd10 Camera_ApplyBandFilter_26 full linked: callers=6 callees=0 */
char* sub_4acd10(char* a1, char a2, int32_t a3)

{
    int32_t i_3 = a3;

    if (!i_3)
        return a1;

    int32_t eax = 0;
    eax = a2;
    char* edi = a1;

    if (i_3 < 4)
    {
    label_4acd5b:
        int32_t i;

        do
        {
            *edi = eax;
            edi = &edi[1];
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
                *edi = eax;
                edi = &edi[1];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);
        }

        eax *= 0x1010101;
        int32_t i_4 = i_3;
        i_3 &= 3;
        uint32_t ecx_4 = i_4 >> 2;

        if (!ecx_4)
            goto label_4acd5b;

        int32_t ecx_5;
        edi = __memfill_u32(edi, eax, ecx_4);

        if (i_3)
            goto label_4acd5b;
    }

    return a1;
}
