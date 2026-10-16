#include "004E6830-SoundSys_EvaluateTrigger_6.h"
/* 0x004e6830 SoundSys_EvaluateTrigger_6 full linked: callers=0 callees=7 */
int32_t* sub_4e6830(int32_t* a1)

{
    int32_t* i_1 = g_a5e5f4;
    void var_400;
    sub_497390(&var_400, *a1);
    int32_t eax_1 = sub_497410(&var_400);

    if (i_1)
    {
        int32_t* i;

        do
        {
            i = i_1[1];

            if (i_1[4] == eax_1)
            {
                void* eax_3 = i_1[7];

                if (eax_3)
                {
                    sub_496e40(eax_3);
                    sub_496650(i_1[7]);
                }

                sub_4e63b0(i_1, &g_a5e5f4);
                sub_4e6290(i_1, &g_a5e5ec);
            }

            i_1 = i;
        } while (i);
    }

    return sub_4965a0(*a1);
}
