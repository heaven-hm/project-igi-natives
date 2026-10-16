#include "gi_platform.h"
#include "0048AE70-FX_FireBallUpdate_18.h"
void* FX_FireBallUpdate_18(int32_t a1, void* a2, int32_t a3, int32_t a4)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x24)) = a4;

    if (!a3)
        return a2;

    return a3(a1, a2);
}
