#include "Render_DrawLightmapMesh_3.h"
void Render_DrawLightmapMesh_3(void* a1, int32_t* a2)

{
    int32_t* objC = a2;

    if (!objC)
        return;

    int32_t i = 0;
    void* valA = *(a1 + 0xc);

    if (*(valA + 0x10) <= 0)
        return;

    int32_t tmpD2 = 0;

    do
    {
        int32_t ctxB1 = *objC;
        i += 1;
        objC = &objC[1];
        *(*(valA + 0x14) + tmpD2 + 4) = ctxB1;
        valA = *(a1 + 0xc);
        tmpD2 += 0x14;
    } while (i < *(valA + 0x10));
}
