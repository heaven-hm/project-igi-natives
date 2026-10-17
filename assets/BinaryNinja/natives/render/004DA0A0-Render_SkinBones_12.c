// Original IGI.EXE function: Render_SkinBones_12 (VA 0x004DA0A0; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_12.h"
int32_t Render_SkinBones_12(void* a1, double* a2, double* a3, int32_t* a4, float a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)

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
    double v_20 = (*a3 - *a2) * 0.5 + *a2;
    double v_18 = (a3[1] - a2[1]) * 0.5 + a2[1];
    double v_10 = (a3[2] - a2[2]) * 0.5 + a2[2];
    return DynObj_UpdateDynTree_8(*(a1 + 0x68), a1, &v_20, a2, a3);
}
