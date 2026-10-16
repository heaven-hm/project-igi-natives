#include "0044FF80-Env_CheckAmbientArea_13.h"
/* 0x0044ff80 Env_CheckAmbientArea_13 full linked: callers=1 callees=2 */
void* sub_44ff80(void* a1)

{
    void* result = a1;
    int32_t* i_1 = *(result + 0xe0);

    for (int32_t* i = *i_1; i; i = *i)
    {
        sub_4af960(i_1);
        i_1[1] = 0;
        *i_1 = 0;
        result = sub_4af8f0(&g_58a9c8, i_1);
        i_1 = i;
    }

    return result;
}
