#include "00453270-AI_UpdateSensors_4.h"
/* 0x00453270 AI_UpdateSensors_4 full linked: callers=2 callees=4 */
void sub_453270()

{
    int32_t* i_1 = g_58aa18;

    for (int32_t* i = *i_1; i; i = *i)
    {
        int32_t* j_1 = i_1[3];

        for (int32_t* j = *j_1; j; j = *j)
        {
            sub_4af960(j_1);
            sub_4af8f0(&g_57e1b8, j_1);
            j_1 = j;
        }

        sub_4af960(i_1);
        sub_4af8f0(&g_57c748, i_1);
        i_1 = i;
    }
}
