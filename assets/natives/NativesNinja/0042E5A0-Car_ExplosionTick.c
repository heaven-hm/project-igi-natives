#include "0042E5A0-Car_ExplosionTick.h"
/* 0x0042e5a0 Car_ExplosionTick full linked: callers=1 callees=12 */
int32_t* Car_ExplosionTick(double* a1)

{
    int32_t* eax;
    eax = *(a1 + 0x91c);

    if (eax)
    {
        long double x87_r7_1 = *(a1 + 0x9c);
        long double x87_r6_1 = a1[0x14];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = a1[0x14];
        else
            x87_r7_2 = *(a1 + 0x9c);

        long double x87_r6_2 = a1[0x13];
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = *(a1 + 0x9c);
            long double x87_r6_3 = a1[0x14];
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = a1[0x14];
            else
                x87_r7_4 = *(a1 + 0x9c);
        }
        else
            x87_r7_4 = a1[0x13];

        int32_t* eax_2 = *(a1 + 0x6c);
        float i_1 = x87_r7_4;
        long double st0_1 = sub_4d0950(eax_2);
        void* edx_1 = *(*(a1 + 0x1b4) + 0x2d4);
        void* ecx_2 = a1[0x124];
        float i_2 = *(edx_1 + 0x2ac);
        i_1 = st0_1 * i_1;
        int32_t var_20;

        if (ecx_2 == 0xffffffff)
        {
            if (!i_2)
            {
                void* var_68_1 = ecx_2;
                void* var_6c = ecx_2;
                void* var_70 = ecx_2;
                struct status_msg* eax_5 = sub_480fe0(&a1[4], 1, 0, 0x3f800000, i_1 * 0.25f,
                    i_1 * 0.0500000007f, i_1 * 0.00499999989f, 3, 1, nullptr, "1009_01_1",
                    "explo_03_l", 0x15, 2, 0x47c80000, 0);
                a1[0x124] = 0xa;
                return eax_5;
            }

            if (i_2 > 0)
            {
                int32_t* ebx_1 = edx_1 + 0x284;
                i_1 = i_2;
                float i;

                do
                {
                    uint32_t eax_4 = sub_4b47c0(Level_SetMission_5(), 0x1e);
                    WeaponType_UpdateAnim(&var_20, a1, *ebx_1);
                    var_20 = var_20 + a1[4];
                    int32_t var_18;
                    var_18 = var_18 + a1[5];
                    double var_10 = var_10 + a1[6];
                    sub_480fe0(&var_20, 1, eax_4, 0x3f800000, 0x46400000, 0x45400000, 0x45400000,
                        3, 2, nullptr, "1009_01_1", "explo_03_l", 0x15, 2, 0x47c80000, 0);
                    i = i_1;
                    ebx_1 = &ebx_1[1];
                    i_2 = i - 1;
                    i_1 = i_2;
                } while (i != 1);
            }

            a1[0x124] = 0x1e;
            return i_2;
        }

        eax = ecx_2 - 1;
        a1[0x124] = eax;

        if (!eax)
        {
            int32_t* var_2c = eax;
            int32_t* var_28_1 = eax;
            int32_t* var_24_1 = eax;
            var_20 = 0x3f800000;
            int32_t var_1c_1 = 0x3f800000;
            int32_t var_18_1 = 0x3f800000;
            sub_4f3390(sub_4f0ee0(), edx_1 + 0x2b0, &a1[4], &a1[0xe], &var_20, &var_2c);
            i_1 = Level_StartMission_4();
            QTask_CleanupTypes(a1);
            a1[0xe9] = 0;
            sub_4f4820(a1);
            eax = Car_Cleanup(a1, &i_1);
            *(a1 + 0x2ed5) = 1;
        }
    }

    return eax;
}
