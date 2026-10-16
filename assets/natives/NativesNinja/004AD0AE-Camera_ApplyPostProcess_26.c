#include "004AD0AE-Camera_ApplyPostProcess_26.h"
/* 0x004ad0ae Camera_ApplyPostProcess_26 full linked: callers=1 callees=0 */
int32_t sub_4ad0ae(int32_t a1)

{
    if (a1 >= g_c32540)
        return 0;

    int32_t eax_1 = a1 & 0x1f;
    eax_1 = *((&g_c32440)[a1 >> 5] + (eax_1 << 3) + 4);
    return eax_1 & 0x40;
}
