#include "gi_platform.h"
#include "0043A5F0-Vehicle_1009011.h"
int32_t Vehicle_1009011(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x1a1));

    if (result)
        return result;

    FX_SmokeEmit(a1 + 0x20, 1, 0, 0x3d4ccccd, 0x45800000, 0, 0x45000000, 5, 2, nullptr,
        "1009_01_1", a1 + 0x180, 0x15, 2, 0x46a00000, 0);
    (*(int32_t*)(uintptr_t)(a1 + 0x1a1)) = 1;
    return DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x150));
}
