#include "00504A90-Physics_CheckHullCollision_3.h"
/* 0x00504a90 Physics_CheckHullCollision_3 full linked: callers=3 callees=1 */
int32_t sub_504a90(int32_t a1)

{
    int32_t ecx = a1;
    int32_t eax = 0;

    while (!(ecx & 1))
    {
        ecx s>>= 1;
        eax += 1;
    }

    int32_t eax_2 = eax * 0xc;
    *(eax_2 + &g_a7a640) = 0;
    return sub_4b8920(*(eax_2 + 0xa7a644));
}
