#include "004D4B60-Render_SkinBones_8.h"
/* 0x004d4b60 Render_SkinBones_8 full linked: callers=0 callees=5 */
float sub_4d4b60(int32_t a1, float a2, float a3, float a4) __location("eax")

{
    float esi = a4;
    void* eax = *(esi + 0x30);

    if (eax)
        *(eax + 4) = *(esi + 0x2c);

    int32_t* edi = a3;
    *(esi + 8) &= 0xfffffeff;
    edi[1] &= 0xfffffeff;
    float edx_2 = *(esi + 0x2c);
    a3 = *(esi + 0x28) + *(esi + 0x2c);
    *(esi + 0x2c) = a3;
    float eax_1;

    if (a1)
        eax_1 = *(*(esi + 0xc) + 0x10);

    int32_t ecx_5;
    float result;

    if (!a1 || !eax_1 || *eax_1 <= 0)
    {
        result = a2;
        ecx_5 = 0;
    }
    else
    {
        long double x87_r7_2;
        long double temp2_1;

        if (*(&*(esi + 8) + 1) & 0x80)
        {
            x87_r7_2 = edx_2;
            temp2_1 = a3;
            x87_r7_2 - temp2_1;
        }

        float eax_4;

        if (!(*(&*(esi + 8) + 1) & 0x80) || *(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            eax_4 = a2;
        else
            eax_4 = sub_4d4dc0(a1, a2, edi, esi, edx_2, edx_2);

        ecx_5 = 1;
        result = sub_4d4dc0(a1, eax_4, edi, esi, edx_2, *(esi + 0x2c));
    }

    long double x87_r7_3 = *(esi + 0x2c);
    long double temp0 = **(esi + 0xc);
    x87_r7_3 - temp0;
    int32_t eax_6;

    if (!(*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
        eax_6 = *(esi + 8);

    if (!(*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 1) && !(eax_6 & 2))
    {
    label_4d4c4a:
        *(&eax_6 + 1) |= 1;
        *(esi + 8) = eax_6;
        int32_t eax_7 = edi[1];
        *(&eax_7 + 1) |= 1;
        edi[1] = eax_7;
        char eax_8 = *(esi + 8);

        if (!(eax_8 & 1))
        {
            if (eax_8 & 2)
            {
                int32_t eax_23 = *(esi + 8);
                *(esi + 0x2c) = 0;
                *(&eax_23 + 1) &= 0x7f;
                *(esi + 8) = eax_23;
                return result;
            }

            *(esi + 0x2c) = **(esi + 0xc);
        }
        else
        {
            float* eax_9 = *(esi + 0xc);

            if (!(eax_8 & 2))
            {
                a4 = -1f;
                *(esi + 0x2c) = *(esi + 0x2c) - *eax_9;
            }
            else
            {
                *(esi + 0x2c) = *eax_9 + *(esi + 0x2c);
                a4 = *eax_9 + 1f;
            }

            if (ecx_5)
                result = sub_4d4dc0(a1, result, edi, esi, a4, *(esi + 0x2c));

            if (!*edi)
            {
                int16_t ecx_8 = *(esi + 8);

                if (!(*(&ecx_8 + 1) & 0x80))
                {
                    int32_t* eax_11 = *(esi + 0xc);
                    float edx_6 = *(esi + 0x2c);
                    int32_t* edi_1 = eax_11[2];

                    if (!(ecx_8 & 2))
                    {
                        *(esi + 0x2c) = *eax_11;
                        sub_4d4840(nullptr, nullptr, esi);
                        *(esi + 0x10) = *edi_1[1] - *(esi + 0x1c);
                        *(esi + 0x14) = *(edi_1[1] + 4) - *(esi + 0x20);
                        long double x87_r7_22 = *(edi_1[1] + 8) - *(esi + 0x24);
                        int32_t eax_21 = *(esi + 8);
                        *(esi + 0x2c) = edx_6;
                        *(&eax_21 + 1) &= 0x7f;
                        *(esi + 8) = eax_21;
                        *(esi + 0x18) = x87_r7_22;
                        return result;
                    }

                    *(esi + 0x2c) = 0;
                    sub_4d4840(nullptr, nullptr, esi);
                    *(esi + 0x10) = *(edi_1[1] + *edi_1 * 0x28 - 0x28) - *(esi + 0x1c);
                    *(esi + 0x14) = *(edi_1[1] + *edi_1 * 0x28 - 0x24) - *(esi + 0x20);
                    int32_t eax_17 = *(esi + 8);
                    *(&eax_17 + 1) &= 0x7f;
                    long double x87_r7_16 = *(edi_1[1] + *edi_1 * 0x28 - 0x20) - *(esi + 0x24);
                    *(esi + 8) = eax_17;
                    *(esi + 0x2c) = edx_6;
                    *(esi + 0x18) = x87_r7_16;
                    return result;
                }
            }
        }
    }
    else
    {
        long double x87_r7_4 = *(esi + 0x2c);
        long double temp1_1 = 0f;
        x87_r7_4 - temp1_1;

        if (*(&((x87_r7_4 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            eax_6 = *(esi + 8);

            if (eax_6 & 2)
                goto label_4d4c4a;
        }
    }

    int32_t eax_26 = *(esi + 8);
    *(&eax_26 + 1) &= 0x7f;
    *(esi + 8) = eax_26;
    return result;
}
