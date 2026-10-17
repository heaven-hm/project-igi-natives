// Original IGI.EXE function: SplineObj_Cleanup_4 (VA 0x00503180; static CFG gate PASS, CFG score 1.000).
#include "SplineObj_Cleanup_4.h"
void* SplineObj_Cleanup_4(void* a1, int32_t a2)

{
    void* result = *(a1 + 0x14);

    if (!*(result + 0x4d))
        return result;

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a9ace0))(a1, a2);
}
