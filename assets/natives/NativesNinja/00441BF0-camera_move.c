#include "00441BF0-camera_move.h"
/* 0x00441bf0 camera_move full linked: callers=1 callees=6 */
struct status_msg* sub_441bf0(long double a1 @ st0, float a2)

{
    void* ebp = a2;
    void* ebx = *(ebp + 0x25d0);
    int32_t var_34 = *(ebp + 0xf4);
    void* esi = nullptr;
    *(ebx + 0x169) = 0;
    *(ebx + 0x164) = 0;
    int32_t* i_2 = *(ebp + 0x1ac);

    for (int32_t* i = *i_2; i; i = *i)
    {
        if (*(i_2 + 0x29))
        {
            esi = *i_2[2];
            *(ebx + 0x164) = 1;
            break;
        }

        i_2 = i;
    }

    int32_t* i_3 = *(ebp + 0x1a0);

    for (int32_t* i_1 = *i_3; i_1; i_1 = *i_1)
    {
        if (*(i_3 + 0x29))
        {
            esi = *i_3[2];
            *(ebx + 0x164) = 0;
            break;
        }

        i_3 = i_1;
    }

    int16_t top;

    if (!esi)
    {
        *(ebx + 0x16c) = 0;

        if (*(ebp + 0x25b8))
        {
            *(ebp + 0x25b8) = 0;
            *(ebp + 0x25bc) = 0x3c;
        }

        int32_t eax_10 = *(ebp + 0x25bc);

        if (eax_10)
            *(ebp + 0x25bc) = eax_10 - 1;

        if (!*(ebp + 0x25bc))
        {
            if (!*(ebp + 0x100))
            {
                a2 = *(ebx + 0x14a);
                *(ebp + 0x100) = 1;
                *(ebp + 0xf8) = a2 * 0.0174532924f;
                top = 0;
            }

            int32_t eax_11 = *(ebp + 0xfc);

            if (eax_11)
                *(ebp + 0xfc) = eax_11 - 1;
            else
            {
                long double x87_r7_9 = *(ebp + 0xf4);
                long double temp1_1 = *(ebp + 0xf8);
                x87_r7_9 - temp1_1;

                if (!(*(&((x87_r7_9 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_14 = *(ebp + 0xf4);
                    long double temp3_1 = *(ebp + 0xf8);
                    x87_r7_14 - temp3_1;

                    if (!(*(&((x87_r7_14 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_14, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_14 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double x87_r7_18 =
                            *(ebp + 0xf4) - *(ebx + 0x14c) * 0.0174532924f * 0.0333333351f;
                        *(ebp + 0xf4) = x87_r7_18;
                        long double temp7_1 = *(ebp + 0xf8);
                        x87_r7_18 - temp7_1;

                        if (*(&((x87_r7_18 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_18, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_18 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1)
                            *(ebp + 0xf4) = *(ebp + 0xf8);
                    }
                }
                else
                {
                    long double x87_r7_13 =
                        *(ebx + 0x14c) * 0.0174532924f * 0.0333333351f + *(ebp + 0xf4);
                    *(ebp + 0xf4) = x87_r7_13;
                    long double temp4_1 = *(ebp + 0xf8);
                    x87_r7_13 - temp4_1;

                    if (!(*(&((x87_r7_13 < temp4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_13, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_13 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        *(ebp + 0xf4) = *(ebp + 0xf8);
                }

                long double x87_r7_19 = *(ebp + 0xf4);
                long double temp6_1 = *(ebp + 0xf8);
                x87_r7_19 - temp6_1;
                top = 0;

                if (*(&((x87_r7_19 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_19, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    int32_t ecx_3 = *(ebp + 0x100);
                    *(ebp + 0xfc) = *(ebx + 0x150) * 30f;

                    if (ecx_3 != 0xffffffff)
                    {
                        float edx_4 = -(*(ebx + 0x148));
                        *(ebp + 0x100) = 0xffffffff;
                        *(ebp + 0xf8) = edx_4 * 0.0174532924f;
                        top = 0;
                    }
                    else
                    {
                        float ecx_4 = *(ebx + 0x14a);
                        *(ebp + 0x100) = 1;
                        *(ebp + 0xf8) = ecx_4 * 0.0174532924f;
                        top = 0;
                    }
                }
            }
        }
    }
    else
    {
        if (*(ebp + 0x25b8) != esi)
        {
            *(ebp + 0x25b8) = esi;

            if (!*(ebx + 0x164))
                *(ebx + 0x16c) = 0x5a;
            else
                *(ebx + 0x16c) = 0;
        }

        int32_t eax_3 = *(ebx + 0x16c);

        if (eax_3)
            *(ebx + 0x16c) = eax_3 - 1;

        if (!*(ebx + 0x16c))
            *(ebx + 0x169) = 1;

        double var_30;
        sub_442020(&var_30, esi);
        long double x87_r7_2 = var_30 - *(ebp + 0x20);
        double var_28;
        long double x87_r6_2 = var_28 - *(ebp + 0x28);
        double var_20;
        long double x87_r5_2 = var_20 - *(ebp + 0x30);
        double var_18 =
            *(ebp + 0x88) * x87_r5_2 + *(ebp + 0x7c) * x87_r6_2 + *(ebp + 0x70) * x87_r7_2;
        double var_10_1 =
            *(ebp + 0x8c) * x87_r5_2 + *(ebp + 0x80) * x87_r6_2 + *(ebp + 0x74) * x87_r7_2;
        double var_8_1 =
            *(ebp + 0x90) * x87_r5_2 + *(ebp + 0x84) * x87_r6_2 + *(ebp + 0x78) * x87_r7_2;
        void var_64;
        memcpy(&var_64, &var_18, 0x18);
        WeaponType_GetConfig();
        long double temp2_1 = 0f;
        a1 - temp2_1;
        long double x87_r7_4 = a1;

        if (*(&((a1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp2_1) ? 1 : 0) << 0xa
                | (a1 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_4 = -(x87_r7_4);

        long double temp5_1 = 0.0872664675f;
        x87_r7_4 - temp5_1;

        if (*(&((x87_r7_4 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            top = 1;
        else
        {
            long double temp8_1 = -0.0130899698f;
            a1 - temp8_1;

            if (!(*(&((a1 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp8_1) ? 1 : 0) << 0xa
                | (a1 == temp8_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double temp9_1 = 0.0130899698f;
                a1 - temp9_1;

                if (!(*(&((a1 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp9_1) ? 1 : 0) << 0xa
                        | (a1 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    a1 = 0.0130899698f;
            }
            else
                a1 = -0.0130899698f;

            long double x87_r0_2 = a1 + *(ebp + 0xf4);
            a2 = x87_r0_2;
            *(ebp + 0xf4) = x87_r0_2;
            long double x87_r0_4 = -(*(ebx + 0x148)) * 0.0174532924f;
            long double x87_r7_5 = a2;
            x87_r7_5 - x87_r0_4;

            if (!(*(&((x87_r7_5 < x87_r0_4 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, x87_r0_4) ? 1 : 0) << 0xa
                | (x87_r7_5 == x87_r0_4 ? 1 : 0) << 0xe) + 1) & 1))
            {
                a1 = *(ebx + 0x14a) * 0.0174532924f;
                long double x87_r7_6 = a2;
                x87_r7_6 - a1;

                if (*(&((x87_r7_6 < a1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, a1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == a1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    top = 1;
                else
                {
                    *(ebp + 0xf4) = a1;
                    top = 1;
                }
            }
            else
            {
                *(ebp + 0xf4) = x87_r0_4;
                top = 1;
            }
        }
    }

🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
⋯    long double temp0 = *(ebp + 0xf4);
    /* unimplemented  {fcomp st0, dword [ebp+0xf4]} f- temp0 */ - temp0;
    bool c0_12 = /* bool c0_12 = unimplemented  {fcomp st0, dword [ebp+0xf4]} f< temp0 */ < temp0;
    bool c2_12 = FCMP_UO(/* bool c2_12 =
        is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0xf4]}, temp0) */, temp0);
    bool c3_12 = /* bool c3_12 = unimplemented  {fcomp st0, dword [ebp+0xf4]} f== temp0 */ == temp0;
    /* unimplemented  {fcomp st0, dword [ebp+0xf4]} */
    struct status_msg* result = *(ebp + 0x25c0);

    if (*(
        &((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe | (top & 7) << 0xb)
        + 1) & 0x40)
    {
        if (result)
        {
            result = sub_4e6c00(result);
            *(ebp + 0x25c0) = 0;
        }
    }
    else if (!result)
    {
        result = sub_4e6b00(ebp, "camera_move");
        *(ebp + 0x25c0) = result;

        if (result)
            return sub_4e6c30(result, ebp + 0x20);
    }

    return result;
}
