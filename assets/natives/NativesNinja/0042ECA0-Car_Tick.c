#include "0042ECA0-Car_Tick.h"
/* 0x0042eca0 Car_Tick full linked: callers=1 callees=6 */
void* Car_Tick(int32_t a1)

{
    float esi = a1;
    void* eax = *(esi + 0x1b4);
    void* ecx = *(eax + 0x2d4);
    *(esi + 0x720) = (1f - *(ecx + 0x20)) * *(esi + 0x730) + *(ecx + 0x20) * *(esi + 0x720);
    void* eax_1 = *(eax + 0x2d4);
    *(esi + 0x72c) = (1f - *(eax_1 + 0x18)) * *(esi + 0x73c) + *(esi + 0x72c) * *(eax_1 + 0x18);
    long double x87_r7_8 = *(esi + 0x730);
    long double temp0 = 0f;
    x87_r7_8 - temp0;

    if (*(&((x87_r7_8 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp0) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_9 = *(esi + 0x720);
        long double temp1_1 = 0f;
        x87_r7_9 - temp1_1;
        long double x87_r7_10 = *(esi + 0x720);

        if (*(&((x87_r7_9 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_10 = -(x87_r7_10);

        long double temp2_1 = 0.00999999978f;
        x87_r7_10 - temp2_1;

        if (*(&((x87_r7_10 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
            *(esi + 0x720) = 0;
    }

    Car_WheelSweep(esi);
    float var_c;

    if (!sub_4fc7b0(esi))
    {
        void* eax_4 = *(esi + 0x1b4);
        float var_10_1 = esi;

        if (*(*(eax_4 + 0x2d4) + 0x28))
        {
            var_c = *(esi + 0x108);
            float ebx_3 = *(esi + 0x10c);
            var_c = -(var_c);
            float var_8_2 = -(ebx_3);
            float var_4_2 = -(*(esi + 0x110));
            void* eax_6 = *(eax_4 + 0x2d4) + 0x2c;
            sub_4ec2c0(eax_6, *(eax_6 - 4), 0.000326999987f, esi + 0xf0, esi + 0x70, &var_c);
        }

        void var_14;
        sub_4fc0e0(esi, 44.6008873f, 0.970000029f, 0.899999976f, Level_StartMission_4(), 0xc,
            &var_14);
    }

    void* eax_8 = *(esi + 0x74c);

    if (eax_8)
    {
        a1 = 1;
        *(eax_8 + 4) = *(esi + 0x720);
        long double x87_r7_17 = *(esi + 0x720);
        long double temp3_1 = 0.00999999978f;
        x87_r7_17 - temp3_1;

        if (*(&((x87_r7_17 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            a1 = 0;

        *(*(esi + 0x74c) + 8) = a1;
        long double x87_r7_20 = *(esi + 0xf8) * 0.00100000005f;
        long double temp4_1 = 1f;
        x87_r7_20 - temp4_1;

        if (!(*(&((x87_r7_20 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            x87_r7_20 = 1f;

        *(*(esi + 0x74c) + 0xc) = x87_r7_20;
    }

    void* result = *(esi + 0xe8);

    if (result)
    {
        var_c = esi + 0x20;
        int32_t var_8_3 = esi + 0x70;
        float var_4_3 = esi;
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t ecx_5 = g_afa7e0;

            do
            {
                int32_t* edx_7 = *i;
                void* eax_14;

                if (!edx_7)
                    eax_14 = nullptr;
                else
                {
                    int32_t eax_11 = *edx_7;
                    int32_t eax_12 = -(eax_11);
                    eax_14 = (eax_12 - eax_12) & edx_7;
                }

                *((ecx_5 << 2) + &g_afa6e0) = eax_14;
                g_afa7e0 = ecx_5 + 1;
                uint32_t eax_16 = MagicObj_GetEventId();
                int32_t ecx_7 = 0;
                ecx_7 = i[7];
                result = *(((eax_16 * 0x180 + ecx_7) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &var_c);

                ecx_5 = g_afa7e0 - 1;
                g_afa7e0 = ecx_5;
                i = *((ecx_5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
