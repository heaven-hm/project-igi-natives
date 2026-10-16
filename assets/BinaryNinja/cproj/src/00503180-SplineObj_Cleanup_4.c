#include "gi_platform.h"
#include "00503180-SplineObj_Cleanup_4.h"
void* SplineObj_Cleanup_4(void* a1, int32_t a2)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x14));

    if (!*(result + 0x4d))
        return result;

    return ((int(*)())(uintptr_t)(*((DynObj_LookupHashItem_5() << 2) + &g_a9ace0)))(a1, a2);
}
