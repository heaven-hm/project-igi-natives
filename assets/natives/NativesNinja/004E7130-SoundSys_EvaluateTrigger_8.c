#include "004E7130-SoundSys_EvaluateTrigger_8.h"
/* 0x004e7130 SoundSys_EvaluateTrigger_8 full linked: callers=3 callees=4 */
void sub_4e7130()

{
    int32_t* i_1 = g_a5e5f4;

    if (!i_1)
        return;

    int32_t* i;

    do
    {
        void* eax_1 = i_1[7];
        i = i_1[1];

        if (eax_1)
        {
            sub_496e40(eax_1);
            sub_496650(i_1[7]);
        }

        sub_4e63b0(i_1, &g_a5e5f4);
        sub_4e6290(i_1, &g_a5e5ec);
        i_1 = i;
    } while (i);
}
