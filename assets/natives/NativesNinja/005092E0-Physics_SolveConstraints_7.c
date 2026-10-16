#include "005092E0-Physics_SolveConstraints_7.h"
/* 0x005092e0 Physics_SolveConstraints_7 full linked: callers=3 callees=5 */
void* sub_5092e0(void* a1)

{
    Qhash_Init(1);
    void* eax = *(a1 + 0xb8);

    if (eax)
    {
        sub_4b0d10(eax);
        *(a1 + 0xb8) = 0;
    }

    int32_t eax_1 = *(a1 + 0x58);

    if (eax_1 > 1)
    {
        *(a1 + 0xb8) = Mem_Alloc((eax_1 * eax_1) << 3, 4);
        sub_509340(a1);
    }

    return Qhash_Reset();
}
