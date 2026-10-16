#include "Render_ComputeNormals_4.h"
void Render_ComputeNormals_4(void* a1)

{
    for (void* i = a1; i; i = *(i + 0x58))
    {
        int32_t valA = 0;
        valA = *(i + 0x1c);
        int32_t dstD1 = *((valA << 2) + &g_a982e0);

        if (dstD1)
            dstD1(i, Qtask_GetCallbackData(i));

        int32_t objC1 = 0;
        objC1 = *(i + 0x1c);
        int32_t dstD2 = *((objC1 << 2) + &g_a988e0);

        if (dstD2)
            dstD2(i, Qtask_GetCallbackData(i));
    }
}
