#include "00516E83-Terrain_CalculateNormals_4.h"
/* 0x00516e83 Terrain_CalculateNormals_4 full linked: callers=1 callees=2 */
int32_t sub_516e83(int32_t a1)

{
    int32_t edi = 0;
    void var_1c;
    char* var_8;
    char eax = sub_4adbf9(&var_1c, &var_8, a1, 0, 0, 0, 0);
    int32_t var_10;

    if (!(eax & 4))
    {
        int32_t eax_1 = sub_4acaec(&var_1c, &var_10);

        if (eax & 2 || eax_1 == 1)
            edi = 0x80;

        if (eax & 1 || eax_1 == 2)
            edi |= 0x100;
    }
    else
    {
        edi = 0x200;
        var_10 = 0;
        int32_t var_c_1 = 0;
    }

    **&g_54ec40 = edi;
    *(g_54ec40 + 4) = var_8 - a1;
    *(g_54ec40 + 0x10) = var_10;
    return g_54ec40;
}
