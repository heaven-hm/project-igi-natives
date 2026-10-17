// Original IGI.EXE function: Render_DrawSplineMesh_5 (VA 0x004D2E40; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawSplineMesh_5.h"
void* Render_DrawSplineMesh_5(int32_t* context)

{
    int32_t i = 0;

    if (*(*context * 0xc + &g_a542f0) > 0)
    {
        int32_t dest_1 = 0;

        do
        {
            void* data_2 = *(dest_1 + context[2] + 0x80);

            if (data_2)
                Render_DrawBoneMesh_6(data_2);

            i += 1;
            *(dest_1 + context[2] + 0x80) = 0;
            dest_1 += 0x84;
        } while (i < *(*context * 0xc + &g_a542f0));
    }

    void* result = context[2];

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        context[2] = 0;
    }

    *context = 0;
    context[1] = 0;
    context[2] = 0;
    return result;
}
