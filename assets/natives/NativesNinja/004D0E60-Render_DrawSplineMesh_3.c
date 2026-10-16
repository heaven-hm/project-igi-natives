#include "004D0E60-Render_DrawSplineMesh_3.h"
/* 0x004d0e60 Render_DrawSplineMesh_3 full linked: callers=1 callees=0 */
void sub_4d0e60(void* a1, void* a2)

{
    void* edx = a2;

    if (!edx)
        return;

    int32_t i = 0;
    void* eax = *(a1 + 0xc);

    if (*(eax + 0x10) <= 0)
        return;

    int32_t ecx_2 = 0;

    do
    {
        i += 1;
        edx += 4;
        int32_t eax_2 = *(*(eax + 0x14) + ecx_2 + 4);
        ecx_2 += 0x14;
        *(edx - 4) = eax_2;
        eax = *(a1 + 0xc);
    } while (i < *(eax + 0x10));
}
