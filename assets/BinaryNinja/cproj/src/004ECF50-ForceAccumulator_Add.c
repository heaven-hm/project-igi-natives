#include "gi_platform.h"
#include "004ECF50-ForceAccumulator_Add.h"
void* ForceAccumulator_Add(void* a1, int32_t a2)

{
    memcpy((*(int32_t*)(uintptr_t)(a1 + 0x54)) + (*(int32_t*)(uintptr_t)(a1 + 0x5c)) * 0x18, a2, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) += 1;
    return a1;
}
