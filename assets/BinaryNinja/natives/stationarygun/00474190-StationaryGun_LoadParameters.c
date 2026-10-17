// Original IGI.EXE function: StationaryGun_LoadParameters (VA 0x00474190; static CFG gate PASS, CFG score 1.000).
#include "StationaryGun_LoadParameters.h"
uint32_t StationaryGun_LoadParameters(float context)

{
    uint32_t result = Frames_GetUpdateCounter();

    if (*(context + 0x218) != result)
    {
        uint32_t data_val = Frames_GetUpdateCounter();
        void* dest_1 = *(context + 0x208);
        *(context + 0x218) = data_val;

        if (!dest_1)
        {
            long double fpu_val_7_18 = *(context + 0x1e4) * 0.0174532924f;
            long double f0_1 = *(context + 0x1f8);
            fpu_val_7_18 - f0_1;

            if (*(&((fpu_val_7_18 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_18, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_18 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double f2_1 = *(context + 0x1f8);
                fpu_val_7_18 - f2_1;

                if (*(&((fpu_val_7_18 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_18, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_18 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double fpu_val_6_4 = *(context + 0x1f8) - 0.0872664675f;
                    *(context + 0x1f8) = fpu_val_6_4;
                    fpu_val_6_4 - fpu_val_7_18;

                    if (*(&((fpu_val_6_4 < fpu_val_7_18 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_4, fpu_val_7_18) ? 1 : 0) << 0xa
                            | (fpu_val_6_4 == fpu_val_7_18 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(context + 0x1f8) = fpu_val_7_18;
                }
            }
            else
            {
                long double fpu_val_6_2 = *(context + 0x1f8) + 0.0872664675f;
                *(context + 0x1f8) = fpu_val_6_2;
                fpu_val_6_2 - fpu_val_7_18;

                if (!(*(&((fpu_val_6_2 < fpu_val_7_18 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_2, fpu_val_7_18) ? 1 : 0) << 0xa
                        | (fpu_val_6_2 == fpu_val_7_18 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(context + 0x1f8) = fpu_val_7_18;
            }

            Gun_SpawnRound(context, 0);
        }
        else
        {
            char context_1 = 0;
            *(context + 0x1f8) = *(dest_1 + 0x1b4) * 3.14159274f + *(context + 0x1f8);
            *(context + 0x1fc) = -((*(dest_1 + 0x1b0) * 3.14159274f)) + *(context + 0x1fc);
            Weapon_EjectShell_3(context);
            long double fpu_val_7_8 = *(dest_1 + 0x1c8);
            long double f1_1 = 0.0f;
            fpu_val_7_8 - f1_1;

            if (!(*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                context_1 = 1;

            *(context + 0x200) = *(context + 0x1f8) + *(context + 0x1f0);
            *(context + 0x204) = *(context + 0x1fc) + *(context + 0x1f4);
            *(context + 0x1f0) = *(context + 0x1f0) * 0.899999976f;
            *(context + 0x1f4) = *(context + 0x1f4) * 0.899999976f;
            Gun_SpawnRound(context, context_1);
        }

        int32_t saved_ebx_1 = context + 0x70;
        Weapon_ComputeAccuracy_3(context);
        uint32_t* i = *(context + 8);
        result = *i;

        if (result && i)
        {
            int32_t temp_1 = g_afa7e0;

            do
            {
                uint32_t source_1 = *i;
                int32_t data_8;

                if (!source_1)
                    data_8 = 0;
                else
                {
                    int32_t data_5 = *source_1;
                    int32_t data_6 = -(data_5);
                    data_8 = (data_6 - data_6) & source_1;
                }

                *((temp_1 << 2) + &g_afa6e0) = data_8;
                int32_t temp_2 = temp_1 + 1;
                int32_t data_9 = 0;
                g_afa7e0 = temp_2;
                data_9 = i[7];
                result = *((data_9 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    temp_2 = g_afa7e0;
                }

                i = *((temp_2 << 2) + &g_afa6dc);
                temp_1 = temp_2 - 1;
                g_afa7e0 = temp_1;
            } while (i);
        }
    }

    return result;
}
