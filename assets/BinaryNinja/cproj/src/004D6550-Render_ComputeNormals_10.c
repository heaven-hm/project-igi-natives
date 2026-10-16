#include "gi_platform.h"
#include "004D6550-Render_ComputeNormals_10.h"
int32_t Render_ComputeNormals_10(void* a1)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    long double f0 = 0.0f;
    fpu7 - f0;
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        result &= 0xfd;
        (*(int32_t*)(uintptr_t)(a1 + 8)) = result;
        return result;
    }

    result |= 2;
    (*(int32_t*)(uintptr_t)(a1 + 8)) = result;
    return result;
}
