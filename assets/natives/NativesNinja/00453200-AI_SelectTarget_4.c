#include "00453200-AI_SelectTarget_4.h"
/* 0x00453200 AI_SelectTarget_4 full linked: callers=2 callees=4 */
int32_t* sub_453200(int32_t* a1)

{
    int32_t* i_1 = g_58aa18;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == a1[0xedb])
        {
            int32_t* i_2 = i_1;
            return sub_4530a0(a1);
        }

        i_1 = i;
    }

    int32_t* esi = g_57c748;

    if (!*esi)
        return 0;

    sub_4af960(esi);
    sub_4af8f0(&g_58aa18, esi);
    int32_t* var_18 = esi;
    esi[2] = a1[0xedb];
    return sub_4530a0(a1);
}
