#include "Render_ComputeNormals_14.h"
int32_t Render_ComputeNormals_14(int32_t a1, void* a2, double* a3)

{
    double* v_30 = a3;
    void* v_28 = nullptr;
    int32_t v_24 = 0;
    int32_t v_2c = 1;
    DynObj_CreateMagicObject_11(a1, Render_DrawBoneMesh_4(), &v_30, a3, 0xffffffff, 5);

    if (v_28 && v_28 != v_24 && *(v_28 + 0x138) < *(v_28 + 0x13c))
    {
        int32_t objC2 = g_a5e320;

        if (objC2 < g_a5e324)
        {
            int32_t* valA7 = *(g_a5e31c + (objC2 << 2)) * g_a5e328 + g_a5e318;
            *(g_a5e32c + valA7) = objC2;
            g_a5e320 += 1;
            valA7[1] = v_28;
            valA7[2] = v_24;
            int32_t srcS2 = *(v_28 + 0x138);
            int32_t* objC9 =
                *(*(v_28 + 0x134) + (srcS2 << 2)) * *(v_28 + 0x140) + *(v_28 + 0x130);
            *(*(v_28 + 0x144) + objC9) = srcS2;
            void* tmpD2 = valA7[1];
            *(tmpD2 + 0x138) += 1;
            *valA7 = objC9;
            *objC9 = a2;
            *(a2 + 0x60) = 1;
            return 1;
        }
    }

    *(a2 + 0x60) = 0;
    return 0;
}
