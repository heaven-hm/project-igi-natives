#include "0052D630-Light_ApplyLightmap_11.h"
/* 0x0052d630 Light_ApplyLightmap_11 full linked: callers=1 callees=2 */
int32_t sub_52d630(int32_t* a1, int32_t* a2)

{
    int32_t ebx;
    int32_t var_204 = ebx;
    void var_100;
    sub_52d4b0(a1, &var_100, 0x100, 1, 1, 1);
    void var_200;
    sub_52d4b0(a2, &var_200, 0x100, 1, 1, 1);
    char* esi = &var_200;
    char* eax_1 = &var_100;

    while (true)
    {
        char edx_1 = *eax_1;
        char ebx_1 = *esi;
        bool c_1 = edx_1 < ebx_1;

        if (edx_1 == ebx_1)
        {
            if (!edx_1)
                break;

            edx_1 = eax_1[1];
            ebx_1 = esi[1];
            c_1 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                eax_1 = &eax_1[2];
                esi = &esi[2];

                if (!edx_1)
                    break;

                continue;
            }
        }

        return eax_1 - eax_1 + 1;
    }

    return 0;
}
