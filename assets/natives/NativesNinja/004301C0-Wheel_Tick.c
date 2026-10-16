#include "004301C0-Wheel_Tick.h"
/* 0x004301c0 Wheel_Tick full linked: callers=0 callees=7 */
int32_t Wheel_Tick(float a1)

{
    int32_t* esi = a1;
    int32_t result_1 = esi[0x4c];
    int16_t eax = sub_4f45f0();
    int32_t ecx;
    ecx = *(esi[0x4c] + 0x1c);
    int32_t result = TaskType_IsDerivedFrom(ecx, eax);

    if (result)
    {
        if (esi[0x54])
            return QTask_FindType(esi);

        float ebp_1 = esi[0x4c];
        int16_t eax_4 = Menu_LeaveMenus_23();

        if (*(ebp_1 + 0x1c) != eax_4)
            esi[0x4e] = *(result_1 + 0x720);
        else
        {
            a1 = 0f;
            void* ecx_1 = *(esi[0x53] + 0x2d4);
            void* ebx_1 = *(*(ebp_1 + 0x1b4) + 0x2d4);
            int32_t eax_7 = esi[0x52] * 5;
            int32_t edi = *(ebx_1 + (eax_7 << 2) + 0x124);

            if (edi < 0)
                edi = 0xfffffff6 - edi;

            int32_t ecx_4 = edi * 7;
            int16_t eax_10;

            if (*(ebp_1 + (ecx_4 << 3) + 0x1d6))
            {
                float var_c;
                sub_4ecf80(&var_c, ebp_1 + 0xf0, ebp_1 + (ecx_4 << 3) + 0x1c8);
                float var_4;
                long double x87_r7_1 = var_4;
                float var_8;
                long double x87_r6_1 = var_8;
                long double x87_r5_1 = var_c;
                long double x87_r4_5 =
                    sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
                a1 = x87_r4_5;
                long double temp0_1 = 40.9599991f;
                x87_r4_5 - temp0_1;
                eax_10 = (x87_r4_5 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_5, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r4_5 == temp0_1 ? 1 : 0) << 0xe;

                if (*(&eax_10 + 1) & 1)
                    a1 = 0f;
            }
            else if (*(ebx_1 + (eax_7 << 2) + 0x11d))
                a1 = *(result_1 + 0x720) * 44.6008873f * *(*(*(result_1 + 0x1b4) + 0x2d4) + 0x1c)
                    / *(ebp_1 + 0x758) * 0.600000024f;

            eax_10 = *(ebx_1 + 0x261);

            if (eax_10)
                a1 = Vehicle_InitPlane(ebp_1, edi) * a1;

            void* ebx_2 = ebx_1 + esi[0x52] * 0x14;
            esi[0x4e] =
                a1 / (*(ecx_1 + 0x2e8) * 6.2831853071795889) * 6.2831853071795889 * 0.300000012f
                + esi[0x4e] * 0.699999988f;
            int16_t eax_15;
            eax_15 = *(ebx_2 + 0x11c);

            if (eax_15)
                esi[0x51] = -((*(ebx_2 + 0x120) * *(result_1 + 0x72c) * 0.0174532924f));

            long double x87_r7_19 = esi[0x4f];
            long double temp2_1 = 0f;
            x87_r7_19 - temp2_1;

            if (!(*(&((x87_r7_19 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                int32_t ebx_3 = *(ebx_2 + 0x124);

                if (ebx_3 >= 0)
                {
                    void* eax_16 = *(esi[0x53] + 0x2d4);
                    float ecx_10 = *(eax_16 + 0x2ec);
                    float var_2c_3 = ecx_10;
                    Vehicle_UpdateRudder(ebp_1, ebx_3, esi[0x4f] * *(eax_16 + 0x2ec), ecx_10);
                }
            }
        }

        result = result_1;

        if (*(result + 0x744))
            esi[0x4e] = 0;

        long double x87_r7_22 = esi[0x4f];
        long double temp1_1 = 0f;
        x87_r7_22 - temp1_1;
        result = (x87_r7_22 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            esi[0x4e] = 0;
            esi[0x50] = 0;
        }

        esi[0x50] = esi[0x50] - esi[0x4e];
        int32_t* i_1 = esi[2];

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t edx_6 = g_afa7e0;

                do
                {
                    int32_t* esi_1 = *i;
                    void* eax_20;

                    if (!esi_1)
                        eax_20 = nullptr;
                    else
                    {
                        int32_t eax_17 = *esi_1;
                        int32_t eax_18 = -(eax_17);
                        eax_20 = (eax_18 - eax_18) & esi_1;
                    }

                    *((edx_6 << 2) + &g_afa6e0) = eax_20;
                    int32_t edx_7 = edx_6 + 1;
                    int32_t eax_21 = 0;
                    g_afa7e0 = edx_7;
                    eax_21 = i[7];
                    result = *((eax_21 << 2) + &g_a970e0);

                    if (result)
                    {
                        result = result(i);
                        edx_7 = g_afa7e0;
                    }

                    i = *((edx_7 << 2) + &g_afa6dc);
                    edx_6 = edx_7 - 1;
                    g_afa7e0 = edx_6;
                } while (i);
            }
        }
    }

    return result;
}
