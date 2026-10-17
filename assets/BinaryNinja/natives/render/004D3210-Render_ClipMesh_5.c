// Original IGI.EXE function: Render_ClipMesh_5 (VA 0x004D3210; static CFG gate PASS, CFG score 1.000).
#include "Render_ClipMesh_5.h"
int32_t Render_ClipMesh_5(int32_t context, int32_t* param_2)

{
    int32_t result = 0;
    int32_t __saved_ecx_1 = *(*param_2 * 0xc + &g_a542f0);

    if (__saved_ecx_1 <= 0)
        return 0;

    int32_t context_val = 0;
    int32_t saved_ctx = __saved_ecx_1;
    bool flag_0_1;

    do
    {
        void* source_2 = context_val + param_2[2];
        void* data_2 = *(source_2 + 0x80);

        if (data_2)
        {
            *(source_2 + 4) &= 0xfffeffff;
            result = Render_DrawRigidMesh_6(context, result, source_2, data_2);
            Render_BindTexture_6(source_2);

            if (!*(source_2 + 0x80))
                *(source_2 + 4) &= 0xfff87eff;
        }

        context_val += 0x84;
        flag_0_1 = saved_ctx != 1;
        saved_ctx -= 1;
    } while (flag_0_1);
    return result;
}
