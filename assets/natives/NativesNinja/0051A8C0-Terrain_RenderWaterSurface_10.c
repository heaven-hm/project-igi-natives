#include "0051A8C0-Terrain_RenderWaterSurface_10.h"
/* 0x0051a8c0 Terrain_RenderWaterSurface_10 full linked: callers=2 callees=9 */
void sub_51a8c0(float a1)

{
    float edx = a1;
    int32_t ebx;
    int32_t var_a0 = ebx;
    int32_t esi = *(edx + 0x1f8);

    if (esi < 3)
        return;

    void* eax_1 = *(edx + 0x68);

    if (*(eax_1 + 0xc4))
    {
        *(eax_1 + 0x78) = *(*(edx + 0x6c) + 0x20) - *(eax_1 + 0x20);
        void* eax_2 = *(edx + 0x68);
        *(eax_2 + 0x80) = *(*(edx + 0x6c) + 0x28) - *(eax_2 + 0x28);
        void* eax_3 = *(edx + 0x68);
        *(eax_3 + 0x88) = *(*(edx + 0x6c) + 0x30) - *(eax_3 + 0x30);
    }

    void* eax_4 = *(edx + (esi << 2) + 0x64);

    if (*(eax_4 + 0xc4))
    {
        *(eax_4 + 0x78) = *(eax_4 + 0x20) - *(*(edx + (esi << 2) + 0x60) + 0x20);
        void* eax_5 = *(edx + (esi << 2) + 0x64);
        *(eax_5 + 0x80) = *(eax_5 + 0x28) - *(*(edx + (esi << 2) + 0x60) + 0x28);
        void* eax_6 = *(edx + (esi << 2) + 0x64);
        *(eax_6 + 0x88) = *(eax_6 + 0x30) - *(*(edx + (esi << 2) + 0x60) + 0x30);
    }

    if (esi - 1 > 1)
    {
        int32_t* eax_7 = edx + 0x6c;
        int32_t var_98_1 = esi - 2;
        bool cond:3_1;

        do
        {
            void* ecx_9 = *eax_7;

            if (*(ecx_9 + 0xc4))
            {
                *(ecx_9 + 0x78) = *(eax_7[1] + 0x20) - *(eax_7[-1] + 0x20);
                *(*eax_7 + 0x80) = *(eax_7[1] + 0x28) - *(eax_7[-1] + 0x28);
                *(*eax_7 + 0x88) = *(eax_7[1] + 0x30) - *(eax_7[-1] + 0x30);
                void* ecx_14 = *eax_7;
                *(ecx_14 + 0x78) = *(ecx_14 + 0x78) * 0.5;
                void* ecx_15 = *eax_7;
                *(ecx_15 + 0x80) = *(ecx_15 + 0x80) * 0.5;
                void* ecx_16 = *eax_7;
                *(ecx_16 + 0x88) = *(ecx_16 + 0x88) * 0.5;
            }

            eax_7 = &eax_7[1];
            cond:3_1 = var_98_1 != 1;
            var_98_1 -= 1;
        } while (cond:3_1);
    }

    int32_t ebp_2 = 0;
    int32_t* ebx_5 = edx + 0x68;
    *(*(edx + (esi << 2) + 0x64) + 0x98) = 0;
    float var_8c_1 = 0.00200000009f;
    void* var_94_1 = nullptr;
    *(*ebx_5 + 0x94) = 0;

    if (esi - 1 <= 0)
        return;

    while (true)
    {
        float var_9c_1 = 0f;
        *(*ebx_5 + 0x98) = 0;
        int32_t eax_10 = *ebx_5 + 0x20;
        double var_78;
        memcpy(&var_78, eax_10, 0x18);
        double var_60;
        memcpy(&var_60, eax_10, 0x18);
        int32_t __saved_edi;
        double var_70;
        double var_68;
        double var_58;
        double var_50;

        while (true)
        {
            var_9c_1 = var_9c_1 + var_8c_1;
            void var_18;
            int32_t eax_12 = sub_51a280(&var_18, edx, var_94_1, var_9c_1);
            int32_t ecx_22 = ebp_2 & 1;
            void* eax_13 = *ebx_5;
            ebp_2 += 1;
            memcpy(&(&__saved_edi)[ecx_22 * 6 + 0xd], eax_12, 0x18);
            long double x87_r7_32 = var_68 - var_50;
            long double x87_r6_1 = var_70 - var_58;
            long double x87_r5_1 = var_78 - var_60;
            *(eax_13 + 0x98) =
                sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_32 * x87_r7_32)
                + *(eax_13 + 0x98);

            if (ebp_2 >= 0x1f4)
                break;

            edx = a1;
        }

        void* ecx_23 = ebx_5[1];
        void* edx_2 = *ebx_5;
        long double x87_r7_38 = (*(ecx_23 + 0x90) + *(edx_2 + 0x90)) * 0.5f * 0.277777791f;
        long double temp1_1 = 0f;
        x87_r7_38 - temp1_1;

        if (*(&((x87_r7_38 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_38, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_38 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            *(ecx_23 + 0x94) = 0;
        else
            *(ecx_23 + 0x94) = *(edx_2 + 0x98) * 0.000244140625f / x87_r7_38 + *(edx_2 + 0x94);

        var_8c_1 = 0.00100000005f;
        int32_t var_98_2 = 0;
        int32_t* var_90 = 0x9c;

        do
        {
            *(var_90 + *ebx_5) = 0;
            float var_9c_2 = var_98_2 * 0.100000001f;
            void var_48;
            int32_t eax_17 = sub_51a280(&var_48, a1, var_94_1, var_9c_2);
            memcpy(&var_78, eax_17, 0x18);
            int32_t i = 0;
            memcpy(&var_60, eax_17, 0x18);

            do
            {
                var_9c_2 = var_9c_2 + 0.00100000005f;
                void var_30;
                int32_t eax_19 = sub_51a280(&var_30, a1, var_94_1, var_9c_2);
                int32_t ecx_28 = i & 1;
                float* eax_21 = var_90 + *ebx_5;
                i += 1;
                memcpy(&(&__saved_edi)[ecx_28 * 6 + 0xd], eax_19, 0x18);
                long double x87_r7_50 = var_68 - var_50;
                long double x87_r6_7 = var_70 - var_58;
                long double x87_r5_3 = var_78 - var_60;
                *eax_21 = sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_7 * x87_r6_7 + x87_r7_50 * x87_r7_50)
                    + *eax_21;
            } while (i < 0x64);

            var_98_2 += 1;
            var_90 = &var_90[1];
        } while (&var_90[1] < 0xc4);

        ebx_5 = &ebx_5[1];
        bool cond:7_1 = var_94_1 + 1 < esi - 1;
        var_94_1 += 1;

        if (!cond:7_1)
            break;

        edx = a1;
        ebp_2 = 0;
    }
}
