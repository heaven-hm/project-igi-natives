#include "Render_SetupLighting_5.h"
float* Render_SetupLighting_5(float* a1, float* a2, float* a3, float a4)

{
    float v_8_1 = (a2[1] - a3[1]) * a4;
    float v_4_1 = (a2[2] - a3[2]) * a4;
    *a1 = (*a2 - *a3) * a4 + *a3;
    a1[1] = v_8_1 + a3[1];
    a1[2] = v_4_1 + a3[2];
    return a3;
}
