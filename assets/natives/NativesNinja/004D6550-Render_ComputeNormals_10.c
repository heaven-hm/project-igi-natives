#include "004D6550-Render_ComputeNormals_10.h"
/* 0x004d6550 Render_ComputeNormals_10 full linked: callers=1 callees=0 */
int32_t sub_4d6550(void* a1)

{
    long double x87_r7 = *(a1 + 0x28);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int32_t result = *(a1 + 8);

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        result &= 0xfd;
        *(a1 + 8) = result;
        return result;
    }

    result |= 2;
    *(a1 + 8) = result;
    return result;
}
