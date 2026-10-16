#include "004A8C37-Camera_ResetMatrix_15.h"
/* 0x004a8c37 Camera_ResetMatrix_15 full linked: callers=0 callees=0 */
long double sub_4a8c37(void* a1 @ ebp, int80_t a2 @ st0, long double a3 @ st1)

{
    *(a1 - 0x9e) = a2;
    long double x87_r0 = *(a1 - 0x9e);

    if (*(a1 - 0x97) & 0x40)
    {
        long double x87_r0_1 = a3;
        a3 = x87_r0;
        *(a1 - 0x9e) = x87_r0_1;
        x87_r0 = *(a1 - 0x9e);
    }

    if (!(*(a1 - 0x97) & 0x40) || !(*(a1 - 0x97) & 0x40))
        *(a1 - 0x90) = 1;
    else
        *(a1 - 0x90) = 7;

    return a3 + x87_r0;
}
