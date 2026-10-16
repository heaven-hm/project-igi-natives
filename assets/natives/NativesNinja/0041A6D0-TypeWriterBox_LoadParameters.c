#include "0041A6D0-TypeWriterBox_LoadParameters.h"
/* 0x0041a6d0 TypeWriterBox_LoadParameters full linked: callers=0 callees=14 */
int32_t TypeWriterBox_LoadParameters(void* a1)

{
    long double x87_r7_1 = (Menu_FormatScreen_4(*(a1 + 0x44)) - 8) * 0.125f;
    long double temp2 = 0f;
    x87_r7_1 - temp2;
    float var_128;

    var_128 = *(&((x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0f : x87_r7_1;

    void* ebx = *(a1 + 0x64);
    int32_t ecx = *(a1 + 0x5c);
    void* var_114 = ebx;

    if ((ebx - 1) % ecx != *(a1 + 0x60))
    {
        int32_t* var_120_1 = ebx - 1;
        int32_t* eax_34;

        do
        {
            int32_t ecx_1 = ebx % ecx * 9;
            int32_t edx_4 = *(a1 + 0x58);
            int32_t* ebp_1 = edx_4 + (ecx_1 << 2);
            int32_t* esi = *(a1 + (*(edx_4 + (ecx_1 << 2) + 0xc) << 2) + 0x78);

            if (esi)
            {
                int32_t ebx_1 = *ebp_1;
                int32_t eax_12 = ebp_1[2] * 0xc;
                float var_12c_1 = *(eax_12 + 0x53b778);
                float var_11c_1 = *(eax_12 + 0x53b780);
                float var_124_1 = *(eax_12 + 0x53b77c);
                float var_118_1 = var_128;

                if (ebp_1[1] != 0xffffffff)
                {
                    if (*(a1 + 0x74))
                    {
                        int32_t eax_16 = *(a1 + 0x6c);

                        if (eax_16 < 0x10)
                            var_118_1 = eax_16 * var_128 * 0.0625f;

                        if (eax_16 < 0x20)
                        {
                            int32_t edx_6 = 0;
                            edx_6 = eax_16 - 0x10 < 0;
                            long double x87_r7_7 = ((edx_6 - 1) & (eax_16 - 0x10)) * 0.0625f;
                            var_12c_1 = (var_12c_1 - 128f) * x87_r7_7 + 128f;
                            var_124_1 = (var_124_1 - 128f) * x87_r7_7 + 128f;
                            var_11c_1 = (var_11c_1 - 128f) * x87_r7_7 + 128f;
                        }
                    }

                    sub_4b6e90(esi, ebp_1[8]);
                    int32_t var_130_3;

                    if (!ebx_1)
                    {
                        int32_t eax_19 = sub_4b7df0(esi);
                        var_130_3 = (*(a1 + 0x28) - eax_19) >> 1;
                    }
                    else if (ebx_1 >= 0)
                        var_130_3 = ebx_1 + 8;
                    else
                    {
                        int32_t eax_20 = sub_4b7df0(esi);
                        var_130_3 = ebx_1 + *(a1 + 0x28) - eax_20 - 8;
                    }

                    int32_t ecx_8 = esi[9] | 0x80000;
                    esi[1] = *(a1 + 0x20) + var_130_3;
                    long double x87_r7_12 = *(a1 + 0x24) + ebp_1[1];
                    esi[9] = ecx_8;
                    esi[4] = var_118_1;
                    esi[5] = var_12c_1;
                    esi[6] = var_124_1;
                    esi[7] = var_11c_1;
                    esi[2] = x87_r7_12;

                    if (var_114 == *(a1 + 0x60))
                    {
                        char var_100[0x100];
                        sub_4a5500(&var_100, ebp_1[8], *(a1 + 0x68));
                        var_100[*(a1 + 0x68)] = 0;
                        sub_4b6e90(esi, &var_100);
                        sub_4b6f50(esi);

                        if (*(a1 + 0x70) & 8)
                        {
                            int32_t eax_28 = sub_4b7df0(esi) + esi[1];
                            int32_t var_110_1 = esi[2];
                            int32_t eax_30 = sub_4b7e00(esi);
                            float var_15c_1 = var_124_1;
                            float var_160_1 = var_124_1;
                            float var_164_1 = var_124_1;
                            float var_168_1 = var_124_1;
                            sub_4b4a00(eax_28, var_110_1, (eax_30 * 3) >> 2, eax_30, var_12c_1,
                                var_124_1, var_11c_1, var_118_1, 0x80000, 0);
                        }
                    }
                    else
                        sub_4b6f50(esi);
                }
            }

            ecx = *(a1 + 0x5c);
            ebx = var_114 + 1;
            eax_34 = var_120_1 + 1;
            var_114 = ebx;
            var_120_1 = eax_34;
        } while (eax_34 % ecx != *(a1 + 0x60));
    }

    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(a1);
    return Menu_DrawWidget_14(a1, 0.5f, var_128, 0);
}
