#include "00499CF0-Display_ClearSurfaces_17.h"
/* 0x00499cf0 Display_ClearSurfaces_17 full linked: callers=1 callees=6 */
int32_t sub_499cf0(float a1)

{
    float ecx;
    float var_4 = ecx;
    float edi = a1;
    a1 = 2048f;
    int32_t result = *(edi + 0x5650);
    float* esi = edi + 0x57c;

    if (result)
        a1 = 204.800003f;

    result = *(edi + 0x56ac);
    long double x87_r7 = *(edi + 0x56a8);
    *(edi + 0x5648) += 3;
    long double x87_r7_1;

    if (!result)
    {
        x87_r7_1 = x87_r7 - 0.0166666675f;
        long double temp0_1 = 0f;
        x87_r7_1 - temp0_1;
        result = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
            x87_r7_1 = 0f;
    }
    else
    {
        x87_r7_1 = x87_r7 + 0.0166666675f;
        long double temp1_1 = 1f;
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            x87_r7_1 = 1f;
    }

    *(edi + 0x56a8) = x87_r7_1;
    long double x87_r7_4 = *(edi + 0x56a8);
    long double temp2 = 0f;
    x87_r7_4 - temp2;
    result = (x87_r7_4 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = *(edi + 0xe3c);
        int32_t ebp_1 = 0;

        if (result > 0)
        {
            do
            {
                long double x87_r7_6 = esi[2] - a1;
                var_4 = x87_r7_6;
                esi[2] = x87_r7_6;
                long double x87_r7_7 = var_4;
                long double temp4_1 = 0f;
                x87_r7_7 - temp4_1;

                if (*(&((x87_r7_7 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1)
                    esi[2] = var_4 + 24576f;

                if (*(edi + 0x5650))
                {
                    int32_t eax_2 = esi[3];
                    esi[3] = eax_2 - 1;

                    if (eax_2 < 0)
                    {
                        uint32_t eax_3 = sub_4b47c0(0xc311d0, 0x1e);
                        esi[3] += eax_3 + 0x1e;
                        esi[4] = (sub_4b4770(0xc311d0) - 0.5f) * 136.53334f;
                        esi[5] = (sub_4b4770(0xc311d0) - 0.5f) * 136.53334f;
                    }

                    long double x87_r7_17 = esi[4] + *esi;
                    *esi = x87_r7_17;
                    esi[1] = esi[5] + esi[1];
                    long double temp6_1 = 0f;
                    x87_r7_17 - temp6_1;
                    long double x87_r7_18 = *esi;

                    if (!(*(&((x87_r7_17 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double temp7_1 = 10895.3604f;
                        x87_r7_18 - temp7_1;

                        if (!(*(&((x87_r7_18 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_18, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_18 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            *esi = *esi - 10895.3604f;
                            esi[6] ^= 1;
                        }
                    }
                    else
                    {
                        *esi = x87_r7_18 + 10895.3604f;
                        esi[6] ^= 1;
                    }

                    long double x87_r7_21 = esi[1];
                    long double temp8_1 = 0f;
                    x87_r7_21 - temp8_1;
                    long double x87_r7_22 = esi[1];

                    if (!(*(&((x87_r7_21 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_21, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_21 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double temp9_1 = 10895.3604f;
                        x87_r7_22 - temp9_1;

                        if (!(*(&((x87_r7_22 < temp9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_22, temp9_1) ? 1 : 0) << 0xa
                            | (x87_r7_22 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            esi[1] = esi[1] - 10895.3604f;
                            esi[6] ^= 2;
                        }
                    }
                    else
                    {
                        esi[1] = x87_r7_22 + 10895.3604f;
                        esi[6] ^= 2;
                    }
                }

                result = *(edi + 0xe3c);
                esi = &esi[7];
                ebp_1 += 1;
            } while (ebp_1 < result);
        }

        long double x87_r7_26 = a1 + *(edi + 0x564c);
        *(edi + 0x564c) = x87_r7_26;
        long double temp3_1 = 307.200012f;
        x87_r7_26 - temp3_1;
        result = (x87_r7_26 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_26 == temp3_1 ? 1 : 0) << 0xe;

        while (!(*(&result + 1) & 0x41))
        {
            result = *(edi + 0xe3c);

            if (result == 0x50)
                break;

            var_4 = sub_4b4770(0xc311d0) * 10895.3604f;
            long double x87_r7_30 = sub_4b4770(0xc311d0) * 10895.3604f;
            *(edi + result * 0x1c + 0x57c) = var_4;
            *(edi + result * 0x1c + 0x588) = 0;
            *(edi + result * 0x1c + 0x580) = x87_r7_30;
            *(edi + result * 0x1c + 0x584) = 24576f - a1;
            *(edi + result * 0x1c + 0x594) = sub_4b47c0(0xc311d0, 4);
            long double x87_r7_34 = *(edi + 0x564c) - 307.200012f;
            result = *(edi + 0xe3c) + 1;
            *(edi + 0xe3c) = result;
            *(edi + 0x564c) = x87_r7_34;
            long double temp5_1 = 307.200012f;
            x87_r7_34 - temp5_1;
            result = (x87_r7_34 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_34, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_34 == temp5_1 ? 1 : 0) << 0xe;
        }
    }

    return result;
}
