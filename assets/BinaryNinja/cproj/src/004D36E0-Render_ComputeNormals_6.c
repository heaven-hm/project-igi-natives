#include "gi_platform.h"
#include "004D36E0-Render_ComputeNormals_6.h"
int32_t Render_ComputeNormals_6(void* a1)

{
    void* v_c = a1;
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x10));

    if (result)
        result = result((*(int32_t*)(uintptr_t)(a1 + 0x18)));

    (*(int32_t*)(uintptr_t)(a1 + 0x18)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = 0;
    return result;
}
