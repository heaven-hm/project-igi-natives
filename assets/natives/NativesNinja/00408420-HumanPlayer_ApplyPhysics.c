#include "00408420-HumanPlayer_ApplyPhysics.h"
/* 0x00408420 HumanPlayer_ApplyPhysics full linked: callers=1 callees=1 */
void* HumanPlayer_ApplyPhysics(void* a1)

{
    long double x87_r7 = *(a1 + 0x254);
    long double temp0 = *(a1 + 0x258);
    x87_r7 - temp0;
    void* result;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        result = Human_HitDamage();

        if (!result)
        {
            int32_t eax = *(a1 + 0x2f4);
            *(a1 + 0xcf5) = 1;
            result = eax | 0x20000;
            *(a1 + 0x2f4) = result;
        }
    }

    return result;
}
