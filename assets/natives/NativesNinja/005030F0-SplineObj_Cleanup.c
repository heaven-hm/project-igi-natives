#include "005030F0-SplineObj_Cleanup.h"
/* 0x005030f0 SplineObj_Cleanup full linked: callers=0 callees=1 */
void* sub_5030f0(void* a1, int32_t a2)

{
    void* result = *(a1 + 0x14);

    if (!*(result + 0x4d))
        return result;

    return (*((sub_4c48c0() << 2) + &g_a9a0e0))(a1, a2);
}
