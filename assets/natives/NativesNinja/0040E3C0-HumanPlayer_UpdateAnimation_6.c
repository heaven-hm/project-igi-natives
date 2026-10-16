#include "0040E3C0-HumanPlayer_UpdateAnimation_6.h"
/* 0x0040e3c0 HumanPlayer_UpdateAnimation_6 full linked: callers=0 callees=3 */
int32_t HumanPlayer_UpdateAnimation_6(void* a1, void* a2)

{
    long double x87_r7 = *(a2 + 0x230);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int32_t ebx = *(a1 + 8);
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
    label_40e3f4:

        if (!(ebx & 0x20000))
            return result;
    }
    else
    {
        long double x87_r7_1 = *(a2 + 0x190);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_40e3f4;
    }

    sub_46c050();
    sub_464710(*(a2 + 0x4ec));
    sub_463600(a2);
    *(a2 + 0x670) = 0;
    *(a2 + 0x674) = 0;
    *(a2 + 0x678) = 0;
    *(a1 + 0xc) = *(a1 + 0x10);

    if (!(ebx & 0x20000))
    {
        int32_t* edx_2 = *(a1 + 4);
        *(a1 + 0x10) = 0;
        int32_t eax_3 = *edx_2;
        *(a1 + 0x14) = eax_3;
        return eax_3(a1, a2);
    }

    void* edx_1 = *(a1 + 4);
    *(a1 + 0x10) = 0x2f;
    int32_t eax_1 = *(edx_1 + 0xbc);
    *(a1 + 0x14) = eax_1;
    return eax_1(a1, a2);
}
