#include "004A8C0D-Camera_ApplyPostProcess_15.h"
/* 0x004a8c0d Camera_ApplyPostProcess_15 full linked: callers=0 callees=0 */
long double sub_4a8c0d(void* a1 @ ebp, long double a2 @ st0, int80_t a3 @ st1)

{
    *(a1 - 0x9e) = a3;
    long double x87_r0_1 = *(a1 - 0x9e);

    if (!(*(a1 - 0x97) & 0x40))
        *(a1 - 0x90) = 1;
    else
        *(a1 - 0x90) = 7;

    return a2 + x87_r0_1;
}
