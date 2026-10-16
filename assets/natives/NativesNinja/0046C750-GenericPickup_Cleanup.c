#include "0046C750-GenericPickup_Cleanup.h"
/* 0x0046c750 GenericPickup_Cleanup full linked: callers=0 callees=7 */
int32_t sub_46c750(float a1, int32_t a2)

{
    int32_t* esi = a1;
    int32_t result;
    result = *(esi + 0x11a);

    if (!result)
    {
        result = *(esi + 0x119);

        if (!result)
        {
            long double x87_r7_1 = esi[0x27];
            long double x87_r6_1 = esi[0x28];
            x87_r6_1 - x87_r7_1;
            long double x87_r7_2;

            if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_2 = esi[0x28];
            else
                x87_r7_2 = esi[0x27];

            long double x87_r6_2 = esi[0x26];
            x87_r6_2 - x87_r7_2;
            long double x87_r7_4;

            if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r7_5 = esi[0x27];
                long double x87_r6_3 = esi[0x28];
                x87_r6_3 - x87_r7_5;

                if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_4 = esi[0x28];
                else
                    x87_r7_4 = esi[0x27];
            }
            else
                x87_r7_4 = esi[0x26];

            float var_c_2 = sub_4d0950(esi[0x1b]) * x87_r7_4;
            sub_4c7140(Level_StartMission_4(), esi, &esi[0x3c], var_c_2, 2);
            double* eax_3 = sub_4c3440(esi);
            result = sub_4dccb0(Level_StartMission_4(), esi, eax_3);
            *(esi + 0x11a) = 1;
        }
    }

    int32_t* i = esi[2];

    if (*i && i)
    {
        int32_t ecx_2 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_8;

            if (!edx_1)
                eax_8 = nullptr;
            else
            {
                int32_t eax_5 = *edx_1;
                int32_t eax_6 = -(eax_5);
                eax_8 = (eax_6 - eax_6) & edx_1;
            }

            *((ecx_2 << 2) + &g_afa6e0) = eax_8;
            g_afa7e0 = ecx_2 + 1;
            uint32_t eax_10 = sub_4cea10();
            int32_t eax_11 = 0;
            eax_11 = i[7];
            result = *(((eax_10 * 0x180 + eax_11) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            ecx_2 = g_afa7e0 - 1;
            g_afa7e0 = ecx_2;
            i = *((ecx_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
