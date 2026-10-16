#include "004EAEB0-SoundSys_EvaluateTrigger_14.h"
/* 0x004eaeb0 SoundSys_EvaluateTrigger_14 full linked: callers=2 callees=13 */
int32_t sub_4eaeb0(void* a1)

{
    double* var_2c = nullptr;
    float* var_28 = nullptr;
    void* esi = *(a1 + 0x14);
    int32_t var_24 = 0;
    uint32_t eax_1 = sub_4e6610();
    int32_t edx = 0;
    edx = *(esi + 0x1c);
    int32_t eax_2 = *(((eax_1 * 0x180 + edx) << 2) + &g_a96ae0);

    if (eax_2)
        eax_2(esi, &var_2c);

    sub_4974a0(a1 + 0x30);
    memcpy(a1 + 0x88, a1 + 0xa0, 0x18);

    if (var_28)
    {
        double var_20 =
            var_28[1] * *(a1 + 0x90) + var_28[2] * *(a1 + 0x98) + *var_28 * *(a1 + 0x88);
        double var_18_1 =
            var_28[4] * *(a1 + 0x90) + var_28[5] * *(a1 + 0x98) + var_28[3] * *(a1 + 0x88);
        double var_10_1 =
            var_28[7] * *(a1 + 0x90) + var_28[8] * *(a1 + 0x98) + var_28[6] * *(a1 + 0x88);
        memcpy(a1 + 0x88, &var_20, 0x18);
    }

    double* eax_5 = var_2c;

    if (eax_5)
    {
        *(a1 + 0x88) = *eax_5 + *(a1 + 0x88);
        *(a1 + 0x90) = eax_5[1] + *(a1 + 0x90);
        *(a1 + 0x98) = eax_5[2] + *(a1 + 0x98);
    }

    int32_t ecx_3 = var_24;

    if (ecx_3)
    {
        int32_t eax_6 = *(a1 + 0xd8);

        if (eax_6 != 0xffffffff)
        {
            long double x87_r7_19 = *(ecx_3 + (eax_6 << 2) + 4);
            long double temp2_1 = 0f;
            x87_r7_19 - temp2_1;

            if (*(&((x87_r7_19 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_19, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
                *(a1 + 0x30) = 0;
            else
            {
                sub_4e7030(a1 + 0x30, a1 + 0xe8, x87_r7_19);
                ecx_3 = var_24;
            }
        }

        int32_t eax_10 = *(a1 + 0xdc);

        if (eax_10 != 0xffffffff)
        {
            sub_4e7030(a1 + 0x34, a1 + 0x114, *(ecx_3 + (eax_10 << 2) + 4));
            ecx_3 = var_24;
        }

        int32_t eax_12 = *(a1 + 0xe0);

        if (eax_12 != 0xffffffff)
            *(a1 + 0x34) = *(ecx_3 + (eax_12 << 2) + 4) + *(a1 + 0x34);

        eax_5 = *(a1 + 0xe4);

        if (eax_5 != 0xffffffff)
        {
            char* ecx_5 = *(ecx_3 + (eax_5 << 2) + 4);

            if (ecx_5)
            {
                char* edi_2 = a1 + 0x160;
                char* esi_2 = ecx_5;

                while (true)
                {
                    char edx_4 = *esi_2;
                    eax_5 = edx_4;
                    char temp5_1 = *edi_2;
                    bool c_1 = edx_4 < temp5_1;

                    if (edx_4 == temp5_1)
                    {
                        if (!eax_5)
                        {
                            eax_5 = nullptr;
                            break;
                        }

                        edx_4 = esi_2[1];
                        eax_5 = edx_4;
                        char temp8_1 = edi_2[1];
                        c_1 = edx_4 < temp8_1;

                        if (edx_4 == temp8_1)
                        {
                            esi_2 = &esi_2[2];
                            edi_2 = &edi_2[2];

                            if (eax_5)
                                continue;

                            eax_5 = nullptr;
                            break;
                        }
                    }

                    eax_5 = eax_5 - eax_5 + 1;
                    break;
                }

                if (eax_5)
                {
                    char* edi_3 = ecx_5;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool cond:1_1 = 0 != *edi_3;
                        edi_3 = &edi_3[1];
                        i -= 1;

                        if (!cond:1_1)
                            break;
                    }

                    int32_t ecx_6 = ~i;
                    int32_t esi_4;
                    int32_t edi_6;
                    edi_6 = memcpy(a1 + 0x160, edi_3 - ecx_6, ecx_6 & 0xfffffffc);
                    memcpy(edi_6, esi_4, ecx_6 & 3);
                    *(a1 + 0x180) = sub_497450(a1 + 0x160);
                    *(a1 + 0x184) = sub_497410(a1 + 0x160);
                    *(a1 + 0x28) = 0;
                }
            }
        }
    }

    long double x87_r7_22 = *(a1 + 0xb8);
    long double temp0 = 0f;
    x87_r7_22 - temp0;

    if (!(*(&((x87_r7_22 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, temp0) ? 1 : 0) << 0xa
        | (x87_r7_22 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_23 = *(a1 + 0xb8);
        long double temp1_1 = 1f;
        x87_r7_23 - temp1_1;

        if (!(*(&((x87_r7_23 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0xb8) = 0x3f800000;
    }
    else
        *(a1 + 0xb8) = 0;

    long double x87_r7_24 = *(a1 + 0xbc);
    long double temp3 = 0f;
    x87_r7_24 - temp3;

    if (!(*(&((x87_r7_24 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, temp3) ? 1 : 0) << 0xa
        | (x87_r7_24 == temp3 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_25 = *(a1 + 0xbc);
        long double temp4_1 = 1f;
        x87_r7_25 - temp4_1;

        if (!(*(&((x87_r7_25 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_25, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_25 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0xbc) = 0x3f800000;
    }
    else
        *(a1 + 0xbc) = 0;

    long double x87_r7_27 = *(a1 + 0xbc) * *(a1 + 0xb8);
    __builtin_memset(a1 + 0x68, 0, 0x18);
    *(a1 + 0x30) = x87_r7_27 * *(a1 + 0x30);
    long double x87_r7_30 = *(a1 + 0xc0) * *(a1 + 0x34);
    memcpy(a1 + 0x50, a1 + 0x88, 0x18);
    *(a1 + 0x34) = x87_r7_30;
    *(a1 + 0x40) = *(a1 + 0xc8);
    *(a1 + 0x48) = *(a1 + 0xcc);
    int32_t result;
    long double st0;
    st0 = sub_4e6ff0(a1 + 0x30);
    *(a1 + 0xd0) = st0;
    return result;
}
