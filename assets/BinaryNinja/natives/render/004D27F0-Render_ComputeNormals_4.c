// Original IGI.EXE function: Render_ComputeNormals_4 (VA 0x004D27F0; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_4.h"
void Render_ComputeNormals_4(void* context)

{
    for (void* i = context; i; i = *(i + 0x58))
    {
        int32_t data_val = 0;
        data_val = *(i + 0x1c);
        int32_t dest_1 = *((data_val << 2) + &g_a982e0);

        if (dest_1)
            dest_1(i, Qtask_GetCallbackData(i));

        int32_t entity_1 = 0;
        entity_1 = *(i + 0x1c);
        int32_t dest_2 = *((entity_1 << 2) + &g_a988e0);

        if (dest_2)
            dest_2(i, Qtask_GetCallbackData(i));
    }
}
