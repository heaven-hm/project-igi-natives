#include "gi_platform.h"
#include "00512040-Terrain_SampleHeightmap.h"
int32_t Terrain_SampleHeightmap(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t* a7, int32_t* a8, int32_t* a9, char a10, char a11, char a12)

{
    memcpy(&g_a7dab0, a4, 0x18);
    memcpy(0xa7db10, a1, 0x30);
    int32_t result = *a7;
    g_a7da70 = result;
    int32_t tmpD = a7[1];
    g_a7da74 = tmpD;
    int32_t ctxB = a7[2];
    g_a7da78 = ctxB;
    int32_t flagP = a7[3];
    g_a7da7c = flagP;
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
    int32_t v_18_1;
    int32_t v_14_1;

    if (!(a10 & 0x10))
    {
        result = a12;

        if (a11 & 0x10)
        {
            if (0x10 & result)
            {
                Terrain_CalculateNormals(1, 0);
                return Terrain_CalculateNormals(2, 0);
            }

            int32_t valA3 = g_a7da84;
            g_a7daa0 = g_a7da80;
            int32_t tmpD2 = g_a7da8c;
            memcpy(0xa7daf8, 0xa7dac8, 0x18);
            memcpy(0xa7dba0, 0xa7db40, 0x30);
            int32_t objC6 = g_a7da88;
            g_a7daa4 = valA3;
            g_a7daa8 = objC6;
            g_a7daac = tmpD2;
            Terrain_CalculateNormals(1, 0);
            return Terrain_CalculateNormals(3, 2);
        }

        if (!(0x10 & result))
            return result;

        int32_t tmpD3 = g_a7da98;
        g_a7daa0 = g_a7da90;
        int32_t valA6 = g_a7da9c;
        v_14_1 = 0;
        memcpy(0xa7daf8, 0xa7dae0, 0x18);
        g_a7daa8 = tmpD3;
        memcpy(0xa7dba0, 0xa7db70, 0x30);
        int32_t objC7 = g_a7da94;
        g_a7daac = valA6;
        g_a7daa4 = objC7;
        v_18_1 = 2;
    }
    else
    {
        if (a11 & 0x10)
        {
            Terrain_CalculateNormals(0, 2);
            return Terrain_CalculateNormals(1, 2);
        }

        if (a12 & 0x10)
        {
            Terrain_CalculateNormals(0, 1);
            return Terrain_CalculateNormals(2, 1);
        }

        v_14_1 = 2;
        memcpy(0xa7daf8, &g_a7dab0, 0x18);
        g_a7daa0 = result;
        memcpy(0xa7dba0, 0xa7db10, 0x30);
        g_a7daa4 = tmpD;
        g_a7daa8 = ctxB;
        g_a7daac = flagP;
        v_18_1 = 0;
    }

    Terrain_CalculateNormals(v_18_1, v_14_1);
    return Terrain_CalculateNormals(3, 1);
}
