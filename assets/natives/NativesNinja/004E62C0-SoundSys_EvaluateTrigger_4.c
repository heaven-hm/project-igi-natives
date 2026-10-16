#include "004E62C0-SoundSys_EvaluateTrigger_4.h"
/* 0x004e62c0 SoundSys_EvaluateTrigger_4 full linked: callers=1 callees=11 */
void sub_4e62c0()

{
    int32_t* i_1 = g_a5e5f4;

    if (!i_1)
        return;

    int32_t* i;

    do
    {
        i = i_1[1];
        int32_t* var_10_3;
        int32_t* eax_10;
        int32_t ecx;
        int32_t edx;

        if (!(i_1[2] & 1))
        {
            int32_t eax_11 = i_1[6];

            if (eax_11 <= 0)
                i_1[6] = eax_11 + 1;
            else
            {
                void* eax_12 = i_1[7];

                if (!eax_12)
                {
                    sub_4e63b0(i_1, &g_a5e5f4);
                    eax_10 = sub_4e6290(i_1, &g_a5e5ec);
                }
                else
                {
                    sub_496e40(eax_12);
                    var_10_3 = i_1[7];
                label_4e6354:
                    sub_496650(var_10_3);
                    sub_4e63b0(i_1, &g_a5e5f4);
                    eax_10 = sub_4e6290(i_1, &g_a5e5ec);
                }
            }
        }
        else
        {
            void* eax_2 = i_1[7];
            char eax_3;

            if (eax_2)
                eax_3 = sub_4966e0(eax_2, edx, ecx, eax_2);

            if (!eax_2 || eax_3)
            {
                int32_t eax_6 = i_1[7];

                if (eax_6)
                    ecx = sub_496e60(eax_6, &i_1[8]);

                long double x87_r7_1 = i_1[8];
                long double temp0_1 = 0f;
                x87_r7_1 - temp0_1;

                if (*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    void* eax_8 = i_1[7];

                    if (eax_8)
                    {
                        sub_496e40(eax_8);
                        var_10_3 = i_1[7];
                        goto label_4e6354;
                    }

                    sub_4e63b0(i_1, &g_a5e5f4);
                    eax_10 = sub_4e6290(i_1, &g_a5e5ec);
                }
            }
            else
            {
                sub_496e40(i_1[7]);
                sub_496650(i_1[7]);
                sub_4e63b0(i_1, &g_a5e5f4);
                int32_t* eax_5;
                eax_5 = sub_4e6290(i_1, &g_a5e5ec);
            }
        }
        i_1 = i;
    } while (i);
}
