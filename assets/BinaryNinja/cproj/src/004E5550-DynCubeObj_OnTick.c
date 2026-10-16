#include "gi_platform.h"
#include "004E5550-DynCubeObj_OnTick.h"
int32_t DynCubeObj_OnTick(void* a1, int32_t a2, int32_t a3)

{
    int32_t result = ((a3 << ((*(int32_t*)(uintptr_t)(a1 + 4)) & 0x1f)) + (a2 & 0xfffffff8)) >> 3;
    (*(int32_t*)(uintptr_t)(result + a1 + 0xc)) |= 1 << (a2 & 7);
    return result;
}
