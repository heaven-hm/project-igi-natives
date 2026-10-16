#include "004D0EA0-Render_DrawLightmapMesh_3.h"
/* 0x004d0ea0 Render_DrawLightmapMesh_3 full linked: callers=1 callees=0 */
void sub_4d0ea0(void* a1, int32_t* a2)

{
    int32_t* ecx = a2;

    if (!ecx)
        return;

    int32_t i = 0;
    void* eax = *(a1 + 0xc);

    if (*(eax + 0x10) <= 0)
        return;

    int32_t edx_2 = 0;

    do
    {
        int32_t ebx_1 = *ecx;
        i += 1;
        ecx = &ecx[1];
        *(*(eax + 0x14) + edx_2 + 4) = ebx_1;
        eax = *(a1 + 0xc);
        edx_2 += 0x14;
    } while (i < *(eax + 0x10));
}
