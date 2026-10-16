#include "gi_platform.h"
#include "00490E90-Display_ClearSurfaces_2.h"
HRESULT Display_ClearSurfaces_2(void* a1, int32_t a2, uint32_t a3, int32_t a4, int32_t a5)

{
    HRESULT valA1 =
        AVIStreamRead((*(int32_t*)(uintptr_t)(a1 + 0x9c)), a2, 1, (*(int32_t*)(uintptr_t)(a1 + 0x160)), (*(int32_t*)(uintptr_t)(a1 + 0x140)), nullptr, nullptr);

    if (valA1)
    {
        valA1 = 0;
        return valA1;
    }

    uint32_t valA4 = ICDecompress((*(int32_t*)(uintptr_t)(a1 + 0x15c)), a3, a1 + 0x12c, (*(int32_t*)(uintptr_t)(a1 + 0x160)),
        (*(int32_t*)(uintptr_t)(a1 + 0x154)), (*(int32_t*)(uintptr_t)(a1 + 0x164)));

    if (valA4)
    {
        valA4 = 0;
        return valA4;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x1c)) = a2;
    valA4 = 1;
    return valA4;
}
