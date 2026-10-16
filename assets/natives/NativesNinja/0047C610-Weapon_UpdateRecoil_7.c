#include "0047C610-Weapon_UpdateRecoil_7.h"
/* 0x0047c610 Weapon_UpdateRecoil_7 full linked: callers=1 callees=0 */
int32_t* sub_47c610(float* a1, int32_t* a2, int32_t a3 @ 0x14, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t* a9)

{
    int32_t* result = a2;
    double* edx = a1[&result[0x90]];
    void* esi = a1[0x245];

    if (*(esi + 0x9c) != 0xa)
    {
        *(edx + 0x44) = *edx - *(a1 + 0x518);
        edx[9] = edx[1] - *(a1 + 0x520);
        *(edx + 0x4c) = edx[2] - *(a1 + 0x528);
        edx[0xa] = edx[3] - *(a1 + 0x518);
        *(edx + 0x54) = edx[4] - *(a1 + 0x520);
        long double x87_r7_12 = edx[5] - *(a1 + 0x528);
        edx[0xb] = x87_r7_12;
        float var_10_1 = x87_r7_12 - *(edx + 0x4c);
        long double x87_r7_14 = 0f;
        float var_c_1 = x87_r7_14 - (*(edx + 0x54) - edx[9]);
        float var_18_2 = var_c_1;
        float var_8_1 = -((x87_r7_14 - (edx[0xa] - *(edx + 0x44))));
        long double x87_r7_17 = var_c_1;
        long double temp0_1 = 0f;
        x87_r7_17 - temp0_1;
        float var_14_2 = var_8_1;
        result = nullptr;
        float var_10_2 = 0f;
        result = (x87_r7_17 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_17 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
        label_47c732:
            long double x87_r7_22 = 0f;
            long double x87_r6_7 = var_8_1;
            long double x87_r5_1 = var_c_1;
            long double x87_r7_24 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_7 * x87_r6_7 + x87_r7_22 * x87_r7_22);
            var_18_2 = var_c_1 * x87_r7_24;
            var_14_2 = var_14_2 * x87_r7_24;
            var_10_2 = 0f * x87_r7_24;
        label_47c780:
            long double x87_r7_27 = var_18_2 * 286.720001f;
            float var_14_3 = var_14_2 * 286.720001f;
            float var_10_3 = var_10_2 * 286.720001f;
            long double x87_r7_32;

            if (!a9)
            {
                *(edx + 0x5c) = x87_r7_27 + *(edx + 0x44);
                edx[0xc] = var_14_3 + edx[9];
                x87_r7_32 = var_10_3 + *(edx + 0x4c);
            }
            else
            {
                *(edx + 0x5c) = x87_r7_27 + edx[0xa];
                edx[0xc] = var_14_3 + *(edx + 0x54);
                x87_r7_32 = var_10_3 + edx[0xb];
            }

            edx[0xd] = a3;
            *(edx + 0x6c) = a4;
            *(edx + 0x64) = x87_r7_32;
            edx[0xe] = a5;
            *(edx + 0x74) = a6;
            edx[0xf] = a7;
            *(edx + 0x7c) = a8;
            edx[0x10] = a6;
            int32_t* ebx_2 = edx + 0x9c;
            *(edx + 0x84) = a7;
            int32_t i_2 = 3;
            edx[0x11] = a8;
            int32_t i_1 = 0;
            int32_t i;

            do
            {
                ebx_2[-1] = 0;
                *ebx_2 = 0;
                ebx_2 = &ebx_2[2];
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
            edx[0x12] = 0;
            *(edx + 0x94) = 0x3f800000;
            *(edx + 0x8c) = 0;
            *(edx + 0xbc) = *(esi + 0x9c);
            edx[0x18] = 1;
            edx[0x16] = 0;
            *(edx + 0xb4) = 0x3f000000;

            if (!a9)
                edx[0x17] = 0;
            else
                edx[0x17] = 0x3f000000;

            float* edi_8 = edx + 0x44;
            a9 = &edx[0x16];
            void* edx_1 = &edx[0x13];

            do
            {
                edx_1 += 8;
                a1[i_1 + *(esi + 0x9c) * 0x14 + 0x249] = &edi_8[9];
                a1[i_1 + *(esi + 0x9c) * 0x14 + 0x246] = edi_8;
                edi_8 = &edi_8[3];
                int32_t ebx_13 = i_1 + *(esi + 0x9c) * 0xa;
                a1[ebx_13 * 2 + 0x24c] = *(edx_1 - 8);
                a1[ebx_13 * 2 + 0x24d] = *(edx_1 - 4);
                int32_t ebx_16 = i_1 + *(esi + 0x9c) * 0x14;
                i_1 += 1;
                a1[ebx_16 + 0x252] = *a9;
                a9 = &a9[1];
            } while (i_1 < 3);

            a1[*(esi + 0x9c) * 0x14 + 0x259] = 0;
            a1[(*(esi + 0x9c) + 0x1e) * 0x14] = 0;
            int32_t eax_12 = *(esi + 0x9c);
            a1[eax_12 * 0x14 + 0x255] = *(edx + 0x8c);
            a1[eax_12 * 0x14 + 0x256] = edx[0x12];
            a1[eax_12 * 0x14 + 0x257] = *(edx + 0x94);
            result = *(esi + 0x9c) + 1;
            *(esi + 0x9c) = result;
        }
        else
        {
            long double x87_r7_18 = var_8_1;
            long double temp1_1 = 0f;
            x87_r7_18 - temp1_1;
            result = (x87_r7_18 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_18, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_18 == temp1_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_47c710:
                long double x87_r7_20 = var_8_1;
                long double temp2_1 = 0f;
                x87_r7_20 - temp2_1;

                if (!(*(&((x87_r7_20 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_20, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_20 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_47c732;

                long double x87_r7_21 = 0f;
                long double temp4_1 = 0f;
                x87_r7_21 - temp4_1;

                if (*(&((x87_r7_21 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_21, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_21 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    goto label_47c780;

                goto label_47c732;
            }

            long double x87_r7_19 = 0f;
            long double temp3_1 = 0f;
            x87_r7_19 - temp3_1;
            result = (x87_r7_19 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == temp3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_47c710;
        }
    }

    return result;
}
