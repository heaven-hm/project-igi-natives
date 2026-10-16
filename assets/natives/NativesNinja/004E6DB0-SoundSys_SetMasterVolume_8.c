#include "004E6DB0-SoundSys_SetMasterVolume_8.h"
/* 0x004e6db0 SoundSys_SetMasterVolume_8 full linked: callers=3 callees=19 */
void sub_4e6db0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, float* a5)

{
    int32_t* ebp = g_a5e5f4;
    int32_t ebx = 0;

    if (!ebp)
    {
    label_4e6ddd:
        int32_t* ebp_1 = g_a5e5ec;

        if (ebp_1)
        {
            float* esi_1 = a5;
            float* eax_1 = &ebp_1[8];
            a5 = eax_1;

            if (!esi_1)
            {
                sub_4974a0(eax_1);
                eax_1 = a5;
            }
            else
                memcpy(eax_1, esi_1, 0x58);

            if (g_a5e60b)
            {
            label_4e6f65:
                ebp_1[7] = ebx;
                ebp_1[3] = a2;
                ebp_1[4] = a3;
                ebp_1[2] = a4;
                ebp_1[5] = a1;
                ebp_1[6] = 0;
                sub_4e63b0(ebp_1, &g_a5e5ec);
                sub_4e6290(ebp_1, &g_a5e5f4);
            }
            else
            {
                ebx = sub_496770(a2, a3, a4, eax_1);

                if (ebx)
                {
                    long double x87_r7_3 = *a5;
                    long double temp0_1 = 0f;
                    x87_r7_3 - temp0_1;

                    if (!(*(&((x87_r7_3 < temp0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e6f65;

                    sub_496e40(ebx);
                    sub_496650(ebx);
                    return;
                }

                if (g_a5e60b)
                    goto label_4e6f65;
            }
        }
    }
    else
    {
        while (ebp[4] != a3 || ebp[5] != a1)
        {
            ebp = ebp[1];

            if (!ebp)
                goto label_4e6ddd;
        }

        if (!ebp)
            goto label_4e6ddd;

        ebp[6] = 0;

        if (!a5)
            sub_4974a0(&ebp[8]);
        else
            memcpy(&ebp[8], a5, 0x58);

        int32_t eax_2 = ebp[7];

        if (!eax_2)
        {
            if (g_a5e60b)
                goto label_4e6ea8;

            int32_t eax_5 = sub_496770(a2, a3, a4, &ebp[8]);

            if (!eax_5)
            {
            label_4e6eda:
                sub_4e63b0(ebp, &g_a5e5f4);
                sub_4e6290(ebp, &g_a5e5ec);
                return;
            }

            long double x87_r7_1 = ebp[8];
            long double temp2_1 = 0f;
            x87_r7_1 - temp2_1;

            if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                ebp[7] = eax_5;
                goto label_4e6ea8;
            }

            sub_496e40(eax_5);
            sub_496650(eax_5);
            sub_4e63b0(ebp, &g_a5e5f4);
            sub_4e6290(ebp, &g_a5e5ec);
            return;
        }

        sub_496e60(eax_2, &ebp[8]);
    label_4e6ea8:
        long double x87_r7_2 = ebp[8];
        long double temp1_1 = 0f;
        x87_r7_2 - temp1_1;

        if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            void* eax_9 = ebp[7];

            if (eax_9)
            {
                sub_496e40(eax_9);
                sub_496650(ebp[7]);
            }

            goto label_4e6eda;
        }
    }
}
