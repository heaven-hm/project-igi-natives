#include "00431B70-Heli_ReceiveChannels.h"
/* 0x00431b70 Heli_ReceiveChannels full linked: callers=0 callees=12 */
int32_t Heli_ReceiveChannels(float a1, int32_t* a2)

{
    int32_t* esi = a2;
    uint32_t ebx = a1;
    void* eax = esi[1];

    if (*(eax + 0xc) != 0xbf800000)
        *(ebx + 0x730) = *(eax + 0xc);

    *(ebx + 0x734) = *esi[1];
    *(ebx + 0x738) = *(esi[1] + 4);
    *(ebx + 0x73c) = *(esi[1] + 8);

    if (!*esi)
    {
        long double x87_r7_5 = *(ebx + 0x9c);
        long double x87_r6_1 = *(ebx + 0xa0);
        x87_r6_1 - x87_r7_5;
        long double x87_r7_6;

        if (!(*(&((x87_r6_1 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_6 = *(ebx + 0xa0);
        else
            x87_r7_6 = *(ebx + 0x9c);

        long double x87_r6_2 = *(ebx + 0x98);
        x87_r6_2 - x87_r7_6;
        long double x87_r7_8;

        if (*(&((x87_r6_2 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_9 = *(ebx + 0x9c);
            long double x87_r6_3 = *(ebx + 0xa0);
            x87_r6_3 - x87_r7_9;

            if (!(*(&((x87_r6_3 < x87_r7_9 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_9) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_8 = *(ebx + 0xa0);
            else
                x87_r7_8 = *(ebx + 0x9c);
        }
        else
            x87_r7_8 = *(ebx + 0x98);

        float var_20_2 = sub_4d0950(*(ebx + 0x6c)) * x87_r7_8;
        sub_4c6940(Level_StartMission_4(), ebx, ebx + 0x168, var_20_2);
        *(esi[1] + 0xc) = 0xbf800000;
        *(esi[1] + 0x10) = 0xc0000000;
        *esi[1] = 0;
        *(esi[1] + 4) = 0;
        *(esi[1] + 8) = 0;
        memcpy(ebx + 0x70, ebx + 0x18c, 0x28);
        sub_4fb700(ebx, *(ebx + 0x1b4));
        sub_4f4600(ebx);
        *(ebx + 0x720) = *(ebx + 0x740);
        *(ebx + 0x730) = *(ebx + 0x740);
        *(ebx + 0x724) = 0;
        *(ebx + 0x728) = 0;
        *(ebx + 0x72c) = 0;
        *(ebx + 0x734) = 0;
        *(ebx + 0x738) = 0;
        *(ebx + 0x73c) = 0;
        sub_4f4820(ebx);
        sub_4f4800(ebx);
        long double x87_r7_17 = *(ebx + 0x78) * *(ebx + 0x188) + *(ebx + 0x74) * *(ebx + 0x184)
            + *(ebx + 0x180) * *(ebx + 0x70);
        void* var_c = x87_r7_17;
        long double x87_r7_21 = *(ebx + 0x84) * *(ebx + 0x188) + *(ebx + 0x80) * *(ebx + 0x184)
            + *(ebx + 0x7c) * *(ebx + 0x180);
        float var_8_1 = x87_r7_21;
        long double x87_r7_25 = *(ebx + 0x90) * *(ebx + 0x188) + *(ebx + 0x8c) * *(ebx + 0x184)
            + *(ebx + 0x88) * *(ebx + 0x180);
        float var_4_1 = x87_r7_25;
        *(ebx + 0x108) = var_c;
        *(ebx + 0x10c) = var_8_1;
        *(ebx + 0x110) = var_4_1;
        sub_4ecdb0(ebx + 0xf0);
        void* eax_8 = *(ebx + 0xe8);

        if (eax_8)
        {
            float* var_8_2 = ebx + 0x70;
            var_c = ebx + 0x20;
            uint32_t var_4_2 = ebx;
            int32_t* i_1 = *(eax_8 + 8);

            if (*i_1)
            {
                int32_t* i = i_1;

                if (i)
                {
                    int32_t ecx_7 = g_afa7e0;

                    do
                    {
                        int32_t* edx_5 = *i;
                        void* eax_12;

                        if (!edx_5)
                            eax_12 = nullptr;
                        else
                        {
                            int32_t eax_9 = *edx_5;
                            int32_t eax_10 = -(eax_9);
                            eax_12 = (eax_10 - eax_10) & edx_5;
                        }

                        *((ecx_7 << 2) + &g_afa6e0) = eax_12;
                        g_afa7e0 = ecx_7 + 1;
                        uint32_t eax_14 = MagicObj_GetEventId();
                        int32_t ecx_9 = 0;
                        ecx_9 = i[7];
                        int32_t eax_18 = *(((eax_14 * 0x180 + ecx_9) << 2) + &g_a96ae0);

                        if (eax_18)
                            eax_18(i, &var_c);

                        ecx_7 = g_afa7e0 - 1;
                        g_afa7e0 = ecx_7;
                        i = *((ecx_7 << 2) + &g_afa6e0);
                    } while (i);
                }
            }
        }

        esi = a2;
    }

    int32_t result = *esi;

    if (result <= 0)
        return result;

    sub_4f4660(ebx);
    return Vehicle_DeployGear_2(ebx);
}
