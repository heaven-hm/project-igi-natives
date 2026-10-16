#include "004647D0-AI_CheckSector_22.h"
/* 0x004647d0 AI_CheckSector_22 full linked: callers=4 callees=0 */
int32_t sub_4647d0(void* a1)

{
    long double x87_r7 = *(a1 + 0x1cc);
    long double temp0 = *(a1 + 0x1d0);
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
        long double x87_r7_1 = *(a1 + 0x1d8);
        long double temp1_1 = *(a1 + 0x1dc);
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            result = 1;
            return result;
        }
    }

    result = 0;
    return result;
}
