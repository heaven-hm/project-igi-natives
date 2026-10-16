#include "gi_platform.h"
#include "00494690-Display_CreateSurface_6.h"
int32_t __stdcall Display_CreateSurface_6(void* a1, void* a2)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0xc));

    if ((*(int32_t*)(uintptr_t)(a2 + 0xc)) < valA && (*(int32_t*)(uintptr_t)(a1 + 4)) == 0x400 && valA <= (*(int32_t*)(uintptr_t)(a2 + 0x20)))
        memcpy(a2, a1, 0x20);

    return 1;
}
