// Original IGI.EXE function: HumanPlayer_ApplyPhysics (VA 0x00408420; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyPhysics.h"
void* HumanPlayer_ApplyPhysics(void* context)

{
    long double fpu7 = *(context + 0x254);
    long double f0 = *(context + 0x258);
    fpu7 - f0;
    void* result;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        result = Human_HitDamage();

        if (!result)
        {
            int32_t data_val = *(context + 0x2f4);
            *(context + 0xcf5) = 1;
            result = data_val | 0x20000;
            *(context + 0x2f4) = result;
        }
    }

    return result;
}
