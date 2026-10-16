#include "gi_platform.h"
#include "00496D80-Display_CreateSurface_11.h"
int32_t Display_CreateSurface_11(int32_t a1, void* a2, int32_t a3, int32_t a4)

{
    if (a3 <= 0)
        return a3;

    Resource_Unpack((*(int32_t*)(uintptr_t)(a2 + 0x18)), a1, a3 * a4);
    return Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a2 + 0x18)));
}
