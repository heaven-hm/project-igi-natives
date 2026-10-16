#include "00451540-AI_SteerHuman.h"
/* 0x00451540 AI_SteerHuman full linked: callers=1 callees=22 */
int32_t sub_451540(long double a1 @ st0, long double a2 @ st1, void* a3)

{
    int32_t* esi = *(a3 + 0xe0);
    int32_t* var_34 = esi;

    if (!*esi || !esi)
        return 2;

    void* var_60;
    double* var_58;
    void* var_54;
    void* var_50;
    double var_30;

    if (esi[8] == 1)
    {
        if (!*(a3 + 0x3e4a))
        {
            var_50 = *(a3 + 0x3b6c);
            var_54 = sub_4f9720(var_50, *(a3 + 0x3e2c));
            var_58 = &var_30;
            sub_4f9770(var_58, var_54);
            int32_t var_18_1 = 0;
            int32_t var_14_1 = 0xbff00000;
            void* var_10_1 = nullptr;
            int32_t i_1 = 0;

            if (*Level_StartMission_3() > 0)
            {
                int32_t edi_1 = 8;
                int32_t* eax_12;
                int32_t i;

                do
                {
                    int32_t ecx_2 = 0;
                    ecx_2 = *(*(Level_StartMission_3() + edi_1) + 0x1c);
                    int32_t esi_3 = *(((ecx_2 + sub_450ca0() * 0x180) << 2) + &g_a96ae0);

                    if (esi_3)
                    {
                        double* var_4c_2 = &var_30;
                        var_50 = *(Level_StartMission_3() + edi_1);
                        esi_3(var_50, var_4c_2);
                    }

                    edi_1 += 4;
                    i = i_1 + 1;
                    i_1 = i;
                    eax_12 = Level_StartMission_3();
                } while (i < *eax_12);
                esi = var_34;
            }

            int32_t* eax_13 = *(a3 + 0x3e4c);

            if (eax_13)
            {
                Qtask_UpdateList(eax_13);
                *(a3 + 0x3e4c) = 0;
            }

            if (var_10_1)
                *(a3 + 0x3e4c) = QTask_LinkEventHandler_2(var_10_1);

            *(a3 + 0x3e4a) = 1;
        }

        int32_t* eax_16 = *(a3 + 0x3e4c);

        if (eax_16)
        {
            void* edi_2 = *eax_16;

            if (edi_2)
            {
                int32_t eax_17 = sub_447d70(edi_2);

                if (eax_17 == 1)
                {
                label_451683:
                    sub_447da0(edi_2);
                    sub_4525b0(a3, &esi[2], 0.0349065848f, 1);
                    return 1;
                }

                if (eax_17 == 2)
                {
                    char* var_4c_7 = "Waiting for door to open";
                    int32_t var_50_2 = 0xffffffff;
                    void* var_54_2 = a3;
                    char var_58_2 = 1;
                    float var_5c_1 = 0.0349065848f;
                    var_60 = &esi[2];
                    sub_4525b0(a3, var_60, var_5c_1, var_58_2);
                    return 1;
                }

                if (eax_17 == 3)
                    goto label_451683;
            }
        }
    }

    long double x87_r7_1 = *(esi + 8) - *(a3 + 0x20);
    long double x87_r6_1 = *(esi + 0x10) - *(a3 + 0x28);
    long double x87_r5_1 = *(esi + 0x18) - *(a3 + 0x30);
    var_30 = *(a3 + 0x68) * x87_r5_1 + *(a3 + 0x5c) * x87_r6_1 + *(a3 + 0x50) * x87_r7_1;
    double var_28 =
        *(a3 + 0x6c) * x87_r5_1 + *(a3 + 0x60) * x87_r6_1 + *(a3 + 0x54) * x87_r7_1;
    double var_20 =
        *(a3 + 0x70) * x87_r5_1 + *(a3 + 0x64) * x87_r6_1 + *(a3 + 0x58) * x87_r7_1;
    memcpy(&var_60, &var_30, 0x18);
    WeaponType_GetConfig(var_58, var_54);
    float var_3c = -(a1);
    sub_451470(a3 + 0x20);
    float var_38_1 = a2;
    var_50 = var_3c;
    var_58 = var_38_1;
    char* var_5c_2 = "A:  %f, G:  %f";
    var_60 = 0xffffffff;
    void* var_64_2 = a3;
    long double x87_r1_3 = -(*(a3 + 0x3ec8));
    long double x87_r0_1 = var_38_1;
    x87_r0_1 - x87_r1_3;

    if (*(&((x87_r0_1 < x87_r1_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_1, x87_r1_3) ? 1 : 0) << 0xa
            | (x87_r0_1 == x87_r1_3 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        var_38_1 = x87_r1_3;
    else
    {
        long double x87_r1_5 = *(a3 + 0x3ec8);
        long double temp1_1 = var_38_1;
        x87_r1_5 - temp1_1;

        if (*(&((x87_r1_5 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_5, temp1_1) ? 1 : 0) << 0xa
                | (x87_r1_5 == temp1_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            var_38_1 = *(a3 + 0x3ec8);
    }

    long double x87_r1_7 = -(*(a3 + 0x3ecc));
    long double x87_r0_2 = var_3c;
    x87_r0_2 - x87_r1_7;

    if (*(&((x87_r0_2 < x87_r1_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_2, x87_r1_7) ? 1 : 0) << 0xa
            | (x87_r0_2 == x87_r1_7 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        var_3c = x87_r1_7;
    else
    {
        long double x87_r1_9 = *(a3 + 0x3ecc);
        long double temp4_1 = var_3c;
        x87_r1_9 - temp4_1;

        if (*(&((x87_r1_9 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_9, temp4_1) ? 1 : 0) << 0xa
                | (x87_r1_9 == temp4_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            var_3c = *(a3 + 0x3ecc);
    }

    var_50 = var_3c;
    var_58 = var_38_1;
    char* var_5c_3 = "CA: %f, CG: %f";
    var_60 = 0xffffffff;
    void* var_64_3 = a3;
    long double x87_r1_12 = var_30;
    long double temp6 = 0.0;
    x87_r1_12 - temp6;

    if (*(&((x87_r1_12 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_12, temp6) ? 1 : 0) << 0xa
            | (x87_r1_12 == temp6 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        x87_r1_12 = -(x87_r1_12);

    long double temp7 = 1228.8;
    x87_r1_12 - temp7;

    if (*(&((x87_r1_12 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_12, temp7) ? 1 : 0) << 0xa
        | (x87_r1_12 == temp7 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41)
    {
        long double x87_r1_13 = var_28;
        long double temp8_1 = 0.0;
        x87_r1_13 - temp8_1;

        if (*(&((x87_r1_13 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_13, temp8_1) ? 1 : 0) << 0xa
                | (x87_r1_13 == temp8_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            x87_r1_13 = -(x87_r1_13);

        long double temp9_1 = 1228.8;
        x87_r1_13 - temp9_1;

        if (*(&((x87_r1_13 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_13, temp9_1) ? 1 : 0) << 0xa
            | (x87_r1_13 == temp9_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41)
        {
            *(a3 + 0x3e2c) = var_34[9];
            sub_4af960(var_34);
            int32_t* var_54_3 = &g_58a9c8;
            var_34[1] = 0;
            *var_34 = 0;
            sub_4af8f0(var_54_3, var_34);

            if (*(a3 + 0x3e4a))
            {
                int32_t* eax_28 = *(a3 + 0x3e4c);

                if (eax_28)
                {
                    Qtask_UpdateList(eax_28);
                    *(a3 + 0x3e4c) = 0;
                }

                *(a3 + 0x3e4a) = 0;
            }

            return 0;
        }
    }

    *(a3 + 0x3c84) = 0x3f800000;
    *(a3 + 0x3c74) = var_3c * 0.318309873f;
    *(a3 + 0x3c78) = var_38_1 * 0.318309873f;
    return 1;
}
