#include "004A5500-Camera_ApplyLineFilter_5.h"
/* 0x004a5500 Camera_ApplyLineFilter_5 full linked: callers=15 callees=0 */
char* sub_4a5500(char* a1, char* a2, int32_t a3)

{
    int32_t ecx = a3;

    if (!ecx)
        return a1;

    int32_t ebx_1 = ecx;
    char* esi_1 = a2;
    char* edi_1 = a1;
    char eax_1;
    uint32_t i_2;
    uint32_t i_3;

    if (esi_1 & 3)
    {
        do
        {
            eax_1 = *esi_1;
            esi_1 = &esi_1[1];
            *edi_1 = eax_1;
            edi_1 = &edi_1[1];
            int32_t temp0_1 = ecx;
            ecx -= 1;

            if (temp0_1 == 1)
                return a1;

            if (!eax_1)
            {
                while (edi_1 & 3)
                {
                    *edi_1 = eax_1;
                    edi_1 = &edi_1[1];
                    int32_t temp2_1 = ecx;
                    ecx -= 1;

                    if (temp2_1 == 1)
                        return a1;
                }

                ebx_1 = ecx;
                i_3 = ecx >> 2;

                if (!i_3)
                    goto label_4a557b;

            label_4a55e7:
                eax_1 = 0;
                uint32_t i;

                do
                {
                    *edi_1 = 0;
                    edi_1 = &edi_1[4];
                    i = i_3;
                    i_3 -= 1;
                } while (i != 1);
            label_4a55f1:
                ebx_1 &= 3;

                if (ebx_1)
                    goto label_4a557b;

                return a1;
            }
        } while (esi_1 & 3);

        ebx_1 = ecx;
        i_2 = ecx >> 2;

        if (i_2)
            goto label_4a558f;

    label_4a5540:
        ebx_1 &= 3;

        if (ebx_1)
            goto label_4a5545;
    }
    else
    {
        i_2 = ecx >> 2;

        if (i_2)
        {
        label_4a558f:
            uint32_t i_1;

            do
            {
                int32_t eax_4 = *esi_1;
                int32_t edx_2 = *esi_1;
                esi_1 = &esi_1[4];

                if ((eax_4 ^ 0xffffffff ^ (0x7efefeff + eax_4)) & 0x81010100)
                {
                    if (!edx_2)
                    {
                        *edi_1 = 0;
                    label_4a55df:
                        edi_1 = &edi_1[4];
                        eax_1 = 0;
                        i_3 = i_2 - 1;

                        if (i_2 == 1)
                            goto label_4a55f1;

                        goto label_4a55e7;
                    }

                    if (!*(&edx_2 + 1))
                    {
                        *edi_1 = edx_2 & 0xff;
                        goto label_4a55df;
                    }

                    if (!(edx_2 & 0xff0000))
                    {
                        *edi_1 = edx_2 & 0xffff;
                        goto label_4a55df;
                    }

                    if (!(edx_2 & 0xff000000))
                    {
                        *edi_1 = edx_2;
                        goto label_4a55df;
                    }
                }

                *edi_1 = edx_2;
                edi_1 = &edi_1[4];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);
            goto label_4a5540;
        }

    label_4a5545:

        while (true)
        {
            eax_1 = *esi_1;
            esi_1 = &esi_1[1];
            *edi_1 = eax_1;
            edi_1 = &edi_1[1];

            if (!eax_1)
            {
                while (true)
                {
                    int32_t temp3_1 = ebx_1;
                    ebx_1 -= 1;

                    if (temp3_1 == 1)
                        return a1;

                label_4a557b:
                    *edi_1 = eax_1;
                    edi_1 = &edi_1[1];
                }
            }
            else
            {
                int32_t temp4_1 = ebx_1;
                ebx_1 -= 1;

                if (temp4_1 == 1)
                    break;
            }
        }
    }
    return a1;
}
