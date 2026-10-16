#include "gi_platform.h"
#include "004D0E60-Render_DrawSplineMesh_3.h"
void Render_DrawSplineMesh_3(void* a1, void* a2)

{
    void* tmpD = a2;

    if (!tmpD)
        return;

    int32_t i = 0;
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0xc));

    if ((*(int32_t*)(uintptr_t)(valA + 0x10)) <= 0)
        return;

    int32_t objC2 = 0;

    do
    {
        i += 1;
        tmpD += 4;
        int32_t valA2 = (*(int32_t*)(uintptr_t)(*(valA + 0x14) + objC2 + 4));
        objC2 += 0x14;
        *(tmpD - 4) = valA2;
        valA = (*(int32_t*)(uintptr_t)(a1 + 0xc));
    } while (i < (*(int32_t*)(uintptr_t)(valA + 0x10)));
}
