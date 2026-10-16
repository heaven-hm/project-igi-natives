#include "00491420-Display_OpenDevice_3.h"
/* 0x00491420 Display_OpenDevice_3 full linked: callers=2 callees=3 */
char* sub_491420(char* a1, int32_t* a2)

{
    int32_t* edi = a2;
    int32_t* ebp = nullptr;
    a2 = nullptr;
    char ecx = edi[0x1e];
    char* esi = edi[0xd];
    char* ebx = esi;
    char* var_18 = esi;
    long double x87_r7;

    if (!ecx)
        x87_r7 = edi[1];
    else
    {
        int32_t eax_3;
        char* edx;
        edx = HIGHD(*(*(a1 + 0x154) + 4));
        eax_3 = LOWD(*(*(a1 + 0x154) + 4));
        x87_r7 = (eax_3 - edx) >> 1;
    }

    float var_10 = edi[2];
    char* eax_6;
    long double x87_r7_2;

    if (!ecx)
    {
        eax_6 = edi[1];
        x87_r7_2 = *(*(a1 + 0x154) + 4) - eax_6;
    }
    else
    {
        eax_6 = a1;
        x87_r7_2 = *(*(eax_6 + 0x154) + 4);
    }

    char edx_2 = *esi;

    if (edx_2)
    {
        eax_6 = &esi[1];
        int32_t* ebp_1 = &edi[0xe];
        char* var_14_1 = eax_6;

        while (a2 < 7)
        {
            if (edx_2 != 0xd)
            {
                if (edx_2 == 0x20)
                {
                    *esi = 0;
                    long double x87_r7_3 = sub_4b7050(*(a1 + (*edi << 2) + 0x1b8), ebx);
                    long double temp1_1 = x87_r7_2;
                    x87_r7_3 - temp1_1;

                    if (*(&((x87_r7_3 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        var_18 = esi;
                    else
                    {
                        *ebp_1 = ebx;
                        ebp_1 = &ebp_1[1];
                        a2 += 1;
                        *var_18 = 0;
                        ebx = &var_18[1];
                        var_18 = ebx;
                    }

                    eax_6 = var_14_1;
                    *esi = 0x20;
                }

                if (*esi == 0xa)
                {
                    *ebp_1 = ebx;
                    ebp_1 = &ebp_1[1];
                    a2 += 1;
                    *esi = 0;
                    ebx = eax_6;
                    var_18 = eax_6;
                }
            }

            edx_2 = esi[1];
            esi = &esi[1];
            eax_6 = &eax_6[1];
            var_14_1 = eax_6;

            if (!edx_2)
                break;
        }

        ebp = a2;
    }

    edi[ebp + 0xe] = ebx;
    int32_t* i_1 = ebp + 1;
    a2 = i_1;

    if (i_1 <= 0)
    {
        edi[9] = i_1;
        return eax_6;
    }

    int32_t*** esi_1 = &edi[0x16];
    int32_t eax_16;
    int32_t* i;

    do
    {
        int32_t** eax_13 = sub_4b6ec0(*(a1 + (*edi << 2) + 0x1b8), x87_r7, var_10, esi_1[-8]);
        *esi_1 = eax_13;

        if (edi[0x1e])
        {
            int32_t ecx_8 = eax_13[9];
            ecx_8 |= 0x80;
            eax_13[9] = ecx_8;
        }

        int32_t** eax_14 = *esi_1;
        eax_14[9] |= 8;
        (*esi_1)[5] = edi[0xa] * 128f;
        (*esi_1)[6] = edi[0xb] * 128f;
        (*esi_1)[7] = edi[0xc] * 128f;
        eax_16 = sub_4b7e00(*esi_1);
        esi_1 = &esi_1[1];
        i = i_1;
        i_1 -= 1;
        var_10 = eax_16 + var_10;
    } while (i != 1);
    edi[9] = a2;
    return eax_16;
}
