#include "005237E0-Light_SampleLightmap_2.h"
/* 0x005237e0 Light_SampleLightmap_2 full linked: callers=2 callees=14 */
int32_t sub_5237e0(void* a1)

{
    void* edi = a1;

    if (*(edi + 0x38))
    {
        int32_t i = 0;

        if (*(edi + 0x2c) > 0)
        {
            a1 = nullptr;

            do
            {
                int32_t* esi_2 = a1 + *(edi + 0x38);
                sub_4b0d10(esi_2[6]);
                sub_4b0d10(esi_2[5]);
                sub_4b0d10(esi_2[1]);
                sub_4b0d10(*esi_2);
                void* ecx_2 = esi_2[9];
                __builtin_memset(esi_2, 0, 0x1c);
                sub_4b0d10(ecx_2);
                void* edx_3 = esi_2[4];
                esi_2[9] = 0;
                sub_4b0d10(edx_3);
                sub_4b0d10(esi_2[3]);
                sub_4b0d10(esi_2[2]);
                i += 1;
                a1 += 0x28;
            } while (i < *(edi + 0x2c));
        }

        sub_4b0d10(*(edi + 0x38));
        *(edi + 0x38) = 0;
    }

    int32_t i_1 = 0;

    if (*(edi + 0x2c) > 0)
    {
        int32_t* ebp_1 = edi + 0x3c;

        do
        {
            sub_523900(ebp_1);
            i_1 += 1;
            ebp_1 = &ebp_1[0xb];
        } while (i_1 < *(edi + 0x2c));
    }

    if (*(edi + 0x24))
        return Resource_Flush(edi);

    int32_t i_2 = 0;

    if (*(edi + 0x2c) > 0)
    {
        int32_t* esi_3 = edi + 0x60;

        do
        {
            sub_4b0d10(*esi_3);
            *esi_3 = 0;
            i_2 += 1;
            esi_3 = &esi_3[0xb];
        } while (i_2 < *(edi + 0x2c));
    }

    return sub_4b0d10(edi);
}
