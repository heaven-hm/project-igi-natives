#include "gi_platform.h"
#include "004DEE90-Render_SetupLighting_15.h"
void* Render_SetupLighting_15(void* a1, char* a2)

{
    void* result = DynObj_Missing(a2);

    if ((*(int32_t*)(uintptr_t)(a1 + 0x6c)) != result)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = result;
        (*(int32_t*)(uintptr_t)(a1 + 0x18c)) = 0;
    }

    return result;
}
