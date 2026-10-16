#include "004755A0-ProximityMine_Setup.h"
/* 0x004755a0 ProximityMine_Setup full linked: callers=0 callees=16 */
void* sub_4755a0(void* a1, char* a2)

{
    void* edx = *(a1 + 0x128);
    int32_t esi = *(a2 + 4);
    float* var_d0 = *(edx + 0x6e4);

    if (esi)
        memcpy(a1 + 0x150, esi, 0x18);

    void* eax_1 = *(a2 + 8);
    void* result;
    int32_t ecx_2;

    if (!eax_1)
    {
        ecx_2 = *(a1 + 0x80);
        *(a1 + 0x168) = *(a1 + 0x74);
        result = *(a1 + 0x8c);
        *(a1 + 0x16c) = ecx_2;
        *(a1 + 0x170) = result;
    }
    else
    {
        *(a1 + 0x168) = *(eax_1 + 4);
        *(a1 + 0x16c) = *(*(a2 + 8) + 0x10);
        result = *(a2 + 8);
        *(a1 + 0x170) = *(result + 0x1c);
    }

    if (*a2)
    {
        result = *(a1 + 0x134);

        if (!result)
        {
            long double x87_r7_2 = *(edx + 0x650) * 4096f;
            float eax_4 = *(a1 + 0x16c);
            float var_e8 = *(a1 + 0x168);
            float ecx_4 = *(a1 + 0x170);
            int32_t edx_1 = *(a1 + 0x14);
            var_e8 = x87_r7_2 * var_e8;
            double var_58;
            memcpy(&var_58, a1 + 0x150, 0x18);
            float var_e4_2 = x87_r7_2 * eax_4;
            double var_40 = var_e8 + var_58;
            void* var_e4_3 = a1;
            int32_t var_e0_2 = edx_1;
            int32_t var_dc_1 = 0;
            int32_t var_d8_1 = 0x3f800000;
            double var_50;
            double var_38_1 = var_e4_2 + var_50;
            double var_48;
            double var_30_1 = x87_r7_2 * ecx_4 + var_48;
            char eax_5 = Level_StartMission_2();
            int32_t var_c8;
            int32_t edx_2 = sub_4cc2a0(Level_StartMission_4(), &var_c8, &var_58, &var_40, 1, eax_5,
                &var_e8, 0xffffffff);
            void* result_1;
            result = result_1;

            if (result)
            {
                int32_t edi_2;

                if (!var_c8)
                    edi_2 = 0;
                else
                {
                    int16_t eax_8 = sub_460be0();
                    edx_2 = *(var_c8 + 0x1c);

                    if (!TaskType_IsDerivedFrom(edx_2, eax_8))
                        edi_2 = 0;
                    else
                        edi_2 = 1;
                }

                int32_t eax_10 = var_c8;
                char eax_13;

                if (eax_10 && *(eax_10 + 0x14))
                {
                    int16_t eax_11 = sub_460be0();
                    edx_2 = *(*(var_c8 + 0x14) + 0x1c);
                    eax_13 = TaskType_IsDerivedFrom(edx_2, eax_11);
                }

                int32_t esi_2;

                if (!eax_10 || !*(eax_10 + 0x14) || !eax_13)
                    esi_2 = 0;
                else
                    esi_2 = 1;

                if (!var_c8)
                    result = nullptr;
                else
                {
                    int16_t eax_15 = sub_449d20();
                    ecx_2 = var_c8;

                    if (*(ecx_2 + 0x1c) == eax_15)
                        result = 1;
                    else
                    {
                        int16_t eax_16 = sub_447d20();

                        if (*(var_c8 + 0x1c) == eax_16)
                            result = 1;
                        else
                        {
                            int16_t eax_17 = sub_4f45f0();
                            ecx_2 = *(var_c8 + 0x1c);

                            if (!TaskType_IsDerivedFrom(ecx_2, eax_17))
                                result = nullptr;
                            else
                                result = 1;
                        }
                    }
                }

                if (!edi_2 && !esi_2 && !result)
                {
                    float var_90;
                    long double x87_r7_5 = var_90;
                    long double temp0_1 = 0f;
                    x87_r7_5 - temp0_1;
                    float var_8c;
                    float var_88;

                    if (!(*(&((x87_r7_5 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_47581e:
                        long double x87_r7_8 = var_88;
                        long double x87_r6_9 = var_8c;
                        long double x87_r5_1 = var_90;
                        long double x87_r7_10 = 1.0 /
                            sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_9 * x87_r6_9 + x87_r7_8 * x87_r7_8);
                        var_90 = var_90 * x87_r7_10;
                        float var_8c_1 = var_8c * x87_r7_10;
                        float var_88_1 = var_88 * x87_r7_10;
                    }
                    else
                    {
                        long double x87_r7_6 = var_8c;
                        long double temp1_1 = 0f;
                        x87_r7_6 - temp1_1;

                        if (!(*(&((x87_r7_6 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_47581e;

                        long double x87_r7_7 = var_88;
                        long double temp2_1 = 0f;
                        x87_r7_7 - temp2_1;

                        if (!(*(&((x87_r7_7 < temp2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_47581e;
                    }
                    float var_28[0xa];
                    WeaponType_SetCategory(&var_28, &var_90);
                    int32_t edx_4 = var_d0[3];
                    int32_t ecx_8 = var_d0[2];
                    int32_t edx_5 = var_d0[1];
                    var_d0 = *var_d0 * 30f;
                    void var_c0;
                    Mine_ProximityCreate(sub_4f0ee0(), &var_c0, &var_28, edx + 0x61c, var_d0,
                        edx_5, ecx_8, edx_4, a2[0x18]);
                    result = *(a1 + 0x144);

                    if (result > 0)
                    {
                        result -= 1;
                        *(a1 + 0x144) = result;
                    }

                    a2[1] = 1;
                }
            }
        }
    }

    *(a1 + 0x134) = *a2;
    return result;
}
