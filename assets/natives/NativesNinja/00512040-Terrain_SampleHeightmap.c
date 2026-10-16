#include "00512040-Terrain_SampleHeightmap.h"
/* 0x00512040 Terrain_SampleHeightmap full linked: callers=1 callees=22 */
int32_t sub_512040(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t* a7, int32_t* a8, int32_t* a9, char a10, char a11, char a12)

{
    memcpy(&g_a7dab0, a4, 0x18);
    memcpy(0xa7db10, a1, 0x30);
    int32_t result = *a7;
    g_a7da70 = result;
    int32_t edx = a7[1];
    g_a7da74 = edx;
    int32_t ebx = a7[2];
    g_a7da78 = ebx;
    int32_t ebp = a7[3];
    g_a7da7c = ebp;
    memcpy(0xa7dac8, a5, 0x18);
    memcpy(0xa7db40, a2, 0x30);
    g_a7da80 = *a8;
    g_a7da84 = a8[1];
    g_a7da88 = a8[2];
    g_a7da8c = a8[3];
    memcpy(0xa7dae0, a6, 0x18);
    memcpy(0xa7db70, a3, 0x30);
    g_a7da90 = *a9;
    g_a7da94 = a9[1];
    g_a7da98 = a9[2];
    g_a7da9c = a9[3];
    int32_t var_18_1;
    int32_t var_14_1;

    if (!(a10 & 0x10))
    {
        result = a12;

        if (a11 & 0x10)
        {
            if (0x10 & result)
            {
                sub_5122b0(1, 0);
                return sub_5122b0(2, 0);
            }

            int32_t eax_3 = g_a7da84;
            g_a7daa0 = g_a7da80;
            int32_t edx_2 = g_a7da8c;
            memcpy(0xa7daf8, 0xa7dac8, 0x18);
            memcpy(0xa7dba0, 0xa7db40, 0x30);
            int32_t ecx_6 = g_a7da88;
            g_a7daa4 = eax_3;
            g_a7daa8 = ecx_6;
            g_a7daac = edx_2;
            sub_5122b0(1, 0);
            return sub_5122b0(3, 2);
        }

        if (!(0x10 & result))
            return result;

        int32_t edx_3 = g_a7da98;
        g_a7daa0 = g_a7da90;
        int32_t eax_6 = g_a7da9c;
        var_14_1 = 0;
        memcpy(0xa7daf8, 0xa7dae0, 0x18);
        g_a7daa8 = edx_3;
        memcpy(0xa7dba0, 0xa7db70, 0x30);
        int32_t ecx_7 = g_a7da94;
        g_a7daac = eax_6;
        g_a7daa4 = ecx_7;
        var_18_1 = 2;
    }
    else
    {
        if (a11 & 0x10)
        {
            sub_5122b0(0, 2);
            return sub_5122b0(1, 2);
        }

        if (a12 & 0x10)
        {
            sub_5122b0(0, 1);
            return sub_5122b0(2, 1);
        }

        var_14_1 = 2;
        memcpy(0xa7daf8, &g_a7dab0, 0x18);
        g_a7daa0 = result;
        memcpy(0xa7dba0, 0xa7db10, 0x30);
        g_a7daa4 = edx;
        g_a7daa8 = ebx;
        g_a7daac = ebp;
        var_18_1 = 0;
    }

    sub_5122b0(var_18_1, var_14_1);
    return sub_5122b0(3, 1);
}
