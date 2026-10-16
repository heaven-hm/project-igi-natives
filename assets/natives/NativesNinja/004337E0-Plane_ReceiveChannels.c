#include "004337E0-Plane_ReceiveChannels.h"
/* 0x004337e0 Plane_ReceiveChannels full linked: callers=0 callees=12 */
void* Plane_ReceiveChannels(float a1, int32_t* a2)

{
    int32_t* ecx_11 = a2;
    void* eax = ecx_11[1];

    if (*(eax + 0xc) != 0xbf800000)
        *(a1 + 0x730) = *(eax + 0xc);

    *(a1 + 0x734) = *ecx_11[1];
    *(a1 + 0x738) = *(ecx_11[1] + 4);
    *(a1 + 0x73c) = *(ecx_11[1] + 8);
    void* eax_3 = ecx_11[1];
    int64_t var_c;

    if (*(eax_3 + 0x14) != 0xbf800000)
    {
        char eax_4 = *(a1 + 0x82c);
        var_c = *(eax_3 + 0x14);
        *(a1 + 0x82c) = eax_4 ^ var_c;
    }

    void* eax_5 = ecx_11[1];

    if (*(eax_5 + 0x18) != 0xbf800000)
    {
        char edx_2 = *(a1 + 0x82d);
        var_c = *(eax_5 + 0x18);
        *(a1 + 0x82d) = edx_2 ^ var_c;
    }

    long double x87_r7_7 = *(ecx_11[1] + 0x1c);
    long double temp0 = -1f;
    x87_r7_7 - temp0;
    char eax_8;

    eax_8 = *(&((x87_r7_7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp0) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(a1 + 0x744) = eax_8;
    long double x87_r7_8 = *(ecx_11[1] + 0x20);
    long double temp1 = -1f;
    x87_r7_8 - temp1;
    char eax_11;

    eax_11 = *(&((x87_r7_8 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp1) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(a1 + 0x82e) = eax_11;
    void* eax_12 = ecx_11[1];

    if (*(eax_12 + 0x24) != 0xbf800000)
    {
        char eax_13 = *(a1 + 0x82f);
        var_c = *(eax_12 + 0x24);
        *(a1 + 0x82f) = eax_13 ^ var_c;
    }

    if (!*ecx_11)
    {
        long double x87_r7_10 = *(a1 + 0x9c);
        long double x87_r6_1 = *(a1 + 0xa0);
        x87_r6_1 - x87_r7_10;
        long double x87_r7_11;

        if (!(*(&((x87_r6_1 < x87_r7_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_11 = *(a1 + 0xa0);
        else
            x87_r7_11 = *(a1 + 0x9c);

        long double x87_r6_2 = *(a1 + 0x98);
        x87_r6_2 - x87_r7_11;
        long double x87_r7_13;

        if (*(&((x87_r6_2 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_14 = *(a1 + 0x9c);
            long double x87_r6_3 = *(a1 + 0xa0);
            x87_r6_3 - x87_r7_14;

            if (!(*(&((x87_r6_3 < x87_r7_14 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_14) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_14 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_13 = *(a1 + 0xa0);
            else
                x87_r7_13 = *(a1 + 0x9c);
        }
        else
            x87_r7_13 = *(a1 + 0x98);

        float var_20_2 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_13;
        sub_4c6940(Level_StartMission_4(), a1, a1 + 0x168, var_20_2);
        char* edx_5 = *(a1 + 0x1b4);
        memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
        sub_4fb700(a1, edx_5);
        *(a1 + 0x720) = *(a1 + 0x740);
        long double x87_r7_18 = *(a1 + 0x740);
        *(a1 + 0x734) = 0;
        *(a1 + 0x738) = 0;
        *(a1 + 0x730) = x87_r7_18;
        *(a1 + 0x724) = 0;
        *(a1 + 0x728) = 0;
        *(a1 + 0x72c) = 0;
        *(a1 + 0x73c) = 0;
        sub_4f4820(a1);
        sub_4f4800(a1);
        Vehicle_UpdateRudder_3(a1);
        long double x87_r7_19 = *(a1 + 0x180);
        long double temp2_1 = 0f;
        x87_r7_19 - temp2_1;
        void* eax_21;
        float ecx_4;
        int32_t* edx_6;

        if (!(*(&((x87_r7_19 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_19 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_433a68:
            eax_21 = a1 + 0xf0;
            edx_6 = eax_21 + 0x18;
            *(eax_21 + 0x18) = *(a1 + 0x180);
            edx_6[1] = *(a1 + 0x184);
            ecx_4 = *(a1 + 0x188);
        }
        else
        {
            long double x87_r7_20 = *(a1 + 0x184);
            long double temp3_1 = 0f;
            x87_r7_20 - temp3_1;

            if (!(*(&((x87_r7_20 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_20, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_20 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_433a68;

            long double x87_r7_21 = *(a1 + 0x188);
            long double temp4_1 = 0f;
            x87_r7_21 - temp4_1;

            if (!(*(&((x87_r7_21 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_21, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_21 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_433a68;

            eax_21 = a1 + 0xf0;
            edx_6 = eax_21 + 0x18;
            long double x87_r7_24 = **(*(a1 + 0x1b4) + 0x2d4) * *(a1 + 0x720) * 30.3407402f;
            var_c = x87_r7_24 * *(a1 + 0x74);
            int32_t ecx_2 = var_c;
            *(&var_c + 4) = x87_r7_24 * *(a1 + 0x80);
            long double x87_r7_25 = x87_r7_24 * *(a1 + 0x8c);
            *edx_6 = ecx_2;
            edx_6[1] = *(&var_c + 4);
            ecx_4 = x87_r7_25;
        }

        edx_6[2] = ecx_4;
        sub_4ecdb0(eax_21);
        void* eax_22 = *(a1 + 0xe8);

        if (eax_22)
        {
            *(&var_c + 4) = a1 + 0x70;
            var_c = a1 + 0x20;
            float var_4_2 = a1;
            int32_t* i = *(eax_22 + 8);

            if (*i && i)
            {
                int32_t ecx_7 = g_afa7e0;

                do
                {
                    int32_t* edx_8 = *i;
                    void* eax_26;

                    if (!edx_8)
                        eax_26 = nullptr;
                    else
                    {
                        int32_t eax_23 = *edx_8;
                        int32_t eax_24 = -(eax_23);
                        eax_26 = (eax_24 - eax_24) & edx_8;
                    }

                    *((ecx_7 << 2) + &g_afa6e0) = eax_26;
                    g_afa7e0 = ecx_7 + 1;
                    uint32_t eax_28 = MagicObj_GetEventId();
                    int32_t ecx_9 = 0;
                    ecx_9 = i[7];
                    int32_t eax_32 = *(((eax_28 * 0x180 + ecx_9) << 2) + &g_a96ae0);

                    if (eax_32)
                        eax_32(i, &var_c);

                    ecx_7 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_7;
                    i = *((ecx_7 << 2) + &g_afa6e0);
                } while (i);
            }
        }

        ecx_11 = a2;
    }

    void* result = *ecx_11;

    if (result <= 0)
        return result;

    FUN_00433B50(a1);
    return sub_4f4660(a1);
}
