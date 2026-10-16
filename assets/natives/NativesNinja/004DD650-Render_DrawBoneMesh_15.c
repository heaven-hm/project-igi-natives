#include "004DD650-Render_DrawBoneMesh_15.h"
/* 0x004dd650 Render_DrawBoneMesh_15 full linked: callers=1 callees=3 */
int32_t sub_4dd650(void* a1, float* a2, float* a3, int32_t a4)

{
    void* ebx = a1;
    void* ebp = *(*(*(*(ebx + 0x6c) + (a4 << 2)) + 0xc) + 0xc);
    int32_t i = 0;
    void* var_14 = ebp;
    int32_t i_1 = 0;

    if (*(ebp + 0x84) > 0)
    {
        int32_t var_20_1 = 0;

        do
        {
            int32_t eax_2 = *(*(ebp + 0x98) + var_20_1 + 0x10);
            float var_10;
            float var_8;

            if (sub_4dd7f0(ebx, a4, i_1, a2, a3, &var_8, &var_10))
            {
                long double x87_r7_1 = var_8;
                long double temp0_1 = *a2;
                x87_r7_1 - temp0_1;

                if (*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    var_8 = *a2;

                long double x87_r7_2 = a2[1];
                float var_4;
                long double temp1_1 = var_4;
                x87_r7_2 - temp1_1;

                if (!(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
                    var_4 = a2[1];

                long double x87_r7_4 = var_10;
                long double temp2_1 = *a3;
                x87_r7_4 - temp2_1;

                if (!(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    var_10 = *a3;

                long double x87_r7_5 = a3[1];
                float var_c;
                long double temp3_1 = var_c;
                x87_r7_5 - temp3_1;

                if (*(&((x87_r7_5 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    var_c = a3[1];

                int32_t* j_1 = g_a5e354;
                int32_t* j = j_1;

                if (j_1)
                {
                    do
                    {
                        if (j != ebx)
                        {
                            int32_t eax_7 = sub_4cfcb0(j);
                            int32_t var_18_1 = eax_7;

                            if (eax_7 != 0xffffffff)
                            {
                                int32_t k = 0;
                                void* edi_2 = *(*(*(j[0x1b] + (eax_7 << 2)) + 0xc) + 0xc);

                                if (*(edi_2 + 0x84) > 0)
                                {
                                    int32_t ebp_1 = 0;

                                    do
                                    {
                                        if (*(*(edi_2 + 0x98) + ebp_1 + 0x10) == eax_2)
                                        {
                                            sub_4dd4b0(j, &var_8, &var_10, eax_7);
                                            eax_7 = var_18_1;
                                        }

                                        k += 1;
                                        ebp_1 += 0x14;
                                    } while (k < *(edi_2 + 0x84));

                                    ebp = var_14;
                                }
                            }

                            j_1 = g_a5e354;
                            ebx = a1;
                        }

                        if (j != j_1)
                        {
                            j = *j;

                            if (!j)
                                break;

                            if (!*j)
                                break;
                        }
                        else
                        {
                            void* esi_2 = j[0x52];

                            if (!esi_2)
                                break;

                            j = *(esi_2 + 8);

                            if (!*j)
                                break;
                        }
                    } while (j);
                }
            }

            i = i_1 + 1;
            var_20_1 += 0x14;
            i_1 = i;
        } while (i < *(ebp + 0x84));
    }

    return i;
}
