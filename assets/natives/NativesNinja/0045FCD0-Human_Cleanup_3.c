#include "0045FCD0-Human_Cleanup_3.h"
/* 0x0045fcd0 Human_Cleanup_3 full linked: callers=0 callees=5 */
int32_t sub_45fcd0(void* a1, void* a2)

{
    void* ebp = *(a1 + 0x4ec);
    sub_465800(a2, ebp);
    sub_465880(a2 + 0x18, *(a1 + 0x4ec));
    *(a2 + 0x40) = *(ebp + 0x1e4);
    memcpy(a2 + 0x44, a1 + 0x78, 0x28);
    int32_t result = *(ebp + 0x1e8);
    *(a2 + 0x6c) = result;
    *(a2 + 0x70) = *(a1 + 0x4f0);
    result = *(ebp + 0x13a);

    if (result)
    {
        memcpy(a2, ebp + 0x140, 0x18);
        memcpy(a2 + 0x18, ebp + 0x158, 0x28);
        *(a2 + 0x70) = 4;
    }

    long double x87_r7 = *(a1 + 0x1fc);
    long double temp0 = 0f;
    x87_r7 - temp0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = *(a1 + 0x15c);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
            *(a1 + 0x4f4) ^= 1;
    }

    result = *(a1 + 0x4f4);

    if (result)
        *(a2 + 0x70) = 2;

    return result;
}
