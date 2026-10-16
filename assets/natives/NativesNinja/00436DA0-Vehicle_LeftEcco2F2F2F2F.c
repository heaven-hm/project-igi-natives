#include "00436DA0-Vehicle_LeftEcco2F2F2F2F.h"
/* 0x00436da0 Vehicle_LeftEcco2F2F2F2F full linked: callers=1 callees=7 */
int32_t Vehicle_LeftEcco2F2F2F2F(void* a1)

{
    float* ecx = a1 + 0x4c;
    int32_t i_3 = 4;
    float* var_14c = ecx;
    int32_t i;

    do
    {
        long double x87_r7_2 = ecx[-4] - 0.0111111114f;
        long double temp0_1 = 0f;
        x87_r7_2 - temp0_1;

        if (*(&((x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            x87_r7_2 = 0f;

        ecx[-4] = x87_r7_2;
        long double x87_r7_5 = *ecx - 0.0111111114f;
        long double temp1_1 = 0f;
        x87_r7_5 - temp1_1;

        if (*(&((x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            x87_r7_5 = 0f;

        *ecx = x87_r7_5;
        ecx = &ecx[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);
    void* eax_2 = g_57bdac;
    int32_t ebx = 0;
    long double x87_r7_7 = *(eax_2 + 8);
    long double x87_r6 = *(eax_2 + 0x14);
    int32_t ecx_1 = *(eax_2 + 0x20);
    void* var_16c = nullptr;
    long double x87_r5_1 = var_16c - x87_r6;
    int32_t var_150 = ecx_1;
    float var_170 = 0f;
    var_150 = 0;
    float var_164 = x87_r5_1;
    long double x87_r6_3 = var_16c - x87_r7_7;
    float var_178 = var_164;
    var_16c = eax_2 + 0x28;
    float var_158 = var_164;
    int32_t i_1 = 0;
    float var_160 = -(x87_r6_3);
    float edx = var_160;
    var_178 = -(var_164);
    float var_154 = edx;
    float var_174_1 = -(edx);
    float var_170_1 = -(var_170);
    double var_148;

    do
    {
        int32_t __saved_edi;
        double* edx_1 = &__saved_edi + i_1 + 0x70;
        memcpy(edx_1, var_16c, 0x18);
        float* esi_2 = &var_158;
        int32_t ecx_4 = ebx & 1;

        if (!ecx_4)
            esi_2 = &var_178;

        *(&var_148 + i_1) = *esi_2;
        float* esi_3 = &var_158;

        if (!ecx_4)
            esi_3 = &var_178;

        void var_140;
        *(&var_140 + i_1) = esi_3[1];
        float* ecx_5 = &var_158;

        if (!ecx_4)
            ecx_5 = &var_178;

        ebx += 1;
        void var_138;
        *(&var_138 + i_1) = ecx_5[2];
        long double x87_r7_19 = *(&var_148 + i_1) * 40960.0;
        i_1 += 0x18;
        *(&var_160 + i_1) = x87_r7_19;
        *(&var_158 + i_1) = *(&var_158 + i_1) * 40960.0;
        *(&var_150 + i_1) = *(&var_150 + i_1) * 40960.0;
        *(&var_160 + i_1) = *(&var_160 + i_1) + *edx_1;
        void var_128;
        *(&var_158 + i_1) = *(&var_128 + i_1) + *(&var_158 + i_1);
        void var_120;
        *(&var_150 + i_1) = *(&var_120 + i_1) + *(&var_150 + i_1);
    } while (i_1 < 0x30);

    int32_t var_168 = Level_InitTextures_5(0);
    void** var_190 = &var_16c;
    char eax_5 = Level_LoadObjects_4();
    double var_118[0x6];
    double* var_1a0 = &var_118;
    int32_t var_1a8 = Level_StartMission_4();
    void var_e8;
    sub_4cc2a0(var_1a8, &var_e8, var_1a0, &var_148, 2, eax_5, var_190, 0x20000000);
    int32_t i_2 = 0;
    void var_88;
    double* esi_4 = &var_88;

    do
    {
        if (esi_4[-1])
        {
            long double x87_r7_30 = *esi_4;
            long double temp3_1 = 40960.0;
            x87_r7_30 - temp3_1;

            if (*(&((x87_r7_30 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_30, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_30 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                var_178 = *esi_4 * 0.000244140625;
                float eax_9 = var_178;
                int32_t ecx_6;

                if (eax_9 <= 1)
                    ecx_6 = 0;
                else if (eax_9 > 2)
                {
                    int32_t ecx_7 = 0;
                    ecx_7 = eax_9 > 4;
                    ecx_6 = ecx_7 + 2;
                }
                else
                    ecx_6 = 1;

                if (!(i_2 & 1))
                {
                    long double x87_r7_37 = *(a1 + (ecx_6 << 2) + 0x4c) + 1f;
                    long double temp4_1 = 1f;
                    x87_r7_37 - temp4_1;

                    if (!(*(&((x87_r7_37 < temp4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        x87_r7_37 = 1f;

                    *(a1 + (ecx_6 << 2) + 0x4c) = x87_r7_37;
                }
                else
                {
                    long double x87_r7_34 = *(a1 + (ecx_6 << 2) + 0x3c) + 1f;
                    long double temp5_1 = 1f;
                    x87_r7_34 - temp5_1;

                    if (!(*(&((x87_r7_34 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_34, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_34 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        x87_r7_34 = 1f;

                    *(a1 + (ecx_6 << 2) + 0x3c) = x87_r7_34;
                }
            }
        }

        i_2 += 1;
        esi_4 = &esi_4[0xe];
    } while (i_2 < 2);

    var_190 = *(a1 + 0x48);
    var_1a0 = *(a1 + 0x40);
    var_1a8 = *(a1 + 0x3c);
    sub_4e7bd0("Left ecco: %.2f %.2f %.2f %.2f\n");
    var_190 = *(a1 + 0x58);
    var_1a0 = *(a1 + 0x50);
    var_1a8 = *var_14c;
    return sub_4e7bd0("Right ecco: %.2f %.2f %.2f %.2f\n");
}
