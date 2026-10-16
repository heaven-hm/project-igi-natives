#include "004DA0A0-Render_SkinBones_12.h"
/* 0x004da0a0 Render_SkinBones_12 full linked: callers=1 callees=1 */
int32_t sub_4da0a0(void* a1, double* a2, double* a3, int32_t* a4, float a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)

{
    *(a1 + 0x6c) = a5;

    if (!a4)
    {
        *(a1 + 0x80) = 0;
        *(a1 + 0x84) = 0;
        *(a1 + 0x88) = 0;
    }
    else
    {
        *(a1 + 0x80) = *a4;
        *(a1 + 0x84) = a4[1];
        *(a1 + 0x88) = a4[2];
    }

    *(a1 + 0x70) = a6;
    *(a1 + 0x74) = a7;
    *(a1 + 0x78) = a8;
    *(a1 + 0x7c) = a9;
    double var_20 = (*a3 - *a2) * 0.5 + *a2;
    double var_18 = (a3[1] - a2[1]) * 0.5 + a2[1];
    double var_10 = (a3[2] - a2[2]) * 0.5 + a2[2];
    return sub_4c6e70(*(a1 + 0x68), a1, &var_20, a2, a3);
}
