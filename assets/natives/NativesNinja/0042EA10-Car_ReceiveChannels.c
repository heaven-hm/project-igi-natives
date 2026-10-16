#include "0042EA10-Car_ReceiveChannels.h"
/* 0x0042ea10 Car_ReceiveChannels full linked: callers=0 callees=10 */
int32_t* Car_ReceiveChannels(void* a1, float a2)

{
    int32_t* ebx = a2;
    void* eax = ebx[1];

    if (*(eax + 4) != 0xbf800000)
        *(a1 + 0x730) = *(eax + 4);

    *(a1 + 0x73c) = *ebx[1];
    long double x87_r7_3 = *(ebx[1] + 0xc);
    long double temp0 = -1f;
    x87_r7_3 - temp0;
    char eax_3;

    eax_3 = *(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(a1 + 0x744) = eax_3;

    if (*ebx)
    {
        sub_4f4660(a1);
        *(a1 + 0x2ecc) = 1;
        return Car_Tick(a1);
    }

    long double x87_r7_4 = *(a1 + 0x9c);
    long double x87_r6_1 = *(a1 + 0xa0);
    x87_r6_1 - x87_r7_4;
    long double x87_r7_5;

    if (!(*(&((x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_5 = *(a1 + 0xa0);
    else
        x87_r7_5 = *(a1 + 0x9c);

    long double x87_r6_2 = *(a1 + 0x98);
    x87_r6_2 - x87_r7_5;
    long double x87_r7_7;

    if (*(&((x87_r6_2 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_8 = *(a1 + 0x9c);
        long double x87_r6_3 = *(a1 + 0xa0);
        x87_r6_3 - x87_r7_8;

        if (!(*(&((x87_r6_3 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_8) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_8 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_7 = *(a1 + 0xa0);
        else
            x87_r7_7 = *(a1 + 0x9c);
    }
    else
        x87_r7_7 = *(a1 + 0x98);

    float var_20_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_7;
    sub_4c6940(Level_StartMission_4(), a1, a1 + 0x168, var_20_1);
    memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
    *(ebx[1] + 4) = 0xbf800000;
    *(ebx[1] + 8) = 0xc0000000;
    sub_4fb700(a1, *(a1 + 0x1b4));
    sub_4f4600(a1);
    Menu_DrawWidget_22(a1);
    int32_t* i_1 = *(a1 + 0xe8);
    *(a1 + 0x720) = *(a1 + 0x740);
    *(a1 + 0x730) = *(a1 + 0x740);
    *(a1 + 0x91c) = 0;
    *(a1 + 0x2ed5) = 0;
    *(a1 + 0x72c) = 0;
    *(a1 + 0x73c) = 0;

    if (i_1)
    {
        void* var_4_1 = a1;
        void* var_c = a1 + 0x20;
        void* var_8_1 = a1 + 0x70;
        i_1 = i_1[2];

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t ecx_4 = g_afa7e0;
                int32_t eax_16;

                do
                {
                    int32_t* edx_3 = *i;
                    void* eax_12;

                    if (!edx_3)
                        eax_12 = nullptr;
                    else
                    {
                        int32_t eax_9 = *edx_3;
                        int32_t eax_10 = -(eax_9);
                        eax_12 = (eax_10 - eax_10) & edx_3;
                    }

                    *((ecx_4 << 2) + &g_afa6e0) = eax_12;
                    g_afa7e0 = ecx_4 + 1;
                    uint32_t eax_14 = MagicObj_GetEventId();
                    int32_t eax_15 = 0;
                    eax_15 = i[7];
                    eax_16 = *(((eax_14 * 0x180 + eax_15) << 2) + &g_a96ae0);

                    if (eax_16)
                        eax_16 = eax_16(i, &var_c);

                    ecx_4 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_4;
                    i = *((ecx_4 << 2) + &g_afa6e0);
                } while (i);

                return eax_16;
            }
        }
    }

    return i_1;
}
