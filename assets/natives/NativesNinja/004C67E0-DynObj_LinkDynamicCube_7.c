#include "004C67E0-DynObj_LinkDynamicCube_7.h"
/* 0x004c67e0 DynObj_LinkDynamicCube_7 full linked: callers=6 callees=0 */
int32_t sub_4c67e0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    int32_t eax_3 = (a1 ^ a4) | (a2 ^ a5) | (a3 ^ a6);

    if (!eax_3)
        return 0x2000;

    int32_t eflags;
    int32_t eax_5;
    eax_5 = __bsr_gprv_memv(eax_3);
    int32_t result = 1 << (eax_5 & 0x1f);

    if (result < 0x2000)
        return 0x2000;

    if (result <= 0x40000000)
        return result;

    return 0x40000000;
}
