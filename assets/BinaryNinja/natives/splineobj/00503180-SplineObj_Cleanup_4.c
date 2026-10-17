// Original IGI.EXE function: SplineObj_Cleanup_4 (VA 0x00503180; static CFG gate PASS, CFG score 1.000).
#include "SplineObj_Cleanup_4.h"
void* SplineObj_Cleanup_4(void* context, int32_t param_2)

{
    void* result = *(context + 0x14);

    if (!*(result + 0x4d))
        return result;

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a9ace0))(context, param_2);
}
