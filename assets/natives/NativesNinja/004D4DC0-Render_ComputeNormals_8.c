#include "004D4DC0-Render_ComputeNormals_8.h"
/* 0x004d4dc0 Render_ComputeNormals_8 full linked: callers=3 callees=0 */
int32_t sub_4d4dc0(int32_t a1, int32_t a2, int32_t* a3, void* a4, float a5, float a6)

{
    void* ebx = a4;
    int32_t edi = 0;

    if (ebx)
    {
        int32_t var_8_1 = 1;
        long double x87_r7_1 = a6;
        long double temp0_1 = a5;
        x87_r7_1 - temp0_1;
        int32_t* eax_2 = *(*(ebx + 0xc) + 0x10);
        int32_t ebp_1 = *eax_2;
        int32_t var_4_1 = ebp_1;

        if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
            var_8_1 = 0;

        long double x87_r7_2 = a5;
        long double temp1_1 = a6;
        x87_r7_2 - temp1_1;
        float var_c_1;

        var_c_1 = !(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? a6 : a5;

        long double x87_r7_3 = a5;
        long double temp2_1 = a6;
        x87_r7_3 - temp2_1;

        if (*(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            a5 = a6;

        if (ebp_1 > 0)
        {
            int32_t esi = a2;
            float* edx_3 = eax_2[1] + 8;
            int32_t* ecx_4 = a1 + esi * 0x1c + 8;

            do
            {
                long double x87_r7_4 = *edx_3;
                long double temp3_1 = a5;
                x87_r7_4 - temp3_1;

                if (!(*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    break;

                long double x87_r7_5 = var_c_1;
                long double temp4_1 = a5;
                x87_r7_5 - temp4_1;
                long double x87_r7_6;
                long double temp6_1;

                if (*(&((x87_r7_5 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    x87_r7_6 = *edx_3;
                    temp6_1 = var_c_1;
                    x87_r7_6 - temp6_1;
                }

                if (*(&((x87_r7_5 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40 && *(&(
                    (x87_r7_6 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                label_4d4ebb:
                    esi += 1;
                    ecx_4[-2] = *a3;
                    ecx_4[-1] = edx_3[-2];
                    *ecx_4 = *(ebx + 4);
                    ecx_4[1] = *edx_3;
                    int32_t* ebx_1 = &ecx_4[2];
                    ecx_4 = &ecx_4[7];
                    *ebx_1 = edx_3[1];
                    ebx_1[1] = edx_3[2];
                    ebp_1 = var_4_1;
                    ebx_1[2] = edx_3[3];
                    ebx = a4;
                }
                else
                {
                    long double x87_r7_7 = *edx_3;
                    long double temp5_1 = var_c_1;
                    x87_r7_7 - temp5_1;
                    int16_t eax_7 = (x87_r7_7 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp5_1 ? 1 : 0) << 0xe;

                    if (!var_8_1)
                    {
                        if (!(*(&eax_7 + 1) & 0x41))
                            goto label_4d4ebb;
                    }
                    else if (!(*(&eax_7 + 1) & 1))
                    {
                        long double x87_r7_8 = *edx_3;
                        long double temp7_1 = a5;
                        x87_r7_8 - temp7_1;

                        if (*(&((x87_r7_8 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_8, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_8 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1)
                            goto label_4d4ebb;
                    }
                }

                edi += 1;
                edx_3 = &edx_3[6];
            } while (edi < ebp_1);

            return esi;
        }
    }

    return a2;
}
