#include "004D27F0-Render_ComputeNormals_4.h"
/* 0x004d27f0 Render_ComputeNormals_4 full linked: callers=2 callees=2 */
void sub_4d27f0(void* a1)

{
    for (void* i = a1; i; i = *(i + 0x58))
    {
        int32_t eax = 0;
        eax = *(i + 0x1c);
        int32_t edi_1 = *((eax << 2) + &g_a982e0);

        if (edi_1)
            edi_1(i, Qtask_GetCallbackData(i));

        int32_t ecx_1 = 0;
        ecx_1 = *(i + 0x1c);
        int32_t edi_2 = *((ecx_1 << 2) + &g_a988e0);

        if (edi_2)
            edi_2(i, Qtask_GetCallbackData(i));
    }
}
