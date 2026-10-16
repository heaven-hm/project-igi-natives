#include "0050B4C0-Physics_EvaluateAreaCriteria_12.h"
/* 0x0050b4c0 Physics_EvaluateAreaCriteria_12 full linked: callers=1 callees=0 */
int32_t sub_50b4c0(int32_t a1, int32_t a2)

{
    int32_t eax = a1;

    if (eax >= a2)
        eax = a2;

    int32_t eflags;
    int32_t eax_1;
    eax_1 = __bsr_gprv_memv(eax);
    int32_t ecx_1 = 0;
    ecx_1 = eax_1 <= 0;
    return ((ecx_1 - 1) & eax_1) + 1;
}
