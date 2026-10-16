#include "00450F10-AI_UpdatePatrol_2.h"
/* 0x00450f10 AI_UpdatePatrol_2 full linked: callers=1 callees=7 */
int32_t sub_450f10(void* a1, void* a2)

{
    void* ebp = a1;
    char ebx = 0;
    sub_450ee0(ebp);
    int32_t* i_1 = *(a2 + 8);
    int32_t result = 0;

    for (int32_t* i = i_1[1]; i; i = i[1])
    {
        if (!ebx)
        {
            ebx = 1;
            a1 = i_1[4];
        }

        i_1[4] = a1;
        int32_t edx_2 = *(i_1[1] + 4);
        i_1[1] = 0;
        *i_1 = 0;
        int32_t* var_24_1;
        int32_t* var_20_1;

        if (edx_2)
        {
            var_20_1 = ebp + 0x8fc;
            sub_4af910(var_20_1, i_1);
            var_24_1 = Level_SetMission_5();
            i_1[3] = (sub_4b4770(var_24_1) + 1f) * 0.200000003f * 30f;
        }
        else
        {
            var_20_1 = ebp + 0x8fc;
            sub_4af910(var_20_1, i_1);
            var_24_1 = Level_SetMission_5();
            i_1[3] = (sub_4b4770(var_24_1) + 1f) * 0.200000003f * 30f;
        }

        result = i_1[5](ebp, i_1, var_24_1, var_20_1, i_1);
        i_1 = i;
    }

    return result;
}
