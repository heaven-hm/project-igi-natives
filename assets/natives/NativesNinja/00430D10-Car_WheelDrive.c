#include "00430D10-Car_WheelDrive.h"
/* 0x00430d10 Car_WheelDrive full linked: callers=1 callees=4 */
void* Car_WheelDrive(float* a1, float a2, float a3)

{
    float esi = a1;
    float edi = a2;
    void* edx = *(esi + 0x1b4);
    int32_t ecx = edi * 5;
    void* ebp = *(edx + 0x2d4);
    void* ebx = ebp + (ecx << 2);
    a2 = *(ebp + (ecx << 2) + 0x120) * 0.0174532924f * *(esi + 0x72c);
    float ebp_1;

    if (!*(ebx + 0x11d))
        ebp_1 = a3;
    else
    {
        int32_t eax_3 = edi * 7;
        void* ecx_1 = esi + (eax_3 << 2);
        int16_t eax_4;
        eax_4 = *(esi + (eax_3 << 2) + 0x75d);

        if (!eax_4)
        {
        label_430d8b:
            eax_4 = *(esi + 0x6d9);

            if (eax_4)
                goto label_430dac;

            ebp_1 = a3;
        }
        else
        {
            long double x87_r7_3 = *(esi + 0x720);
            long double temp1_1 = 0f;
            x87_r7_3 - temp1_1;
            eax_4 = (x87_r7_3 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe;

            if (*(&eax_4 + 1) & 0x40)
                goto label_430d8b;

        label_430dac:
            float edx_2 = *(esi + 0xf8);
            int32_t var_34_1 = *(ecx_1 + 0x76c);
            long double x87_r7_7 =
                *(*(edx + 0x2d4) + 0x1c) * *(esi + 0x720) * 44.6008873f / *(esi + 0x758);
            int32_t var_30_1 = *(ecx_1 + 0x770);
            float edx_5 = *(esi + 0x74);
            float edx_6 = *(esi + 0x8c);
            int32_t var_2c_1 = *(ecx_1 + 0x774);
            float eax_8 = *(esi + 0x80);
            long double x87_r6_1 = *(ecx_1 + 0x760);
            long double temp2_1 = edx_5;
            x87_r6_1 - temp2_1;
            int16_t eax_9 = (x87_r6_1 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800;
            float var_40;
            float var_3c;
            float var_38;

            if (!(*(&eax_9 + 1) & 0x40))
            {
            label_430e43:
                long double x87_r6_6 = edx_6 * *(ecx_1 + 0x764) - eax_8 * *(ecx_1 + 0x768);
                long double x87_r5_6 = -((edx_6 * *(ecx_1 + 0x760) - edx_5 * *(ecx_1 + 0x768)));
                long double x87_r4_5 = eax_8 * *(ecx_1 + 0x760) - edx_5 * *(ecx_1 + 0x764);
                long double x87_r3_7 = x87_r6_6 * *(ecx_1 + 0x768);
                long double x87_r3_9 = x87_r4_5 * *(ecx_1 + 0x760);
                var_40 = x87_r5_6 * *(ecx_1 + 0x768) - x87_r4_5 * *(ecx_1 + 0x764);
                var_3c = -((x87_r3_7 - x87_r3_9));
                var_38 = x87_r6_6 * *(ecx_1 + 0x764) - x87_r5_6 * *(ecx_1 + 0x760);
            }
            else
            {
                long double x87_r6_2 = *(ecx_1 + 0x764);
                long double temp3_1 = eax_8;
                x87_r6_2 - temp3_1;
                eax_9 = (x87_r6_2 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&eax_9 + 1) & 0x40))
                    goto label_430e43;

                long double x87_r6_3 = *(ecx_1 + 0x768);
                long double temp4_1 = edx_6;
                x87_r6_3 - temp4_1;
                eax_9 = (x87_r6_3 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == temp4_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&eax_9 + 1) & 0x40))
                    goto label_430e43;
            }

            eax_9 = *(ebp + 0x261);

            if (!eax_9)
                ebp_1 = a3;
            else
            {
                ebp_1 = a3;
                x87_r7_7 = Vehicle_InitPlane(esi, ebp_1) * x87_r7_7;
            }

            long double x87_r7_10 = x87_r7_7 - edx_2;
            var_40 = x87_r7_10 * var_40;
            float var_3c_1 = x87_r7_10 * var_3c;
            long double x87_r7_11 = x87_r7_10 * var_38;
            float var_48_3 =
                var_3c_1 * *(esi + 0x80) + var_40 * *(esi + 0x74) + x87_r7_11 * *(esi + 0x8c);
            long double x87_r6_23 = var_40 * *(esi + 0x78);
            long double x87_r6_25 = x87_r7_11 * *(esi + 0x90);
            var_40 = var_40 * *(esi + 0x70) + x87_r7_11 * *(esi + 0x88) + var_3c_1 * *(esi + 0x7c);
            float var_68_2 = var_48_3;
            float var_44_3 = x87_r6_23 + x87_r6_25 + var_3c_1 * *(esi + 0x84);
            float var_28;
            sub_4b3be0(&var_28, -(a2));
            float var_1c;
            float var_18;
            float var_14;
            float var_48_4 = var_1c * var_40 + var_14 * var_44_3 + var_18 * var_48_3;
            float var_10;
            long double x87_r7_26 = var_10 * var_40;
            float var_24;
            float var_20;
            var_40 = var_28 * var_40 + var_20 * var_44_3 + var_24 * var_48_3;
            float var_3c_3 = var_48_4;
            float var_c;
            float var_8;
            float var_38_2 = x87_r7_26 + var_8 * var_44_3 + var_c * var_48_3;
            sub_4ecf50(esi + 0xf0, &var_40);
        }
    }

    void* result = edi * 7;
    void* ecx_5 = esi + (result << 2);
    result = *(esi + (result << 2) + 0x75d);

    if (!result || ebp_1 < 0)
        return result;

    float var_54_2;

    if (!*(ebx + 0x11c))
        var_54_2 = 0f;
    else
        var_54_2 = a2;

    float edi_2 = *(esi + ebp_1 * 0x38 + 0x1d8);
    a3 = *(esi + ebp_1 * 0x38 + 0x1dc);

    if (*(esi + 0x744))
    {
        a3 = edi_2;
        *(esi + 0x720) = *(esi + 0x720) * 0.949999988f;
    }

    int32_t var_68_4 = 0x42a3d70a;
    return Wheel_FrictionDrive(esi + 0xf0, esi + 0x70, ecx_5 + 0x76c, ecx_5 + 0x760, var_54_2,
        edi_2, a3);
}
