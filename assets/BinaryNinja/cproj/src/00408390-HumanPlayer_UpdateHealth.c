#include "gi_platform.h"
#include "00408390-HumanPlayer_UpdateHealth.h"
int32_t HumanPlayer_UpdateHealth(int32_t a1)

{
    int32_t dstD = 0;
    int32_t result;

    for (void* i = &g_569210; i < 0x56df10; )
    {
        result = DynObj_LinkDynamicCube_11(a1, dstD, i);
        i += 0x268;
        dstD += 1;
    }

    return result;
}
