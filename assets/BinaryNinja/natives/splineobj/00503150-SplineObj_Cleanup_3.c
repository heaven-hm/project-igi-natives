#include "SplineObj_Cleanup_3.h"
void* SplineObj_Cleanup_3(void* a1, int32_t a2)

{
    void* result = *(a1 + 0x14);

    if (!*(result + 0x4d))
        return result;

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a9a6e0))(a1, a2);
}
