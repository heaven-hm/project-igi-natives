#include "00503120-SplineObj_Cleanup_2.h"
/* 0x00503120 SplineObj_Cleanup_2 full linked: callers=0 callees=1 */
void* sub_503120(void* a1, int32_t a2)

{
    void* result = *(a1 + 0x14);

    if (!*(result + 0x4d))
        return result;

    return (*((sub_4c48c0() << 2) + &g_a99ae0))(a1, a2);
}
