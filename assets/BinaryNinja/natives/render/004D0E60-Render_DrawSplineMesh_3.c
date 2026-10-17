// Original IGI.EXE function: Render_DrawSplineMesh_3 (VA 0x004D0E60; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawSplineMesh_3.h"
void Render_DrawSplineMesh_3(void* a1, void* a2)

{
    void* tmpD = a2;

    if (!tmpD)
        return;

    int32_t i = 0;
    void* valA = *(a1 + 0xc);

    if (*(valA + 0x10) <= 0)
        return;

    int32_t objC2 = 0;

    do
    {
        i += 1;
        tmpD += 4;
        int32_t valA2 = *(*(valA + 0x14) + objC2 + 4);
        objC2 += 0x14;
        *(tmpD - 4) = valA2;
        valA = *(a1 + 0xc);
    } while (i < *(valA + 0x10));
}
