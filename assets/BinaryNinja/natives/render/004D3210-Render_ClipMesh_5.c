#include "Render_ClipMesh_5.h"
int32_t Render_ClipMesh_5(int32_t a1, int32_t* a2)

{
    int32_t result = 0;
    int32_t __saved_ecx_1 = *(*a2 * 0xc + &g_a542f0);

    if (__saved_ecx_1 <= 0)
        return 0;

    int32_t ctxB = 0;
    int32_t saved_ctx = __saved_ecx_1;
    bool cond_0_1;

    do
    {
        void* srcS2 = ctxB + a2[2];
        void* valA2 = *(srcS2 + 0x80);

        if (valA2)
        {
            *(srcS2 + 4) &= 0xfffeffff;
            result = Render_DrawRigidMesh_6(a1, result, srcS2, valA2);
            Render_BindTexture_6(srcS2);

            if (!*(srcS2 + 0x80))
                *(srcS2 + 4) &= 0xfff87eff;
        }

        ctxB += 0x84;
        cond_0_1 = saved_ctx != 1;
        saved_ctx -= 1;
    } while (cond_0_1);
    return result;
}
