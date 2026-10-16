#include "00428D00-Menu_UpdateLanguage_20.h"
/* 0x00428d00 Menu_UpdateLanguage_20 full linked: callers=1 callees=16 */
void* Menu_UpdateLanguage_20(float a1)

{
    float ebx = a1;
    long double x87_r7 = *(ebx + 0x720);
    long double temp0 = 0.699999988f;
    x87_r7 - temp0;
    void* ebp = *(*(ebx + 0x1b4) + 0x2d4);
    float var_68;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
        var_68 = *(ebp + 0x20);
    else
        var_68 = *(ebp + 0x24);

    float eax_2 = *(ebx + 0x730);
    long double x87_r7_1 = *(ebx + 0x720);
    long double temp1 = eax_2;
    x87_r7_1 - temp1;

    if (!(*(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double temp2_1 = eax_2;
        x87_r7_1 - temp2_1;

        if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            x87_r7_1 = x87_r7_1 - var_68;
            long double temp5_1 = eax_2;
            x87_r7_1 - temp5_1;

            if (*(&((x87_r7_1 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_1 = eax_2;
        }
    }
    else
    {
        x87_r7_1 = x87_r7_1 + var_68;
        long double temp3_1 = eax_2;
        x87_r7_1 - temp3_1;

        if (!(*(&((x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_1 = eax_2;
    }

    long double temp4 = 0.00100000005f;
    x87_r7_1 - temp4;

    if (*(&((x87_r7_1 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp4) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = 0f;

    float ecx_2 = *(ebp + 8);
    float edx_2 = *(ebp + 0x10);
    float eax_4 = *(ebp + 0x18);
    *(ebx + 0x720) = x87_r7_1;
    long double x87_r7_7 = (1f - ecx_2) * *(ebx + 0x734) + ecx_2 * *(ebx + 0x724);
    *(ebx + 0x724) = x87_r7_7;
    long double x87_r6_5 = (1f - edx_2) * *(ebx + 0x738) + edx_2 * *(ebx + 0x728);
    *(ebx + 0x728) = x87_r6_5;
    long double x87_r5_5 = (1f - eax_4) * *(ebx + 0x73c) + eax_4 * *(ebx + 0x72c);
    a1 = x87_r5_5;
    *(ebx + 0x72c) = x87_r5_5;
    long double temp6 = 0f;
    x87_r7_7 - temp6;
    float var_50;
    float var_4c;
    float var_48;
    float var_44;
    float var_40;
    float var_3c;
    float var_38;
    float var_34;
    float var_30;
    int32_t var_2c;
    float var_28;

    if (!(*(&((x87_r7_7 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp6) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_428e60:
        float var_7c_1 = ecx_2;
        a1 = a1 * *(ebp + 0x14) * 0.0174532924f;
        sub_4b3b60(&var_50, x87_r7_7 * *(ebp + 4) * 0.0174532924f);
        var_28 = var_38 * *(ebx + 0x78) + var_50 * *(ebx + 0x70) + var_44 * *(ebx + 0x74);
        float var_24_1 = var_34 * *(ebx + 0x78) + var_4c * *(ebx + 0x70) + var_40 * *(ebx + 0x74);
        float var_20_1 = var_30 * *(ebx + 0x78) + var_48 * *(ebx + 0x70) + var_3c * *(ebx + 0x74);
        float var_1c_1 = var_44 * *(ebx + 0x80) + var_38 * *(ebx + 0x84) + var_50 * *(ebx + 0x7c);
        float var_18_1 = var_40 * *(ebx + 0x80) + var_34 * *(ebx + 0x84) + var_4c * *(ebx + 0x7c);
        float var_14_1 = var_3c * *(ebx + 0x80) + var_30 * *(ebx + 0x84) + var_48 * *(ebx + 0x7c);
        float var_10_1 = var_38 * *(ebx + 0x90) + var_50 * *(ebx + 0x88) + var_44 * *(ebx + 0x8c);
        int32_t var_4_1 = var_2c + *(ebx + 0x94) + 1;
        float var_c_1 = var_34 * *(ebx + 0x90) + var_4c * *(ebx + 0x88) + var_40 * *(ebx + 0x8c);
        float var_8_1 = var_30 * *(ebx + 0x90) + var_48 * *(ebx + 0x88) + var_3c * *(ebx + 0x8c);
        memcpy(ebx + 0x70, &var_28, 0x28);
        sub_4b3be0(&var_50, a1);
        var_28 = var_38 * *(ebx + 0x78) + var_50 * *(ebx + 0x70) + var_44 * *(ebx + 0x74);
        float var_24_2 = var_34 * *(ebx + 0x78) + var_4c * *(ebx + 0x70) + var_40 * *(ebx + 0x74);
        float var_20_2 = var_30 * *(ebx + 0x78) + var_48 * *(ebx + 0x70) + var_3c * *(ebx + 0x74);
        float var_1c_2 = var_44 * *(ebx + 0x80) + var_38 * *(ebx + 0x84) + var_50 * *(ebx + 0x7c);
        int32_t var_4_2 = var_2c + *(ebx + 0x94) + 1;
        float var_18_2 = var_40 * *(ebx + 0x80) + var_34 * *(ebx + 0x84) + var_4c * *(ebx + 0x7c);
        float var_14_2 = var_3c * *(ebx + 0x80) + var_30 * *(ebx + 0x84) + var_48 * *(ebx + 0x7c);
        float var_10_2 = var_38 * *(ebx + 0x90) + var_50 * *(ebx + 0x88) + var_44 * *(ebx + 0x8c);
        float var_c_2 = var_34 * *(ebx + 0x90) + var_4c * *(ebx + 0x88) + var_40 * *(ebx + 0x8c);
        float var_8_2 = var_30 * *(ebx + 0x90) + var_48 * *(ebx + 0x88) + var_3c * *(ebx + 0x8c);
        memcpy(ebx + 0x70, &var_28, 0x28);
    }
    else
    {
        long double temp7_1 = 0f;
        x87_r6_5 - temp7_1;

        if (!(*(&((x87_r6_5 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, temp7_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_428e60;

        long double x87_r6_6 = a1;
        long double temp8_1 = 0f;
        x87_r6_6 - temp8_1;

        if (!(*(&((x87_r6_6 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, temp8_1) ? 1 : 0) << 0xa
                | (x87_r6_6 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_428e60;
    }

    long double x87_r7_83 = *(ebx + 0x864);
    long double temp9 = 0f;
    x87_r7_83 - temp9;

    if (*(&((x87_r7_83 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_83, temp9) ? 1 : 0) << 0xa
        | (x87_r7_83 == temp9 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        sub_4b38e0(&var_50, (0.5f - sub_4b4770(0x57bc88)) * 0.100000001f,
            (0.699999988f - sub_4b4770(0x57bc88)) * 0.100000001f,
            (0.300000012f - sub_4b4770(0x57bc88)) * 0.100000001f);
        var_28 = var_44 * *(ebx + 0x74) + var_38 * *(ebx + 0x78) + var_50 * *(ebx + 0x70);
        float var_24_3 = var_40 * *(ebx + 0x74) + var_34 * *(ebx + 0x78) + var_4c * *(ebx + 0x70);
        float var_20_3 = var_3c * *(ebx + 0x74) + var_30 * *(ebx + 0x78) + var_48 * *(ebx + 0x70);
        float var_1c_3 = var_44 * *(ebx + 0x80) + var_38 * *(ebx + 0x84) + var_50 * *(ebx + 0x7c);
        float var_18_3 = var_40 * *(ebx + 0x80) + var_34 * *(ebx + 0x84) + var_4c * *(ebx + 0x7c);
        int32_t var_4_3 = *(ebx + 0x94) + var_2c + 1;
        float var_14_3 = var_3c * *(ebx + 0x80) + var_30 * *(ebx + 0x84) + var_48 * *(ebx + 0x7c);
        float var_10_3 = var_44 * *(ebx + 0x8c) + var_38 * *(ebx + 0x90) + var_50 * *(ebx + 0x88);
        float var_c_3 = var_40 * *(ebx + 0x8c) + var_34 * *(ebx + 0x90) + var_4c * *(ebx + 0x88);
        float var_8_3 = var_3c * *(ebx + 0x8c) + var_30 * *(ebx + 0x90) + var_48 * *(ebx + 0x88);
        memcpy(ebx + 0x70, &var_28, 0x28);
    }

    long double x87_r7_129 = *(ebx + 0x720);
    long double temp10 = 0f;
    x87_r7_129 - temp10;

    if (!(*(&((x87_r7_129 < temp10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_129, temp10) ? 1 : 0) << 0xa
        | (x87_r7_129 == temp10 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_130 = *(ebx + 0x864);
        long double temp11_1 = 0f;
        x87_r7_130 - temp11_1;

        if (!(*(&((x87_r7_130 < temp11_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_130, temp11_1) ? 1 : 0) << 0xa
            | (x87_r7_130 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_133 = *(ebp + 0x1c) * *(ebx + 0x720) * 44.6008873f;
            var_50 = 0f;
            int32_t var_48_1 = 0;
            int32_t var_44_1 = 0;
            int32_t var_40_1 = 0;
            int32_t var_3c_1 = 0;
            float var_4c_1 = x87_r7_133;
            sub_4ecf50(ebx + 0xf0, &var_50);
        }
    }

    long double x87_r7_135 = *(ebx + 0x864) - *(ebp + 0x124);
    *(ebx + 0x864) = x87_r7_135;
    long double x87_r6_119 = 0f;
    x87_r6_119 - x87_r7_135;

    if (!(*(&((x87_r6_119 < x87_r7_135 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_119, x87_r7_135) ? 1 : 0) << 0xa
            | (x87_r6_119 == x87_r7_135 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        x87_r7_135 = 0f;

    *(ebx + 0x864) = x87_r7_135;

    if (!sub_4fc7b0(ebx))
    {
        int32_t* eax_12 = *(ebx + 0x858);
        float var_4c_2 = ebx;

        if (!eax_12)
            int32_t var_48_3 = 0;
        else
            int32_t var_48_2 = *eax_12;

        int32_t* eax_14 = *(ebx + 0x85c);

        if (!eax_14)
            int32_t var_44_3 = 0;
        else
            int32_t var_44_2 = *eax_14;

        int32_t var_40_2 = 0x3f800000;

        if (*(ebp + 0x28))
        {
            float var_5c = *(ebx + 0x108);
            float ecx_9 = *(ebx + 0x10c);
            var_5c = -(var_5c);
            float var_58_2 = -(ecx_9);
            float var_54_2 = -(*(ebx + 0x110));
            sub_4ec2c0(ebx + 0x748, *(ebp + 0x28), 0.000326999987f, ebx + 0xf0, ebx + 0x70,
                &var_5c);
        }

        int32_t eax_18 = Level_StartMission_2();
        sub_4fc0e0(ebx, 44.6008873f, 0.949999988f, 0.920000017f, Level_StartMission_4(), eax_18,
            &var_50);
    }

    void* result = *(ebx + 0xe8);

    if (result)
    {
        var_50 = ebx + 0x20;
        int32_t var_4c_3 = ebx + 0x70;
        float var_48_4 = ebx;
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t ecx_12 = g_afa7e0;

            do
            {
                int32_t* edx_12 = *i;
                void* eax_23;

                if (!edx_12)
                    eax_23 = nullptr;
                else
                {
                    int32_t eax_20 = *edx_12;
                    int32_t eax_21 = -(eax_20);
                    eax_23 = (eax_21 - eax_21) & edx_12;
                }

                *((ecx_12 << 2) + &g_afa6e0) = eax_23;
                g_afa7e0 = ecx_12 + 1;
                uint32_t eax_25 = MagicObj_GetEventId();
                int32_t ecx_14 = 0;
                ecx_14 = i[7];
                result = *(((eax_25 * 0x180 + ecx_14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &var_50);

                ecx_12 = g_afa7e0 - 1;
                g_afa7e0 = ecx_12;
                i = *((ecx_12 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
