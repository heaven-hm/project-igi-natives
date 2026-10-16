#include "00434770-Plane_Update.h"
/* 0x00434770 Plane_Update full linked: callers=0 callees=18 */
int32_t Plane_Update(float a1)

{
    void* eax = sub_4cec10(a1 + 0x154);
    sub_4f4820(a1);

    if (eax)
    {
        sub_4c48d0(a1, eax);
        sub_4fb700(a1, sub_4ee140(a1 + 0x154));
        Vehicle_UpdateRudder_3(a1);
    }
    else if (*(a1 + 0x154) && *(a1 + 0x155) != 0x2a)
    {
        char* var_124_2 = a1 + 0x154;
        void var_80;
        Game_DataSymbolLoad(&var_80, "Model "%s" not available");
        char* edi_1 = a1 + 0x154;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_1 = ~i;
        void var_100;
        int32_t esi_2;
        int32_t edi_3;
        edi_3 = memcpy(&var_100, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        memcpy(edi_3, esi_2, ecx_1 & 3);
        void* var_130_2 = &var_100;
        Game_DataSymbolLoad(a1 + 0x154, "** %s **");
    }

    *(a1 + 0x730) = *(a1 + 0x740);
    float var_110 = *(a1 + 0x740);
    long double x87_r7_2 = *(a1 + 0x180);
    long double temp0 = 0f;
    x87_r7_2 - temp0;
    *(a1 + 0x720) = var_110;
    void* eax_7;
    float* ecx_5;

    if (!(*(&((x87_r7_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4348c6:
        eax_7 = a1 + 0xf0;
        ecx_5 = eax_7 + 0x18;
        *(eax_7 + 0x18) = *(a1 + 0x180);
        ecx_5[1] = *(a1 + 0x184);
        ecx_5[2] = *(a1 + 0x188);
        sub_4ecdb0(eax_7);
    }
    else
    {
        long double x87_r7_3 = *(a1 + 0x184);
        long double temp1_1 = 0f;
        x87_r7_3 - temp1_1;

        if (!(*(&((x87_r7_3 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4348c6;

        long double x87_r7_4 = *(a1 + 0x188);
        long double temp2_1 = 0f;
        x87_r7_4 - temp2_1;

        if (!(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4348c6;

        float eax_5 = *(a1 + 0x1b4);

        if (eax_5)
        {
            eax_7 = a1 + 0xf0;
            long double x87_r7_7 = var_110 * **(eax_5 + 0x2d4) * 30.3407402f;
            ecx_5 = eax_7 + 0x18;
            float var_108_1 = x87_r7_7 * *(a1 + 0x80);
            long double x87_r7_8 = x87_r7_7 * *(a1 + 0x8c);
            *ecx_5 = x87_r7_7 * *(a1 + 0x74);
            ecx_5[1] = var_108_1;
            ecx_5[2] = x87_r7_8;
            sub_4ecdb0(eax_7);
        }
    }
    long double x87_r7_9 = *(a1 + 0x9c);
    long double x87_r6_5 = *(a1 + 0xa0);
    x87_r6_5 - x87_r7_9;
    long double x87_r7_10;

    if (!(*(&((x87_r6_5 < x87_r7_9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_9) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_10 = *(a1 + 0xa0);
    else
        x87_r7_10 = *(a1 + 0x9c);

    long double x87_r6_6 = *(a1 + 0x98);
    x87_r6_6 - x87_r7_10;
    long double x87_r7_12;

    if (*(&((x87_r6_6 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_6 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_13 = *(a1 + 0x9c);
        long double x87_r6_7 = *(a1 + 0xa0);
        x87_r6_7 - x87_r7_13;

        if (!(*(&((x87_r6_7 < x87_r7_13 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_7, x87_r7_13) ? 1 : 0) << 0xa
                | (x87_r6_7 == x87_r7_13 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_12 = *(a1 + 0xa0);
        else
            x87_r7_12 = *(a1 + 0x9c);
    }
    else
        x87_r7_12 = *(a1 + 0x98);

    float var_124_5 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_12;
    sub_4c6940(Level_StartMission_4(), a1, a1 + 0x168, var_124_5);
    memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
    sub_4f4800(a1);
    int32_t* i_1 = *(*(a1 + 0xe8) + 8);

    if (*i_1 && i_1)
    {
        int32_t ecx_7 = g_afa7e0;

        do
        {
            int32_t* edx_7 = *i_1;
            void* eax_14;

            if (!edx_7)
                eax_14 = nullptr;
            else
            {
                int32_t eax_11 = *edx_7;
                int32_t eax_12 = -(eax_11);
                eax_14 = (eax_12 - eax_12) & edx_7;
            }

            *((ecx_7 << 2) + &g_afa6e0) = eax_14;
            g_afa7e0 = ecx_7 + 1;
            uint32_t eax_16 = sub_4f1a70();
            int32_t ecx_9 = 0;
            ecx_9 = i_1[7];
            int32_t eax_20 = *(((eax_16 * 0x180 + ecx_9) << 2) + &g_a96ae0);

            if (eax_20)
                eax_20(i_1, 0);

            ecx_7 = g_afa7e0 - 1;
            g_afa7e0 = ecx_7;
            i_1 = *((ecx_7 << 2) + &g_afa6e0);
        } while (i_1);
    }

    sub_4f1400(a1 + 0x838, a1);
    return 0;
}
