#include "004BDA60-Sys_ResolveSymbol_29.h"
/* 0x004bda60 Sys_ResolveSymbol_29 full linked: callers=0 callees=11 */
void* sub_4bda60(int32_t a1)

{
    int32_t* esi = a1;
    sub_4bd9c0(esi);
    float var_18;
    int32_t edi = sub_4bcec0(esi, &a1, &var_18);
    char* var_10;

    if (edi)
    {
    label_4bdab2:
        int32_t* var_14;

        if (sub_4bcd90(esi, &var_14))
        {
            int32_t* eax_3 = var_14;

            if (*eax_3)
            {
                int32_t edx_8 = esi[5];
                esi[8] = 8;
                esi[4] = edx_8;
                return sub_4bd9e0(esi);
            }

            int32_t ecx_1 = eax_3[1];

            if (ecx_1 == 1)
            {
                int32_t ecx_5;

                if (edi == ecx_1)
                {
                    int32_t ecx_2 = eax_3[3];

                    if (ecx_2 == 1)
                    {
                        *eax_3[6] = a1;
                        ecx_5 = a1;
                    }
                    else
                    {
                        int32_t* edx = eax_3[6];

                        if (ecx_2 == 2)
                        {
                            *edx = a1;
                            ecx_5 = a1;
                        }
                        else
                        {
                            *edx = a1;
                            ecx_5 = a1;
                        }
                    }

                    goto label_4bdb12;
                }

                if (edi == 2)
                {
                    *eax_3[6] = var_18;
                    ecx_5 = var_18;
                label_4bdb12:
                    sub_4bda00(esi, ecx_5);
                    int32_t eax_8 = esi[5] + 1;
                    esi[5] = eax_8;
                    return eax_8;
                }
            }
            else if (ecx_1 == 2)
            {
                if (edi == 1)
                {
                    int32_t var_24_3 = ecx_1;
                    *eax_3[6] = a1;
                    sub_4bda30(esi, a1);
                    int32_t eax_11 = esi[5] + 1;
                    esi[5] = eax_11;
                    return eax_11;
                }

                if (edi == 2)
                {
                    *eax_3[6] = var_18;
                    sub_4bda30(esi, var_18);
                    int32_t eax_14 = esi[5] + 1;
                    esi[5] = eax_14;
                    return eax_14;
                }
            }
            else if (ecx_1 == 3 && edi == ecx_1)
            {
                sub_4a5500(eax_3[6], var_10, eax_3[3] - 1);
                int32_t* eax_15 = var_14;
                *(eax_15[6] + eax_15[3] - 1) = 0;
                sub_4bce40(esi, var_14[6], 3);
                int32_t eax_18 = esi[5] + 1;
                esi[5] = eax_18;
                return eax_18;
            }
        }
    }
    else
    {
        int32_t var_c;
        int32_t eax_1 = sub_4bcc00(esi, &var_10, &var_c, 3);
        int32_t edi_2 = -(eax_1);
        edi = (edi_2 - edi_2) & 3;

        if (edi)
            goto label_4bdab2;
    }
    void* eax_21 = esi[8];

    if (eax_21)
        return eax_21;

    int32_t eax_20 = esi[5];
    esi[8] = 0xb;
    esi[4] = eax_20;
    return sub_4bd9e0(esi);
}
