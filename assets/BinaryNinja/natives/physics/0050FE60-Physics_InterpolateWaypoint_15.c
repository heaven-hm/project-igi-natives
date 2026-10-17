// Original IGI.EXE function: Physics_InterpolateWaypoint_15 (VA 0x0050FE60; static CFG gate FAIL, CFG score 0.833).
#include "Physics_InterpolateWaypoint_15.h"
int32_t Physics_InterpolateWaypoint_15()

{
    long double x87_r7_1 = g_bcabc0 + g_bcabb8;
    int32_t objC = g_bcabbc;
    g_c311ac = g_bcabb8;
    g_c311a0 = g_bcab2c;
    int32_t valA2 = g_b16c6c;
    g_c31084 = x87_r7_1;
    long double x87_r7_3 = g_bcabc4 + g_bcabbc;
    g_c311a8 = objC;
    int32_t tmpD = g_bcab28;
    g_c31080 = x87_r7_3;
    long double x87_r7_5 = g_bcabc8 + g_bcabb8;
    g_c311a4 = tmpD;
    g_c311b0 = x87_r7_5;
    g_c311b4 = g_bcabcc + g_bcabbc;
    int32_t v_34_1 = valA2 + 0x40;
    g_c311b8 = 1f / (valA2 - 0x40);
    v_34_1 = v_34_1 * 0.375;
    g_c31088 = v_34_1;
    g_c28fc0 = g_c311b8 * 2.66666675f;
    char valA4 = Terrain_SelectTerrainLOD_8();
    long double x87_r7_14 = g_bcab08;
    float v_30 = g_bcab10;
    long double x87_r6_1 = g_bcab18;
    g_c3108c = valA4;
    float v_2c = x87_r6_1;
    float v_28;
    memcpy(&v_28, &g_bcaae0, 0x28);
    long double x87_r7_15 = -(x87_r7_14);
    long double x87_r6_3 = -(v_30);
    long double x87_r5_1 = -(v_2c);
    float v_1c;
    float v_18;
    float v_14;
    float v_30_1 = v_14 * x87_r5_1 + v_18 * x87_r6_3 + v_1c * x87_r7_15;
    float v_10;
    float v_c;
    float v_8;
    float v_2c_1 = v_8 * x87_r5_1 + v_c * x87_r6_3 + v_10 * x87_r7_15;
    float v_24;
    float v_20;
    g_943b78 = v_20 * x87_r5_1 + v_24 * x87_r6_3 + v_28 * x87_r7_15;
    memcpy(0x943b50, &v_28, 0x28);
    g_943b7c = v_30_1;
    bool cond_0 = !g_b16ca4;
    g_943b80 = v_2c_1;
    g_c28fbc = 0;
    g_c31090 = 0;

    if (cond_0)
        return 0;

    return Terrain_RenderQuadtree();
}
