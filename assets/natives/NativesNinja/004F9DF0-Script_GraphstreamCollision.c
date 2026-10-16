#include "004F9DF0-Script_GraphstreamCollision.h"
/* 0x004f9df0 Script_GraphstreamCollision full linked: callers=11 callees=4 */
void* sub_4f9df0(char* a1, int32_t a2, int32_t a3)

{
    void* result = sub_4f9e70(a1);
    int32_t* i_1 = g_a774a0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == result)
        {
            char* var_8_2 = a1;
            return Warning_Show("GraphStream - collision in hash for %s");
        }

        i_1 = i;
    }

    int32_t* esi_1 = g_a76d18;

    if (!*esi_1)
        return result;

    esi_1[2] = result;
    esi_1[3] = a2;
    esi_1[4] = a3;
    sub_4af960(esi_1);
    esi_1[1] = 0;
    *esi_1 = 0;
    return sub_4af8f0(&g_a774a0, esi_1);
}
