#include "005008F0-SplineObj_Process.h"
/* 0x005008f0 SplineObj_Process full linked: callers=0 callees=20 */
int32_t sub_5008f0(float a1)

{
    int32_t* ebp = a1;
    void* eax = ebp[5];
    char var_11 = 0;
    void* edx = QTask_AllocateEvent_2(ebp, g_a7a620);
    char* ebx;

    if (edx)
    {
        void* edi_11 = edx + 0x178;
        int32_t i = 0xffffffff;
        ebx = &ebp[0x5e];

        while (i)
        {
            bool cond:0_1 = 0 != *edi_11;
            edi_11 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_14 = ~i;
        int32_t esi_9;
        int32_t edi_14;
        edi_14 = memcpy(ebx, edi_11 - ecx_14, ecx_14 & 0xfffffffc);
        memcpy(edi_14, esi_9, ecx_14 & 3);
        void* edi_15 = edx + 0x188;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_15;
            edi_15 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_18 = ~i_1;
        int32_t esi_12;
        int32_t edi_18;
        edi_18 = memcpy(&ebp[0x62], edi_15 - ecx_18, ecx_18 & 0xfffffffc);
        memcpy(edi_18, esi_12, ecx_18 & 3);
        memcpy(&ebp[0x3e], edx + 0xf8, 0x18);
        memcpy(&ebp[0x44], edx + 0x110, 0x28);
        long double x87_r7_17 = ebp[0x44];
        long double temp1_1 = 0f;
        x87_r7_17 - temp1_1;
        float eax_15 = ebp[0x47];
        *(ebp + 0x1a1) = *(edx + 0x1a1);
        float var_8_2 = eax_15;
        *(ebp + 0x1a5) = *(edx + 0x1a5);
        float var_4_2 = ebp[0x4a];

        if (!(*(&((x87_r7_17 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_17 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_500c79:
            long double x87_r6_19 = var_4_2;
            long double x87_r5_3 = var_8_2;
            long double x87_r6_21 =
                1.0 / sqrtl(x87_r7_17 * x87_r7_17 + x87_r5_3 * x87_r5_3 + x87_r6_19 * x87_r6_19);
            x87_r7_17 = x87_r7_17 * x87_r6_21;
            var_8_2 = var_8_2 * x87_r6_21;
            var_4_2 = var_4_2 * x87_r6_21;
        }
        else
        {
            long double x87_r6_17 = var_8_2;
            long double temp2_1 = 0f;
            x87_r6_17 - temp2_1;

            if (!(*(&((x87_r6_17 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_17, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r6_17 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_500c79;

            long double x87_r6_18 = var_4_2;
            long double temp4_1 = 0f;
            x87_r6_18 - temp4_1;

            if (!(*(&((x87_r6_18 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_18, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r6_18 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_500c79;
        }

        int32_t* edx_1 = *(edx + 0xf0);
        float var_8_3;
        long double x87_r6_30;
        long double x87_r7_19;

        if (!edx_1)
        {
            x87_r7_19 = x87_r7_17 * g_54e5d4;
            var_8_3 = g_54e5d4 * var_8_2;
            x87_r6_30 = g_54e5d4;
        }
        else
        {
            long double x87_r6_27 = edx_1[0x40] - edx_1[0x3f];
            a1 = x87_r6_27;
            x87_r7_19 = x87_r7_17 * x87_r6_27;
            var_8_3 = a1 * var_8_2;
            x87_r6_30 = a1;
        }

        *(ebp + 0xf8) = x87_r7_19 + *(ebp + 0xf8);
        *(ebp + 0x100) = var_8_3 + *(ebp + 0x100);
        *(ebp + 0x108) = x87_r6_30 * var_4_2 + *(ebp + 0x108);
    }
    else
    {
        edx = g_a7a620;
        int32_t* eax_2 = QTask_TriggerEvent_2(ebp, edx);
        ebx = &ebp[0x5e];

        if (eax_2)
        {
            void* edi_1 = &eax_2[0x5e];
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond:3_1 = 0 != *edi_1;
                edi_1 += 1;
                i_2 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t ecx_3 = ~i_2;
            int32_t esi_2;
            int32_t edi_4;
            edi_4 = memcpy(ebx, edi_1 - ecx_3, ecx_3 & 0xfffffffc);
            memcpy(edi_4, esi_2, ecx_3 & 3);
            void* edi_5 = &eax_2[0x62];
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond:4_1 = 0 != *edi_5;
                edi_5 += 1;
                i_3 -= 1;

                if (!cond:4_1)
                    break;
            }

            int32_t ecx_7 = ~i_3;
            int32_t esi_5;
            int32_t edi_8;
            edi_8 = memcpy(&ebp[0x62], edi_5 - ecx_7, ecx_7 & 0xfffffffc);
            memcpy(edi_8, esi_5, ecx_7 & 3);
            memcpy(&ebp[0x3e], &eax_2[0x3e], 0x18);
            memcpy(&ebp[0x44], &eax_2[0x44], 0x28);
            float var_c_1 = ebp[0x44];
            long double x87_r7_1 = var_c_1;
            long double temp3_1 = 0f;
            x87_r7_1 - temp3_1;
            float var_4_1 = ebp[0x4a];
            *(ebp + 0x1a1) = *(eax_2 + 0x1a1);
            float ecx_13 = ebp[0x47];
            float var_8_1 = ecx_13;

            if (!(*(&((x87_r7_1 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_500aa3:
                long double x87_r7_4 = var_4_1;
                long double x87_r6_1 = var_8_1;
                long double x87_r5_1 = var_c_1;
                long double x87_r7_6 =
                    1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_4 * x87_r7_4);
                var_c_1 = var_c_1 * x87_r7_6;
                var_8_1 = var_8_1 * x87_r7_6;
                var_4_1 = var_4_1 * x87_r7_6;
            }
            else
            {
                long double x87_r7_2 = var_8_1;
                long double temp5_1 = 0f;
                x87_r7_2 - temp5_1;

                if (!(*(&((x87_r7_2 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_500aa3;

                long double x87_r7_3 = var_4_1;
                long double temp6_1 = 0f;
                x87_r7_3 - temp6_1;

                if (!(*(&((x87_r7_3 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_500aa3;
            }

            ecx_13 = g_a7a620;
            int32_t* eax_10 = QTask_TriggerEvent_2(eax_2, ecx_13);
            long double x87_r7_10;

            if (!eax_10)
            {
                x87_r7_10 = g_54e5d4 * var_c_1;
                var_8_1 = g_54e5d4 * var_8_1;
                var_4_1 = g_54e5d4 * var_4_1;
            }
            else
            {
                void* eax_11 = eax_10[0x3c];

                if (!eax_11)
                    x87_r7_10 = var_c_1;
                else
                {
                    long double x87_r7_9 = *(eax_11 + 0x100) - *(eax_11 + 0xfc);
                    a1 = x87_r7_9;
                    x87_r7_10 = x87_r7_9 * var_c_1;
                    var_8_1 = a1 * var_8_1;
                    var_4_1 = a1 * var_4_1;
                }
            }

            var_11 = 1;
            *(ebp + 0xf8) = *(ebp + 0xf8) - x87_r7_10;
            *(ebp + 0x100) = *(ebp + 0x100) - var_8_1;
            *(ebp + 0x108) = *(ebp + 0x108) - var_4_1;
        }
        else
        {
            *ebx = g_567c74;
            char ecx_2 = g_567c74;
            ebp[0x3e] = 0;
            ebp[0x40] = 0;
            ebp[0x42] = 0;
            ebp[0x62] = ecx_2;
            ebp[0x3f] = 0;
            ebp[0x41] = 0;
            ebp[0x43] = 0;
            ebp[0x44] = 0x3f800000;
            ebp[0x45] = 0;
            ebp[0x46] = 0;
            ebp[0x47] = 0;
            ebp[0x48] = 0x3f800000;
            ebp[0x49] = 0;
            ebp[0x4a] = 0;
            ebp[0x4b] = 0;
            ebp[0x4c] = 0x3f800000;
            ebp[0x4d] = 0;
            *(ebp + 0x1a1) = 0;
            *(ebp + 0x1a5) = 0;
        }
    }

    ebp[0x3c] = 0;
    *(ebp + 0x1a2) = *(eax + 0x4e);
    ebp[0x66] = *(eax + 0x24);
    ebp[0x69] = 0;
    ebp[0x68] = 0;
    void* eax_19 = sub_4cec10(ebx);
    int16_t result = sub_4c5710(g_a44344, ebp, eax_19);
    result = var_11;
    ebp[0x67] = g_a44344;

    if (!result)
        return result;

    int32_t ecx_26 = 0;
    ecx_26 = QTask_TriggerEvent_2(ebp, g_a7a620)[7];
    uint32_t eax_22 = sub_4f1a70();
    uint32_t edx_4 = eax_22 * 3;
    eax_22 = g_a7a620;
    return (*(((ecx_26 + (edx_4 << 7)) << 2) + &g_a96ae0))(QTask_TriggerEvent_2(ebp, eax_22), 0);
}
